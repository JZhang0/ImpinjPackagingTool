# CMake include() Module for CodeCoverage
#
# Example usage:
#
# include(CodeCoverage)
# setup_target_for_coverage(test_target)
#
# add_coverage_target(TARGET coverage
#                     TEST_COMMAND ctest
#                     EXCLUDE gtest/*)
#
# Details:
#
# setup_target_for_coverage(<target>)
#
# Sets up a target for coverage. As long as GENERATE_COVERAGE is on, this function will configure the target
# to include compiler and linker flags necessary for code coverage collecting. It will also disable optimization
# for debug builds. This function should be invoked on all targets that will be executed by the test runner.
#
# add_coverage_target(TARGET <target> <arguments>)
#
# Create a coverage generation target.
#
#
# Options:
#
# FUNCTION_COVERAGE - The function coverage results with lcov are not particularly useful. By default, function coverage
#                     is disabled, but setting this flag will enable it.
# BRANCH_COVERAGE   - By default, branch coverage is disabled, but setting this flag will enable it.
#
# OneValue:
#
# TARGET - The name of the target to be created.
#
# MultiValue:
#
# TEST_COMMAND - Execute this command exactly as passed in CMAKE_CURRENT_BINARY_DIRECTORY to run the tests. If none is
#                provided, the report will be generated for whatever has already been recorded.
# EXCLUDE - Set of locations that lcov should --remove.
# DEPENDS - Set of dependencies that should be completed prior to running the coverage analysis. For example, the check
#           target can be used as an alternative to providing a TEST_COMMAND.
#
# find_gcov(VAR)
#
# Find gcov to use with current toolchain, return result in VAR.
#

function(setup_target_for_coverage TARGET_IN)
    if (NOT TARGET ${TARGET_IN})
        message(FATAL_ERROR "First argument, ${TARGET_IN} is not a valid target.")
    endif()

    get_property(SETUP_FOR_COVERAGE TARGET ${TARGET_IN} PROPERTY SETUP_FOR_COVERAGE SET)
    if (NOT ${SETUP_FOR_COVERAGE})
        set_property(TARGET ${TARGET_IN} PROPERTY POSITION_INDEPENDENT_CODE ON)
        target_compile_options(${TARGET_IN} PRIVATE -fprofile-arcs -ftest-coverage -DGENERATE_COVERAGE)
        target_link_libraries(${TARGET_IN} PRIVATE -fprofile-arcs)
        target_compile_options(${TARGET_IN} PRIVATE -O0)
        set_property(TARGET ${TARGET_IN} PROPERTY SETUP_FOR_COVERAGE ON)        
    endif()
endfunction()

function(add_coverage_target)
    set(_options FUNCTION_COVERAGE BRANCH_COVERAGE)
    set(_oneValueArgs TARGET)
    set(_multiValueArgs TEST_COMMAND EXCLUDE DEPENDS)
    cmake_parse_arguments(COV "${_options}" "${_oneValueArgs}" "${_multiValueArgs}" ${ARGN})

    if (NOT GENERATE_COVERAGE)
        add_custom_target(${COV_TARGET} COMMAND true COMMENT "Code Coverage not enabled.")
        return()
    endif()

    find_program(LCOV_PATH lcov)
    find_program(GENHTML_PATH genhtml)
    find_gcov(GCOV_PATH)

    if (NOT LCOV_PATH OR NOT GENHTML_PATH)
        message(WARNING "Can't find lcov or genhtml, no code coverage will be available.")
        return()
    endif()

    if (COV_FUNCTION_COVERAGE)
        set(DISPLAY_FUNCTIONS --function-coverage)
    else()
        set(DISPLAY_FUNCTIONS --no-function-coverage)
    endif()

    if (COV_BRANCH_COVERAGE)
        set(DISPLAY_BRANCHES --branch-coverage)
    else()
        set(DISPLAY_BRANCHES --no-branch-coverage)
    endif()

    # webif/rtp_rest_server Currently depends on the coverage targets being scoped to the project, so we have to use
	# ${PROJECT_[SOURCE|BINARY]_DIR} here rather than ${CMAKE_[SOURCE|BINARY]_DIR}
	#
    # Since the first coverage target is the one that is used, things can get complicated when submodules that perform
	# coverage are included. The work around is to make an explict call to add_coverage_target in the CMAKE file
	# before the submodules call skyrocket_setup_target so that this coverage target in is place first.

    add_custom_target(${COV_TARGET}
                      COMMAND ${LCOV_PATH} --quiet --no-external --capture --initial
                        --directory ${PROJECT_BINARY_DIR} --base-directory ${PROJECT_SOURCE_DIR}
                        --output-file ${COV_TARGET}_initial.info --gcov-tool ${GCOV_PATH}
                      COMMAND ${COV_TEST_COMMAND}
                      COMMAND ${LCOV_PATH} --quiet --no-external --capture --rc lcov_branch_coverage=1
                        --directory ${PROJECT_BINARY_DIR} --base-directory ${PROJECT_SOURCE_DIR}
                        --output-file ${COV_TARGET}_tests.info --gcov-tool ${GCOV_PATH}
                      COMMAND ${LCOV_PATH} --quiet --add-tracefile ${COV_TARGET}_initial.info --rc lcov_branch_coverage=1
                        --add-tracefile ${COV_TARGET}_tests.info
                        --output-file ${COV_TARGET}.info.tmp
                      COMMAND ${LCOV_PATH} --quiet --remove ${COV_TARGET}.info.tmp ${COV_EXCLUDE} --rc lcov_branch_coverage=1
                        --output-file ${COV_TARGET}.info
                      COMMAND ${LCOV_PATH} --summary ${COV_TARGET}.info --rc lcov_branch_coverage=1
                      COMMAND ${GENHTML_PATH} --quiet ${DISPLAY_FUNCTIONS} ${DISPLAY_BRANCHES}
                        --output-directory ${COV_TARGET} ${PROJECT_BINARY_DIR}/${COV_TARGET}.info
                      COMMAND ${CMAKE_COMMAND} -E remove ${COV_TARGET}.info ${COV_TARGET}.info.tmp
                        ${COV_TARGET}_initial.info ${COV_TARGET}_tests.info
                      WORKING_DIRECTORY ${PROJECT_BINARY_DIR}
                      DEPENDS ${COV_DEPENDS}
                      COMMENT "Generating Code Coverage Report at ${COV_TARGET}/index.html.")
endfunction()

function(find_gcov GCOV_PATH)
    get_filename_component(TOOLCHAIN_PATH ${CMAKE_C_COMPILER} DIRECTORY)
    get_filename_component(TOOLCHAIN_PREFIX ${CMAKE_C_COMPILER} NAME_WE)
    string(REGEX MATCH "^.*-" TOOLCHAIN_PREFIX "${TOOLCHAIN_PREFIX}")
    find_program(GCOV NAMES "${TOOLCHAIN_PREFIX}gcov" gcov NO_PACKAGE_ROOT_PATH PATHS ${TOOLCHAIN_PATH})
    set(${GCOV_PATH} ${GCOV} PARENT_SCOPE)
endfunction()
