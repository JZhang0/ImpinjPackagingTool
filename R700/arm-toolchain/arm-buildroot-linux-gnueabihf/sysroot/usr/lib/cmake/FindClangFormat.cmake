# CMake find_package() Module for ClangFormat 
# https://clang.llvm.org/docs/ClangFormat.html
#
# Example usage:
#
# find_package(ClangFormat)
# add_clang_format(${TARGET} EXCLUDES "blacklist")
#
# If successful the following variables will be defined
# CLANGFORMAT_FOUND
# CLANGFORMAT_EXECUTABLE

find_program(CLANGFORMAT_EXECUTABLE
             NAMES clang-format
             DOC "Path to clang-format executable")

# Handle REQUIRED and QUIET arguments
# this will also set CLANGFORMAT_FOUND to true if CLANGFORMAT_EXECUTABLE exists
include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(ClangFormat
                                  "Failed to locate clang-format executable"
                                  CLANGFORMAT_EXECUTABLE)

function (add_clang_format)
    cmake_parse_arguments(ADD_CLANG_FORMAT "" "" "EXCLUDES" ${ARGN})
    set(PROJECT ${ADD_CLANG_FORMAT_UNPARSED_ARGUMENTS})

    if(NOT TARGET format)
        add_custom_target(format)
    endif()

    if (CLANGFORMAT_FOUND)
        file(GLOB_RECURSE FORMAT_SOURCE_FILES
            *.[chi]pp *.[chi]xx *.cc *.hh *.ii *.[chi])
        list(FILTER FORMAT_SOURCE_FILES EXCLUDE REGEX ${CMAKE_BINARY_DIR}.*)
        foreach(EXCLUDE ${ADD_CLANG_FORMAT_EXCLUDES})
            list(FILTER FORMAT_SOURCE_FILES EXCLUDE
                REGEX ${CMAKE_CURRENT_SOURCE_DIR}/${EXCLUDE}.*)
        endforeach()
        add_custom_target(format-${PROJECT}
            COMMAND ${CLANGFORMAT_EXECUTABLE} -i -style=file ${FORMAT_SOURCE_FILES}
            WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})
        add_dependencies(format format-${PROJECT})
    endif()
endfunction()

