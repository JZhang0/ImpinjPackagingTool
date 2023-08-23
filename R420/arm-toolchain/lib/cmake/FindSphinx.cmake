# CMake find_package() Module for Sphinx documentation generator
# http://sphinx-doc.org/
#
# Arguments:
#   Positional:
#       TARGET     - The name of target exec/library for which to generate docs
#   Options:
#       DISABLE_WARNINGS_AS_ERRORS - Disable the 'warnings as errors' flag
#   OneValueArgs:
#       BUILDER    - The docs builder to use. Defualt to 'html'
#       SOURCE_DIR - The directory containing .rst content. Default to
#                    CMAKE_CURRENT_SOURCE_DIR
#       CONF_DIR   - Directory containing the conf.py file to use
#       OUTPUT_DIRECTORY - The directory to put generated sources. Defaults to
#                          'sphinx'. When building with buildroot this should
#                          not be changed, as the default is needed to properly
#                          generate the full Skyrocket doc tree.
#       BASE_OUTPUT_DIR  - The root directory in which to put docs. Docs get
#                          put in ${BASE_OUTPUT_DIR}/${OUTPUT_DIRECTORY}
#   MultiValueArgs:
#       STATIC_CONTENT_DIRS - A list of directories the contents of which are copied
#                             to the html "_static" dir.
#
# Creates targets:
#   TARGET-sphinx-docs - TARGET is the name passed by the caller
#   docs   - A 'docs' target is created so that all packages have a common make
#            target to build docs. It depends on TARGET-sphinx-docs.

#
# Example simple usage:
#
# find_package(Sphinx)
# add_sphinx_target(${PROJECT_NAME})
#
# Example advanced usage:
#
# find_package(Sphinx)
# add_sphinx_target(${PROJECT_NAME}
#                   BUILDER html
#                   SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}
#                   CONF_DIR ${CMAKE_CURRENT_BINARY_DIR}
#                   OUTPUT_DIRECTORY "documentation"
#                   DISABLE_WARNINGS_AS_ERRORS)
#
# Note: If no CONF_DIR is specified, then sphinx will configure and use
# Impinj's common conf.py.in file. Try to improve this common conf.py before
# writing a new, custom one.
#
# If successful the following variables will be defined
# SPHINX_FOUND
# SPHINX_EXECUTABLE

find_program(SPHINX_EXECUTABLE
             NAMES sphinx-build sphinx-build-3 sphinx-build-2
             DOC "Path to sphinx-build executable")

# Handle REQUIRED and QUIET arguments
# this will also set SPHINX_FOUND to true if SPHINX_EXECUTABLE exists
include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(Sphinx
                                  "Failed to locate sphinx-build executable"
                                  SPHINX_EXECUTABLE)

# Save the current directory so that the conf.py.in can be found later
set(FIND_SPHINX_CMAKE_DIR ${CMAKE_CURRENT_LIST_DIR})

#
# Function: sphinx_add_link
#
# Arguments:
#   Positional:
#       TARGET     - The name of target exec/library for which to generate docs
#       DOC_TARGET - The name of phony docs target for which to apply properties
#       LINK_TEXT  - The text to display as an addition sidebar link
#       LINK_DEST  - The link's destination
#

function (sphinx_add_link TARGET DOC_TARGET LINK_TEXT LINK_DEST)
    set_target_properties(${DOC_TARGET} PROPERTIES LINK_DEST ${LINK_DEST} LINK_TEXT ${LINK_TEXT})
    set_property(TARGET ${TARGET} APPEND PROPERTY SPHINX_LINKS ${DOC_TARGET})
endfunction(sphinx_add_link)

function (add_sphinx_target TARGET)
    if (NOT SPHINX_FOUND)
        return()
    endif()

    set(_options DISABLE_WARNINGS_AS_ERRORS)
    set(_oneValueArgs BUILDER SOURCE_DIR CONF_DIR OUTPUT_DIRECTORY BASE_OUTPUT_DIR)
    set(_multiValueArgs STATIC_CONTENT_DIRS)
    cmake_parse_arguments(_SPHINX "${_options}" "${_oneValueArgs}" "${_multiValueArgs}" ${ARGN})
    if (NOT DEFINED ARG_OUTPUT_DIRECTORY)
        set(_SPHINX_OUTPUT_DIRECTORY "sphinx")
    endif()

    # Set bin/src dir explicitly since we're not necessarily calling this from
    # a CMakeLists.txt from inside the directory that contains docs sources
    set(_SPHINX_BINARY_DIR ${CMAKE_CURRENT_BINARY_DIR}/${_SPHINX_SOURCE_DIR})
    set(_SPHINX_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/${_SPHINX_SOURCE_DIR})

    if (NOT _SPHINX_BUILDER)
        set(_SPHINX_BUILDER "html")
    endif()

    # The list of static content dirs is used to create "html_static_path" entries
    # in the common conf.py.in.
    if (NOT DEFINED ARG_STATIC_CONTENT_DIRS)
        if (IS_DIRECTORY ${_SPHINX_SOURCE_DIR}/_static)
            list(APPEND ARG_STATIC_CONTENT_DIRS "${_SPHINX_SOURCE_DIR}/_static")
        endif()
        if (IS_DIRECTORY $ENV{BASE_DIR}/docs/skyrocket/_static)
            list(APPEND ARG_STATIC_CONTENT_DIRS "$ENV{BASE_DIR}/docs/skyrocket/_static")
        endif()
    endif()
    foreach(DIR ${ARG_STATIC_CONTENT_DIRS})
        set(STATIC_CONTENT_PATH_APPEND_PY "${STATIC_CONTENT_PATH_APPEND_PY}\nhtml_static_path.append(\"${DIR}\")")
    endforeach()

    # Process list of additional targets to include
    get_target_property(SPHINX_LINKS ${TARGET} SPHINX_LINKS)
    if (SPHINX_LINKS)
        foreach(LINK ${SPHINX_LINKS})
            get_target_property(DEST ${LINK} LINK_DEST)
            get_target_property(TEXT ${LINK} LINK_TEXT)
            list(APPEND SPHINX_DOCS_LINKS "${TEXT}=${DEST}")
        endforeach()
    endif()

    set(_SPHINX_BUILD_DIR "${_SPHINX_BASE_OUTPUT_DIR}/${_SPHINX_OUTPUT_DIRECTORY}/${_SPHINX_BUILDER}")
    set(_SPHINX_DOC_TREE_DIR "${_SPHINX_BINARY_DIR}/_doctrees-${_SPHINX_BUILDER}")

    set (_SPHINX_ADDITIONAL_OPTS "-q")
    if (NOT _SPHINX_DISABLE_WARNINGS_AS_ERRORS)
        list(APPEND _SPHINX_ADDITIONAL_OPTS "-W")
    endif()

    # Must be before 'configure_file' is called -- see conf.py.in for how this is used
    get_property(DBUS_API_DOCS_ENABLED TARGET ${TARGET} PROPERTY DBUS_API_DOCS_ENABLED)

    # Override conf dir if specified, otherwise use the common Impinj conf.py.
    if (_SPHINX_CONF_DIR)
        list(APPEND _SPHINX_ADDITIONAL_OPTS "-c" "${_SPHINX_CONF_DIR}")
    else()
        list(APPEND _SPHINX_ADDITIONAL_OPTS "-c" "${_SPHINX_BINARY_DIR}")
        configure_file(${FIND_SPHINX_CMAKE_DIR}/conf.py.in ${_SPHINX_BINARY_DIR}/conf.py)
    endif()

    add_custom_target(${TARGET}-sphinx-docs
                      COMMAND ${SPHINX_EXECUTABLE}
                              -b ${_SPHINX_BUILDER}
                              -d "${_SPHINX_DOC_TREE_DIR}"
                              ${_SPHINX_ADDITIONAL_OPTS}
                              "${_SPHINX_SOURCE_DIR}"
                              "${_SPHINX_BUILD_DIR}"
                      COMMENT
                      "Generating ${_SPHINX_BUILDER} Sphinx documentation for ${TARGET} into \"${_SPHINX_BUILD_DIR}\"")

    if (NOT TARGET docs)
        add_custom_target(docs)
    endif()
    add_dependencies(docs ${TARGET}-sphinx-docs)
    if (SPHINX_LINKS)
        add_dependencies(${TARGET}-sphinx-docs ${SPHINX_LINKS})
    endif()

    set_property(DIRECTORY APPEND PROPERTY
                 ADDITIONAL_MAKE_CLEAN_FILES
                 "${_SPHINX_BUILD_DIR}")

    get_property(_CURRENT_MAKE_CLEAN_FILES
                 DIRECTORY PROPERTY ADDITIONAL_MAKE_CLEAN_FILES)
    list(FIND _CURRENT_MAKE_CLEAN_FILES "${_SPHINX_DOC_TREE_DIR}" _INDEX)
    if (_INDEX EQUAL -1)
        set_property(DIRECTORY APPEND PROPERTY
                     ADDITIONAL_MAKE_CLEAN_FILES
                     "${_SPHINX_DOC_TREE_DIR}")
    endif()
endfunction()
