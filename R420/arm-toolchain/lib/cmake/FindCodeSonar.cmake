# CMake find_package() Module for Building with CodeSonar
#
# Example usage:
#
# find_package(CodeSonar)
# add_code_sonar_config(CONFIG IGNORED_COMPILATIONS civetweb.c)
# add_code_sonar_config(CONFIG SYSTEM_INCLUDE_PATHS /rtp_rest_server/external/json)
# add_code_sonar(CONFIG_FILE filename ROOT_PATH root)
#
# Details:
#
# add_code_sonar_config(CONFIG <NAME> <VALUE>)
#
# This may be called mulitple times in sub projects, each call will add elements to a list that will be appended
# to the end of the codesonar configuration file when add_code_sonar() is called.  This allows sub directories to
# extend the configation of code sonar.
#
# CONFIG <NAME> <VALUE> - Causes a name/value pair to be added to the code sonar configuration project for
#                         this file.  The line added will be of the form:
#
#                            <NAME> += <VALUE>
#                          e.g.
#                            SYSTEM_INCLUDE_PATHS += /rtp_rest_server/external/json
#
# add_code_sonar(CONFIG_FILE filename ROOT_PATH root)
#
# Generate and install the configuration file for code sonar and build the 'make codesonar' target.  All prior calls
# to add_code_sonar_config() will be appended to the passed configuration file.  If no configuration file is passed
# then one will be generated from the attributes passed by add_code_sonar_config().  If no calls to
# add_code_sonar_config have been made then the default configuration will be used.
#
# CONFIG_FILE - This file will be installed as the configuration file for the project using cmake's configure_file
#               allowing CMake variable substitution to be performed.
#
# ROOT_PATH - This is the name of the root of your code sonar project path. If unspecified then
#             your project will be rooted using just your git repository. For example:
#
#             add_code_sonar() -> Project /root/webif/feature_PI-4835
#             add_code_sonar(ROOT_PATH skyrocket) -> Project /root/skyrocket/webif/feature_PI-4835
#
#
# If you want to pass extra arguments to CODE_SONAR, pass this on the command line
# -DCODESONAR_ARGS, for example:
#
#    cmake -DCODESONAR_ARGS="-foreground -auth anonymous"
#
# If successful the following variables will be defined
# CODESONAR_FOUND
# CODESONAR_EXECUTABLE
#
# Note: CodeSonar will only be executed when BUILD_STATIC_ANALYSIS is either not
#       defined or is defined and set to On.

find_program(CODESONAR_EXECUTABLE
             NAMES codesonar
             DOC "Path to codesonar executable")

# Handle REQUIRED and QUIET arguments
# this will also set CLANGTIDY_FOUND to true if CLANGTIDY_EXECUTABLE exists
include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(CodeSonar
                                  "Failed to locate codesonar executable"
                                  CODESONAR_EXECUTABLE)

function(add_code_sonar)
    if ((DEFINED BUILD_STATIC_ANALYSIS AND NOT BUILD_STATIC_ANALYSIS)
        OR NOT CODESONAR_FOUND)
        return()
    endif()

    if (TARGET codesonar)
        message(FATAL_ERROR "add_code_sonar() may only be called once per project.")
    endif()

    string(REGEX REPLACE "/bin/codesonar" "/template.conf" CODESONAR_DEFAULT_TEMPLATE ${CODESONAR_EXECUTABLE})

    find_package(GitTools)

    if (NOT DEFINED GIT_REPOSITORY_NAME)
        add_custom_target(codesonar COMMAND exit 1
                          COMMENT "Bamboo jobs that use the codesonar target must call 'git remote add'.")
    else()
        set(_options)
        set(_oneValueArgs CONFIG_FILE ROOT_PATH)
        set(_multiValueArgs)
        cmake_parse_arguments(_CODESONAR
                              "${_options}"
                              "${_oneValueArgs}"
                              "${_multiValueArgs}"
                              ${ARGN})

        string(REPLACE "/" "_" SANITIZED_GIT_BRANCH_NAME ${GIT_BRANCH_NAME})

        if (_CODESONAR_ROOT_PATH)
            set(_CodeSonarProject /${_CODESONAR_ROOT_PATH}/${GIT_REPOSITORY_NAME}/${SANITIZED_GIT_BRANCH_NAME})
        else()
            set(_CodeSonarProject /${GIT_REPOSITORY_NAME}/${SANITIZED_GIT_BRANCH_NAME})
        endif()

        set(_CodeSonarConfigDir ${CMAKE_BINARY_DIR}/codesonar)
        set(_CodeSonarConfig ${_CodeSonarConfigDir}/${SANITIZED_GIT_BRANCH_NAME}.conf)

        if (DEFINED _CODESONAR_CONFIG_FILE)
            configure_file(${_CODESONAR_CONFIG_FILE} ${_CodeSonarConfig})
        else()
            code_sonar_initialize_configfile(${_CodeSonarConfig})
        endif()

        code_sonar_fill_configfile(${_CodeSonarConfig})

        separate_arguments(CODESONAR_ARGS)

        # Make clean assures that each time 'make codesonar' is called the entire project is rebuilt and analyzed.

        add_custom_target(codesonar
                          COMMAND make clean
                          COMMAND ${CODESONAR_EXECUTABLE} analyze ${_CodeSonarConfigDir}/${SANITIZED_GIT_BRANCH_NAME}
                          ${CODESONAR_ARGS} -project ${_CodeSonarProject} codesonar.impinj.com:7340 make all)
    endif()

endfunction()

function(add_code_sonar_config)
    if ((DEFINED BUILD_STATIC_ANALYSIS AND NOT BUILD_STATIC_ANALYSIS)
        OR NOT CODESONAR_FOUND)
        return()
    endif()

    set(_options)
    set(_oneValueArgs)
    set(_multiValueArgs CONFIG)
    cmake_parse_arguments(_CODESONAR_CONFIG
                          "${_options}"
                          "${_oneValueArgs}"
                          "${_multiValueArgs}"
                          ${ARGN})

    list(LENGTH _CODESONAR_CONFIG_CONFIG arg_len)
    MATH(EXPR result "(${arg_len} % 2)")
    if (${result})
       message(WARNING "add_code_sonar_config(CONFIG) must have the same number of <NAME> and <VALUE> items.")
       return()
    endif()

    get_property(_config GLOBAL PROPERTY CODESONAR_CONFIG)

    foreach(_ITEM IN LISTS _CODESONAR_CONFIG_CONFIG)
        list(APPEND _config ${_ITEM})
    endforeach()

    set_property(GLOBAL PROPERTY CODESONAR_CONFIG ${_config})
endfunction()

function(code_sonar_initialize_configfile config_file)
    list(APPEND contents "# Generate a new config file with the following command line:\n")
    list(APPEND contents "#     codesonar create-conf pfilesname\n")
    list(APPEND contents "# This file will contain all the options and more detailed explanations of each command\n")
    list(APPEND contents "#\n\n")

    file(WRITE ${config_file} ${contents})
endfunction()

function(code_sonar_fill_configfile config_file)
    file(APPEND ${config_file} "# This configuration file is automatically generated by FindCodeSonar.cmake.\n\n")

    get_property(_config GLOBAL PROPERTY CODESONAR_CONFIG)
    list(LENGTH _config total_items)
    if (NOT ${total_items} EQUAL 0)
        math(EXPR total_items "(${total_items} - 1)")
        foreach (first RANGE 0 ${total_items} 2)
            math(EXPR second "${first} + 1")
            list(GET _config ${first} first_item)
            list(GET _config ${second} second_item)
            file(APPEND ${config_file} "${first_item} += ${second_item}\n")
        endforeach(first)
    endif()
endfunction()
