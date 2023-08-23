# CMake find_package() Module for ClangTidy linter checks
# http://clang.llvm.org/extra/clang-tidy/index.html
#
# Example usage:
#
# find_package(ClangTidy)
# add_clang_tidy_checks(TARGETS target1 target2
#                       CHECKS -* google-* cert-*
#                       WARNINGS_AS_ERRORS -* cert-*
#                       EXTRA_ARGS -Wno-unknown-warning-option
#                       EXPORT_FIX_FILE replacements.yaml
#                       CONFIG "{AnalyzeTemporaryDtors: false}")
#
# If successful the following variables will be defined
# CLANGTIDY_FOUND
# CLANGTIDY_EXECUTABLE
# 
# Note: ClangTidy will only be executed when BUILD_STATIC_ANALYSIS is either not
#       defined or is defined and set to On.

find_program(CLANGTIDY_EXECUTABLE
             NAMES clang-tidy
             DOC "Path to clang-tidy executable")

if (CLANGTIDY_EXECUTABLE)
    execute_process(COMMAND ${CLANGTIDY_EXECUTABLE} -version
                    OUTPUT_VARIABLE _VERSION
                    OUTPUT_STRIP_TRAILING_WHITESPACE
                    ERROR_QUIET)
    string(REGEX MATCH "LLVM version [0-9]\\.[0-9]\\.[0-9]" _OUTPUT ${_VERSION})
    string(REGEX REPLACE "LLVM version " "" CLANGTIDY_VERSION_STRING ${_OUTPUT})
endif()

# Handle REQUIRED and QUIET arguments
# this will also set CLANGTIDY_FOUND to true if CLANGTIDY_EXECUTABLE exists
include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(ClangTidy
                                  REQUIRED_VARS CLANGTIDY_EXECUTABLE
                                  VERSION_VAR CLANGTIDY_VERSION_STRING)

function(add_clang_tidy_checks)
    if (DEFINED BUILD_STATIC_ANALYSIS AND NOT BUILD_STATIC_ANALYSIS)
        return()
    endif()

    if (NOT CLANGTIDY_FOUND)
        message(FATAL_ERROR "Clang-tidy not found, cannot perform static analysis.")
    endif()

    if (CMAKE_CXX_STANDARD EQUAL 17 AND CLANGTIDY_VERSION_STRING VERSION_LESS 5)
        message(FATAL_ERROR "Clang-tidy must be at least 5.x to support C++17 static analysis.")
    endif()

    set(_options)
    set(_oneValueArgs CONFIG EXPORT_FIX_FILE)
    set(_multiValueArgs TARGETS CHECKS WARNINGS_AS_ERRORS EXTRA_ARGS)
    cmake_parse_arguments(_CLANG_TIDY
                          "${_options}"
                          "${_oneValueArgs}"
                          "${_multiValueArgs}"
                          ${ARGN})
    set(_CLANG_TIDY_PROPERTIES ${CLANGTIDY_EXECUTABLE})

    ############################################################################
    #
    # This is a workaround for a CMake bug. As recently as CMake 3.10.0, there
    # is an issue in CMake whereby if you have both clang-tidy and
    # interprocedural optimization enabled, clang-tidy will fail to get the
    # proper flags for compilation, resulting in being unable to find headers.
    # Since we really only care about IPO on release builds and clang-tidy on
    # debug builds, we'll prioritize IPO over clang-tidy. The enclosed block
    # will check to see whether IPO is enabled for one of the targets and then
    # disable clang-tidy if it is.
    #
    # TODO: Remove this block when CMake can do both IPO and clang-tidy on the
    # same build. The issue might be related to this one:
    # https://gitlab.kitware.com/cmake/cmake/issues/16493
    if (CMAKE_BUILD_TYPE STREQUAL "Release")
        set(_IPO_CONFIG_VAR INTERPROCEDURAL_OPTIMIZATION_RELEASE)
    elseif(CMAKE_BUILD_TYPE STREQUAL "Debug")
        set(_IPO_CONFIG_VAR INTERPROCEDURAL_OPTIMIZATION_DEBUG)
    endif()

    foreach(_TARGET IN LISTS _CLANG_TIDY_TARGETS)
        get_target_property(_IPO ${_TARGET} INTERPROCEDURAL_OPTIMIZATION)
        if (DEFINED _IPO_CONFIG_VAR)
            get_target_property(_IPO_C ${_TARGET} ${_IPO_CONFIG_VAR})
        endif()
        # If there was any IPO specified for the configuration, it overrides
        # whatever is in the IPO default.
        if (_IPO_C OR (NOT DEFINED _IPO_C AND _IPO))
            message(WARNING "Disabling Clang-Tidy for ${_TARGET} due to LTO being enabled.")
            list(REMOVE_ITEM _CLANG_TIDY_TARGETS ${_TARGET})
        endif()
    endforeach()
    ############################################################################

    if (_CLANG_TIDY_CHECKS)
        string(REPLACE ";" "," _CLANG_TIDY_CHECKS "${_CLANG_TIDY_CHECKS}")
        list(APPEND _CLANG_TIDY_PROPERTIES "-checks=${_CLANG_TIDY_CHECKS}")
    endif()

    if (_CLANG_TIDY_WARNINGS_AS_ERRORS)
        string(REPLACE ";" "," _CLANG_TIDY_WARNINGS_AS_ERRORS
               "${_CLANG_TIDY_WARNINGS_AS_ERRORS}")
        list(APPEND _CLANG_TIDY_PROPERTIES
             "-warnings-as-errors=${_CLANG_TIDY_WARNINGS_AS_ERRORS}")
    endif()

    foreach(_EXTRA_ARG IN LISTS _CLANG_TIDY_EXTRA_ARGS)
        list(APPEND _CLANG_TIDY_PROPERTIES "-extra-arg=${_EXTRA_ARG}")
    endforeach()

    if (_CLANG_TIDY_CONFIG)
        list(APPEND _CLANG_TIDY_PROPERTIES "-config=${_CLANG_TIDY_CONFIG}")
    endif()

    if (_CLANG_TIDY_EXPORT_FIX_FILE)
        list(APPEND _CLANG_TIDY_PROPERTIES
             "-export-fixes=${_CLANG_TIDY_EXPORT_FIX_FILE}")
    endif()

    foreach(_TARGET IN LISTS _CLANG_TIDY_TARGETS)
        set_target_properties(
            ${_TARGET} PROPERTIES CXX_CLANG_TIDY
            "${_CLANG_TIDY_PROPERTIES}")
    endforeach()

endfunction()
