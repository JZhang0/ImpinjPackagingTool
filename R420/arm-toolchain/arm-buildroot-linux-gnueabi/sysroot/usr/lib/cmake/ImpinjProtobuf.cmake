# A version of protobuf_generate that works with packages.
#
# We are distributing our Mach2 and Sahara protobuf interfaces as part of a package called
# either mach2 or sahara.  This means that you want to import the generated Protobuf Python
# code like so:
#
# test.py:
#
# from package import Foo_pb2 as sc
# OR
# import package.Foo_pb2
#
# If Foo.proto contains a reference to Bar.proto that interface better be findable using the same PYTHONPATH that
# used to find Control_pb2 in the first place.
#
# Use: import "package/Bar.proto";
#
# Do Not Use: import "Bar.proto";
#
# Protobuf will find Bar.proto just fine that way, but if you try to run the generate python code with python3 it
# will not work because it cannot find Bar_pb2 in the python path, The generated code must know to look for
# package.Bar_pb2 This means that the packaging by your prototypes need to be exactly the same as the packaging
# the users of the generated code from those prototypes is using or confusion will result.
#
# Further the C++ code that protobuf generates encodes the name of the package into an internal namespace that
# the generate code uses when making references between modules. This means that if you followed the instructions
# above and used "package/Bar.proto" in your import statement you must invoke the protoc compiler in such a way
# that it knows that is part of the 'package' package.
#
# The option to generate C sources and headers depends on the nanopb generator (nanopb_generator.py) and the
# cmake custom command that executes the nanopb generator will also search for .options files within the same
# directory as the proto files.
#
# impinj_protobuf_generate sets up the calls to protoc to build a package PACKAGE_LEVELS deep.  Protoc expects
# that the directory tree that contains your protocol buffer definitions (.proto files) is the same structure for
# PACKAGE_LEVELS as the structure into which it will generate source code. For PACKAGE_LEVELS=1 that would look
# like this:
#
# .../protos/package/Foo.proto # Uses ''
# .../protos/package/Bar.proto
# .../build/cpp/package/CMakeList.txt # The CMake file that calls protobuf_generate_cpp_package.
# .../build/cpp/package/Foo.pb.cc
# .../build/cpp/package/Foo.pb.h
# .../build/cpp/package/Bar.pb.cc
# .../build/cpp/package/Bar.pb.h
#
# The protos directory need not be the same as the package directory, but it must have the same directory names
# for PACKAGE_LEVELS above the prototype as the tree the code generated with protoc is generated into.
#
# This function generates the same protoc command line as protobuf_generate_cpp and protobuf_generate_python when
# PACKAGE_LEVELS=0.
#
# Both Sahara and Mach2 use the default PACKAGE_LEVEL=1.
#
# PACKAGE_LEVELS is ignored for generating for C with nanopb.
#
# Example usage:
#
# find_package(Protobuf)
# include(ImpinjProtobuf)
# 
# impinj_protobuf_generate(LANGUAGE cpp SOURCES PROTO_SRCS HEADERS PROTO_HDRS ${PROTOS})
# impinj_protobuf_generate(LANGUAGE c SOURCES PROTO_SRCS HEADERS PROTO_HDRS ${PROTOS})
# impinj_protobuf_generate(LANGUAGE python SOURCES PROTO_SRCS ${PROTOS})
#
# Arguments:
#
# LANGUAGE: The language protoc will generate code for, can be either 'cpp', 'c', or 'python'.
#
# PACKAGE_LEVELS: How deep your package structure is, defaults is 1.
#
# SOURCES <variable> : Place the list of generated source files into this variable.
# HEADERS <variable> : Place the list of generated header files into this variable.
#
# Either or both of these may be omitted if you don't care what source or header files were generated.
#
# All other arguments are assumed to be .proto files that will be used to generate source code.
#

function(impinj_protobuf_generate)
    set(_options)
    set(_singleargs PACKAGE_LEVELS LANGUAGE HEADERS SOURCES)
    cmake_parse_arguments(arg "${options}" "${_singleargs}" "" ${ARGN})

	set(arg_PROTOS "${arg_UNPARSED_ARGUMENTS}")
    if(NOT arg_PROTOS)
      message(SEND_ERROR "Error: Must specify at least one .proto file with PROTOS")
      return()
    endif()

    if(NOT arg_PACKAGE_LEVELS)
        set(arg_PACKAGE_LEVELS 1)
    endif()

    if(NOT arg_LANGUAGE)
        set(arg_LANGUAGE cpp)
    endif()
    string(TOLOWER ${arg_LANGUAGE} arg_LANGUAGE)

	# Make sure we always have some place to put results, for both sources and headers, even if we won't use them.

	if (NOT arg_SOURCES) 
	    set(arg_SOURCES _unused_source)
    endif()
 	set(${arg_SOURCES})

    if (NOT arg_HEADERS) 
	    set(arg_HEADERS _unused_headers)
	endif()
 	set(${arg_HEADERS})	

    if(arg_LANGUAGE STREQUAL cpp)
        set(_generate_extensions .pb.h .pb.cc)
        set(_generate_locations ${arg_HEADERS} ${arg_SOURCES})
    elseif(arg_LANGUAGE STREQUAL c)
        set(_generate_extensions .pb.h .pb.c)
        set(_generate_locations ${arg_HEADERS} ${arg_SOURCES})
    elseif(arg_LANGUAGE STREQUAL python)
        set(_generate_extensions _pb2.py)
        set(_generate_locations ${arg_SOURCES})
    else()
        message(SEND_ERROR "Error: Unknown Language ${arg_LANGUAGE}.")
        return()
    endif()

    get_filename_component(_out_dir ${CMAKE_CURRENT_BINARY_DIR} ABSOLUTE)
    if(NOT arg_LANGUAGE STREQUAL c)
        foreach(index RANGE 1 ${arg_PACKAGE_LEVELS})
            get_filename_component(_out_dir ${_out_dir}/.. ABSOLUTE)
        endforeach()
    endif()

    get_filename_component(_full_path ${CMAKE_CURRENT_BINARY_DIR} ABSOLUTE)
    string(REPLACE ${_out_dir}/ "" _package_name ${_full_path})

    message(STATUS "Protobuf will generate ${arg_LANGUAGE} source code for package '${_package_name}'")

    foreach(_file ${arg_PROTOS})
        get_filename_component(_proto_path ${_file} DIRECTORY)
        if(NOT arg_LANGUAGE STREQUAL c)
            foreach(index RANGE 1 ${arg_PACKAGE_LEVELS})
                get_filename_component(_proto_path ${_proto_path}/.. ABSOLUTE)
            endforeach()
        endif()
        list(FIND _proto_includes ${_proto_path} _contains_already)
        if (${_contains_already} EQUAL -1)
            list(APPEND _proto_includes -I ${_proto_path})
        endif()
    endforeach()

    foreach(_dir ${Protobuf_IMPORT_DIRS})
        list(FIND _proto_includes ${_dir} _contains_already)
        if (${_contains_already} EQUAL -1)
            list(APPEND _proto_includes -I ${_dir})
        endif()
    endforeach()

    foreach(_file ${arg_PROTOS})
        set(_outputs)
        get_filename_component(_full_path ${_file} ABSOLUTE)
        get_filename_component(_file_we ${_file} NAME_WE)

        list(LENGTH _generate_extensions len)
        math(EXPR max "${len} - 1")
        foreach(index RANGE ${max})
            list(GET _generate_extensions ${index} _extension)
            list(GET _generate_locations ${index} _location)
            set(_gen_file "${CMAKE_CURRENT_BINARY_DIR}/${_file_we}${_extension}")
            list(APPEND ${_location} ${_gen_file})
            list(APPEND _outputs ${_gen_file})
        endforeach()

        if(arg_LANGUAGE STREQUAL c)
            find_program(NANOPB_GENERATOR_EXECUTABLE
                NAMES nanopb_generator.py
                DOC "The nanopb generator"
                HINTS ${NANOPB_SRC_ROOT_DIR}/generator
                REQUIRED
            )

            if(${NANOPB_GENERATOR_EXECUTABLE} STREQUAL NANOPB_GENERATOR_EXECUTABLE-NOTFOUND)
                message(FATAL_ERROR "Cannot find nanopb_generator.py, please specify path \
                                     NANOPB_SRC_ROOT_DIR to nanopb root project folder.")
            endif()

            add_custom_command(OUTPUT ${_outputs}
                COMMAND ${NANOPB_GENERATOR_EXECUTABLE}
                ARGS ${_proto_includes} --output-dir=${CMAKE_CURRENT_BINARY_DIR} --options-path=${_proto_path} ${_full_path}
                COMMENT "Generating C sources with nanopb generator from ${_file}"
                DEPENDS ${_full_path} ${NANOPB_GENERATOR_EXECUTABLE}
                VERBATIM
            )
        else()
            add_custom_command(OUTPUT ${_outputs}
                COMMAND ${Protobuf_PROTOC_EXECUTABLE}
                ARGS --${arg_LANGUAGE}_out=${_out_dir} ${_proto_includes} ${_full_path}
                DEPENDS ${_full_path} ${Protobuf_PROTOC_EXECUTABLE}
                COMMENT "Generating ${arg_LANGUAGE} with protocol buffer compiler from ${_file}" VERBATIM)
        endif()
    endforeach()

    foreach(_loc ${_generate_locations})
        set_source_files_properties(${${_loc}} PROPERTIES GENERATED TRUE)
        set(${_loc} ${${_loc}} PARENT_SCOPE)
    endforeach()
endfunction()
