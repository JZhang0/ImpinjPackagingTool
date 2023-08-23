#
# Generate dbus interface and doc files using sdbusplus
#
# Example usage:
#
# find_package(Sdbusplus)
# skyrocket_add_dbus_interfaces(TARGET pinthesky INTERFACES cal cfg net)
#
# add_executable(skypi source.c)
# target_link_libraries(skypi pinthesky::Server)
#
# Details:
#
# skyrocket_add_dbus_interfaces(DOMAIN <com.something> INTERFACES <interface(s)> TEMPLATE_DIR <dir> TARGET <target name>)
#
# DOMAIN - The inverse domain name.  Defaults to "com.impinj" if ommitted.
# INTERFACES - A list of the interfaces that the dbus unit supports.
# TEMPLATE_DIR - This is where to find mako .cc/.h/.md templates for sdbus++.
#                Defaults to "${SDBUSPLUS_TEMPLATES_DIR}" set in the sdbusplus-templates package.
# TARGET - Base target name for library alias targets.  Defaults to "${CMAKE_PROJECT_NAME}".  See below.
#
# Will produce alias libraries ${TARGET}-dbus::Server for generated server library
# and ${TARGET}-dbus::Client for the client library.
#

include(FindSphinx)

find_program(SDBUSPLUS_PATH
    NAMES sdbus++
    DOC "Path to sdbusplus code generator executable")
include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(Sdbusplus
                                  "Failed to locate sdbus++ executable"
                                  SDBUSPLUS_PATH)

find_library(SDBUSPLUS_LIB sdbusplus)
find_package(sdbusplus-templates)

function (skyrocket_add_dbus_interfaces)
    set(_options "")
    set(_oneValueArgs DOMAIN TEMPLATE_DIR TARGET)
    set(_multiValueArgs INTERFACES)
    cmake_parse_arguments(ARG "${_options}" "${_oneValueArgs}" "${_multiValueArgs}" ${ARGN})

    if (NOT SDBUSPLUS_FOUND)
        message(FATAL_ERROR "Failed to locate sdbus++ executable")
    endif()

    if (NOT DEFINED ARG_INTERFACES)
        message(FATAL_ERROR "Required dbus interface(s) not defined")
    endif()

    if (NOT DEFINED ARG_TARGET)
        set(ARG_TARGET ${CMAKE_PROJECT_NAME})
    endif()

    if (NOT DEFINED ARG_DOMAIN)
        set(ARG_DOMAIN "com.impinj")
    endif()
    # Create a path that sdbusplus expects by replacing dots with slashes.
    string(REPLACE "\." "/" _domain_path ${ARG_DOMAIN})
    set(_out_path "${CMAKE_CURRENT_BINARY_DIR}/${_domain_path}")
    set(_source_path "${CMAKE_CURRENT_SOURCE_DIR}/${_domain_path}")
    include_directories(${_out_path})

    # sdbusplus options for source root and mako template dirs
    set(_sdbus_opts "-r ${CMAKE_CURRENT_SOURCE_DIR}")
    if (DEFINED ARG_TEMPLATE_DIR)
        set(_template_opts "-t ${ARG_TEMPLATE_DIR}")
    elseif(DEFINED SDBUSPLUS_TEMPLATES_DIR)
        # The templates dir var is set in the sdbusplus-templates package.
        set(_template_opts "-t ${SDBUSPLUS_TEMPLATES_DIR}")
    endif()
    set(_sdbus_opts "${_sdbus_opts} ${_template_opts}")
    
    # Prevent cmake from escaping spaces in the options var when used in a COMMAND
    separate_arguments(_sdbus_opts UNIX_COMMAND "${_sdbus_opts}")

    add_library(${ARG_TARGET}-dbus-server STATIC)
    target_link_libraries(${ARG_TARGET}-dbus-server PRIVATE ${SDBUSPLUS_LIB})
    add_library(${ARG_TARGET}-dbus::Server ALIAS ${ARG_TARGET}-dbus-server)
    add_library(${ARG_TARGET}-dbus-client SHARED)
    target_link_libraries(${ARG_TARGET}-dbus-client PRIVATE ${SDBUSPLUS_LIB})
    add_library(${ARG_TARGET}-dbus::Client ALIAS ${ARG_TARGET}-dbus-client)

    foreach(interface ${ARG_INTERFACES})
        set(_out_dir ${_out_path}/${interface})
        set(_domain_path_if ${_source_path}/${interface})
        set(_domain_if "${ARG_DOMAIN}.${interface}")

        add_custom_command(OUTPUT
            ${_out_dir}/server.hpp
            ${_out_dir}/server.cc

            DEPENDS
                ${_domain_path_if}.interface.yaml
                ${_domain_path_if}.errors.yaml

            COMMAND mkdir -p ${_out_dir}/
            COMMAND ${SDBUSPLUS_PATH} ${_sdbus_opts} interface server-header ${_domain_if} > ${_out_dir}/server.hpp
            COMMAND ${SDBUSPLUS_PATH} ${_sdbus_opts} interface server-cpp ${_domain_if} > ${_out_dir}/server.cc
        )
        add_custom_command(OUTPUT
            ${_out_dir}/error.hpp
            ${_out_dir}/error.cc

            DEPENDS
                ${_domain_path_if}.interface.yaml
                ${_domain_path_if}.errors.yaml

            COMMAND mkdir -p ${_out_dir}/
            COMMAND ${SDBUSPLUS_PATH} ${_sdbus_opts} error exception-header ${_domain_if} > ${_out_dir}/error.hpp
            COMMAND ${SDBUSPLUS_PATH} ${_sdbus_opts} error exception-cpp ${_domain_if} > ${_out_dir}/error.cc
        )
        add_custom_command(OUTPUT
            ${_out_dir}/client.hpp
            ${_out_dir}/client.cc

            DEPENDS
                ${_domain_path_if}.interface.yaml
                ${_domain_path_if}.errors.yaml

            COMMAND mkdir -p ${_out_dir}/
            COMMAND ${SDBUSPLUS_PATH} ${_sdbus_opts} interface client-header ${_domain_if} > ${_out_dir}/client.hpp
            COMMAND ${SDBUSPLUS_PATH} ${_sdbus_opts} interface client-cpp ${_domain_if} > ${_out_dir}/client.cc
        )

        target_sources(${ARG_TARGET}-dbus-server PRIVATE ${_out_dir}/server.cc ${_out_dir}/error.cc
                                                         ${_out_dir}/server.hpp ${_out_dir}/error.hpp)
        # Adding errro.cc to the client lib too will trigger cmake bug, see the git history
        target_sources(${ARG_TARGET}-dbus-client PRIVATE ${_out_dir}/client.cc)
        list(APPEND CLIENT_HEADERS ${_out_dir}/client.hpp)

        if (BUILD_DOCS)
            find_program(PANDOC_PATH pandoc)
            find_package_handle_standard_args(Pandoc
                                              "Failed to locate pandoc executable"
                                              PANDOC_PATH)

            set(DBUS_DOCS_STAMP ${CMAKE_CURRENT_BINARY_DIR}/.dbus_docs_stamp_${interface})
            list(APPEND DBUS_DOCS_STAMPS ${DBUS_DOCS_STAMP})
            add_custom_command(OUTPUT ${DBUS_DOCS_STAMP}
                DEPENDS ${_domain_path_if}.interface.yaml ${_domain_path_if}.errors.yaml
                COMMAND mkdir -p ${CMAKE_CURRENT_BINARY_DIR}/doc/_static/
                COMMAND ${SDBUSPLUS_PATH} interface markdown ${CMAKE_CURRENT_SOURCE_DIR}/${_domain_if} | ${PANDOC_PATH} --from markdown --to html4 > ${CMAKE_CURRENT_BINARY_DIR}/doc/_static/${interface}-interface.html
                COMMAND touch ${DBUS_DOCS_STAMP}
                COMMENT "Generating dbus interface docs")
            add_custom_target(${ARG_TARGET}-dbus-${interface}-docs DEPENDS ${DBUS_DOCS_STAMP})
            sphinx_add_link(${ARG_TARGET} ${ARG_TARGET}-dbus-${interface}-docs
                            "${ARG_TARGET} D-Bus ${interface} Interface Doc"
                            "sphinx/html/_static/${interface}-interface.html")
            set_property(TARGET ${ARG_TARGET} PROPERTY DBUS_API_DOCS_ENABLED TRUE)
        endif()
    endforeach(interface)

    skyrocket_setup_target(${ARG_TARGET}-dbus-server NO_CLANG_FORMAT NO_CLANG_TIDY NO_INSTALL NO_SPHINX)
    skyrocket_setup_target(${ARG_TARGET}-dbus-client NO_CLANG_FORMAT NO_CLANG_TIDY NO_SPHINX
                           HEADERS ${CLIENT_HEADERS} HEADERS_STRIP_PREFIX "${_out_path}/")

    if (BUILD_DOCS)
        if(NOT TARGET docs)
            add_custom_target(docs)
        endif()
        add_custom_target(${ARG_TARGET}-dbus-api-docs DEPENDS ${DBUS_DOCS_STAMPS})
        sphinx_add_link(${ARG_TARGET} ${ARG_TARGET}-dbus-client-doxygen-docs
                        "${ARG_TARGET} D-Bus Client Doxygen"
                        "${ARG_TARGET}-dbus-client-doxygen/html/index.html")
        sphinx_add_link(${ARG_TARGET} ${ARG_TARGET}-dbus-server-doxygen-docs
                        "${ARG_TARGET} D-Bus Server Doxygen"
                        "${ARG_TARGET}-dbus-server-doxygen/html/index.html")
        add_dependencies(${ARG_TARGET}-dbus-client-doxygen-docs ${ARG_TARGET}-dbus-client)
        add_dependencies(${ARG_TARGET}-dbus-server-doxygen-docs ${ARG_TARGET}-dbus-server)
        add_dependencies(docs ${ARG_TARGET}-dbus-api-docs)
    endif()
endfunction()

