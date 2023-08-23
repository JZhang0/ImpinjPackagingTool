# CMake include() Module for Skyrocket Projects
#
# Example usage:
#
# include(Skyrocket)
# skyrocket_setup_target(example-app
#                        SERVICE service.in
#                        COVERAGE_EXCLUDE gtest/*)
# skyrocket_add_test(NAME bit_test TARGET target_under_test COMMAND test_runner.sh)
#
# On Inclusion includes standard tools that Skyrocket Projects will need:
#
# CodeCoverage, ClangFormat, ClangTidy, CodeSonar
#
# Creates BUILD_DOCS and BUILD_TESTING options defaulting to ON. CMakefiles should check these to allow
# buildroot to disable them.
#
# Creates BUILDROOT option which is ON when building in buildroot, OFF otherwise.
#
# Will set EXECUTE_TARGET_BINARY to the command that will run binaries produced
# when cross compiling.
#
# The following CMAKE variables are set:
#
# SKYROCKET_C_WARNINGS - C Compile warnings that all Skyrocket projects should use.
# SKYROCKET_CXX_WARNINGS - C++ Compile warnings that all Skyrocket projects should use.
# SKYROCKET_C_FLAGS - C Compile flags that all Skyrocket projects should use.
# SKYROCKET_CXX_FLAGS - C++ Compile flags that all Skyrocket projects should use.
# SKYROCKET_LINK_FLAGS - Link Flags that all Skyrocket projects should use.
#
# Details:
#
# --------------------------------------------------------------------
# skyrocket_setup_target(<target> <arguments>)
#
# A convienience routine to set up a typical Skyrocket project that makes it easy to enable
# common utilities with no or simple parameters.  One or more steps can be excluded here and
# activated directly.
#
# Other standard things that are assumed about skyrocket projects:
# 1) All targets use CMAKE_POSITION_INDEPENDENT_CODE.
# 2) The directory 'external' contains stuff from other git packages and is not
#    part of this package.
# 3) The source and binary directories are included in the search path.
# 4) A `check` target is added that will invoke ctest. This can serve as a way to properly add test dependencies.
#
# Arguments:
#
# The name of the target that is being setup must be passed.  The target will be automatically
# added to the install list.
#
# Options:
#
# ENABLE_CODE_SONAR - Enable add_code_sonar().
# NO_CLANG_FORMAT - Disable CLANG_FORMAT.
# NO_CLANG_TIDY - Disable CLANG_TIDY.
# NO_DOXYGEN - Disable building doxygen docs.
# NO_SPHINX - Disable building sphinx docs.
#
# OneValue:
#
# CODE_SONAR_CONFIG - Use this CONFIG_FILE with CodeSonar.
# SERVICE - Call skyrocket_add_service with this service file configuration, producing a
#           preprocessed output file named after the target.
# LANGUAGE - C or CXX. This will select with compiler warnings and flags to use on the target. By default, CXX will be
#            used.
# VERSION - When building a shared library, the version number to use for the library's
#           SONAME field.  Will default to ${PROJECT_VERSION}.
# CONFIG - The file to use as the package config file to be install into the cmake config
#          directory.  This would normally be supplied for a package that contains a
#          library other packages will use.
# HEADERS_STRIP_PREFIX - Intended to strip off directories from each file in the HEADERS list.
#                        For example if a HEADER was 'src/pi/xalloc.h' and HEADERS_STRIP_PREFIX
#                        was 'src/', only 'pi/xalloc.h' would remain when installing.
#
# MultiValue:
#
# TEST_COMMAND - Enables lcov coverage target with this TEST_COMMAND.
# COVERAGE_EXCLUDE - Excludes for the coverage target.
# HEADERS - Public header files of the package to be installed, e.g. for a library.
#           These will be installed into an "impinj" subdirectory of the system
#           include directory.  The path specified in the headers is preserved,
#           other than a leading "impinj/" does not give an "impinj/impinj/"
#           path.
#
# --------------------------------------------------------------------
# skyrocket_add_service(<input_file> [OUTPUT output_file])
#
# Configure a service file and add the service file to the install target.  By default
# the output file will be named after the inputfile with the extension ".in" removed.
#
# Arguments:
#
# input_file - The Service Input file, will be parsed with configure_file.
#
# Options:
#
# OUTPUT - The name of the output file.  The default is the input file name with ".in" removed.
#
# --------------------------------------------------------------------
# skyrocket_add_test(NAME <test_name> TARGET <target_under_test> COMMAND <test_runner> DEPENDS <dependencies>
#                    [HOST_EXECUTABLE] [GTEST])
#
# Adds a test to ctest and our check target.  It also enables the target under
# test for coverage if in a debug build.  Add HOST_EXECUTABLE if the command
# runs an executable already on the host, e.g. a script using an interpreter on
# the host, rather than a executable built by the package for the target system. 
# If set, EXECUTE_TARGET_BINARY will be used to run commands which do not set
# HOST_EXECUTABLE.
#
# Arguments:
# NAME - The name of the test. This will appear in ctest.
# TARGET - The target under test. The target will get setup for coverage and added as a dependency on the check target.
# COMMAND - The test runner command/script. This is how ctest will invoke the test.
# DEPENDS - Any dependencies that this test will be dependent upon prior to execution.
# HOST_EXECUTABLE - If set, the command uses a binary built for the host system.
# GTEST - This will generate gtest xml output for parsing within bamboo.
#
# --------------------------------------------------------------------
# skyrocket_add_system_test(DEST_DIR <dest>
#                           PROGRAMS <programs>
#                           FILES <files>
#                           DIRECTORY <dirs>)
#
# Register system test content/scripts with the 'install-system-test' target.
#
# This creates the system 'install-system-test' target if it does not exist.
# Each argument is registered with the 'install-system-test' target for
# installation. This sets EXCLUDE_FROM_ALL -- the normal 'install' target will
# not install the system tests.
#
# Note that this target ONLY makes sense when run with Buildroot. This target
# does nothing when called outside of buildroot, and will fail during the
# configure step if the required variables are not defined (i.e. Buildroot is
# not holding up it's end of the bargain.
#
# Arguments:
#   DEST_DIR    - The directory root to install the test content. If unset, will
#                 use ${SYSTEM_TEST_DIR}/${PROJECT_NAME} as default. This is
#                 allows easy support from inside buildroot.
#   PROGRAMS    - A list of executable programs to install, e.g. a test runner.
#   FILES       - A list files to install, e.g. Python Behave feature files
#   DIRECTORIES - A list directories to install, e.g. utility libraries. This
#                 will automatically ignore unrelated CMake generated files.
#
# --------------------------------------------------------------------
# skyrocket_enable_package(PACKAGE_INSTALL_DIRECTORY "/")
#
# Target Files Packaging
# During development it may be useful to create a single archive of a component's
# files that will end up on the target system.
#
# CMake has a tool "cpack" which can create a target package by running "make install"
# using the "install" steps in a component's CMakeLists.txt file.  Files are installed
# in a temp directory and an archive is created of that directory.
#
# An example of incorporating generation of a tar package into a build in the buildroot
# component.mk:
#
#    ...
#    define <COMPONENT>_PACKAGE
#        echo $(<COMPONENT>_NAME) Packaging
#        cd $(<COMPONENT>_BUILDDIR); make package
#    endef
#    <COMPONENT>_POST_BUILD_HOOKS = <COMPONENT>_PACKAGE
#
#    $(eval $(cmake-package))
#
# To enable cpack in a component's CMakeLists.txt, add the line:
#
#   skyrocket_enable_package(PACKAGE_INSTALL_DIRECTORY "/")
#
# , setting the install directory parameter as needed.
#
# --------------------------------------------------------------------
# skyrocket_add_dbus_config(DOMAIN <domain> CONFIG <service> INTERFACES <interface(s)> )
#
# D-bus config
#
# For a service with a system dbus interface (vs user/session), use the
# this function to create bus access policies and an install target.
# 
# Create a config template file, for example "com.impinj.picfg.conf.in",
# with this content:
# 
#     <?xml version="1.0"?> <!--*-nxml-*-->
#     <!DOCTYPE busconfig PUBLIC "-//freedesktop//DTD D-BUS Bus Configuration 1.0//EN"
#         "http://www.freedesktop.org/standards/dbus/1.0/busconfig.dtd">
# 
#     <busconfig>
#         <policy user="root">
#         <allow own_prefix="@DBUS_INTERFACE@"/>
#         @DBUS_SEND_DESTS@
#         @DBUS_RECV_SENDS@
#         </policy>
# 
#         <policy context="default">
#         @DBUS_SEND_DESTS@
#         @DBUS_RECV_SENDS@
#         </policy>
#     </busconfig>
# 
# The "own_prefix" is set so that the service can own any interface that
# starts with "com.impinj.<service>", like "com.impinj.picfg.cal",
# "com.impinj.picfg.net" etc.
#
# Add a dbus service template com.impinj.<service_name>.service.in file
# with the contents:
#
# [D-BUS Service]
# Name=@DBUS_INTERFACE@
# Exec=/bin/false
# User=root
# SystemdService=dbus-@DBUS_INTERFACE@.service
# 
# In your CMakeLists.txt,  call the function with the service name and the
# dbus interfaces that the service supports:
# 
#     set(DBUS_SERVICE_NAME picfg)
#     skyrocket_add_dbus_config(DOMAIN com.impinj CONFIG ${DBUS_SERVICE_NAME} INTERFACES cfg cal)
#
# Arguments:
# DOMAIN - The inverse domain name.  Defaults to "com.impinj" if ommitted.
# CONFIG - The name used in the configuration files com.impinj.${CONFIG}.conf.in
#          and com.impinj.${CONFIG}.service.in.
# INTERFACES - A list of the interfaces that the dbus unit supports.
# CONF_IN - The filename of the config file template.  If not supplied, the name
#           "${DOMAIN}.${CONFIG}.conf.in" is used.
# SERVICE_IN - The filename of the service file template. If not supplied, the
#              name "${DOMAIN}.${CONFIG}.service.in" is used.
#
# --------------------------------------------------------------------
# skyrocket_insert_build_rpath(<target> <directories>)
#
# Used to manually insert any build tree directories with libraries in them into
# the target's build rpath.  Cmake does this automatically, but it adds them at
# the *end* of the rpath list and we need them at the beginning, so that the
# libraries that are part of the build tree are used in preference to copies
# installed elsewhere, like a previous build installed into the SDK or
# buildroot's stage.
#
# Arguments:
# <target> Target to add build rpath directories too
# <directories> List of directories
#
# --------------------------------------------------------------------
# skyrocket_setup_doxygen(<target> <option>)
#
# Build doxygen documentation for the target.  This will create a target named
# "<target>-docs" to build the target's doxygen docs.  It will also add this new
# target as a dependency of the target "docs", creating that if it does not
# exist.  The target's sources and public headers are included in doxygen
# generation unless overriden with the INPUTS option.
#
# Honors BUILD_DOCS, if not enabled no docs will be built.
#
# Arguments:
# <target> Target to doxygen docs for
#
# OneValueArgs:
# OUTPUT_DIRECTORY - Directory to place output in.  Defaults to
#                    "${TARGET}-doxygen". When building with buildroot this
#                    should not be changed, as the default is needed to properly
#                    generate the full Skyrocket doc tree.
# BASE_OUTPUT_DIR  - The root directory in which to put docs. Docs get put in
#                    ${BASE_OUTPUT_DIR}/${OUTPUT_DIRECTORY}
#
# MultiValueArgs:
# INPUTS - If specified use this set of inputs may be files or directories.
#

# Save the current directory so that the conf.py.in can be found later
set(SKYROCKET_CMAKE_DIR ${CMAKE_CURRENT_LIST_DIR})

if (SKYROCKET_INCLUDE_GUARD)
    return()
endif()
set(SKYROCKET_INCLUDE_GUARD True)

include(GNUInstallDirs)
include(FindPkgConfig)
include(CodeCoverage)

find_package(Sanitizers)
find_package(Valgrind)
find_package(ClangFormat)
find_package(ClangTidy)
find_package(CodeSonar)

if (NOT DEFINED CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()

if (DEFINED ENV{STAGING_DIR})
    option(BUILDROOT "Building in Buildroot" ON)
else()
    option(BUILDROOT "Building in Buildroot" OFF)
endif()

option(BUILD_DOCS "Build Documentation" ON)
option(BUILD_TESTING "Build Tests" ON)
option(BUILD_UNIT_TESTS "Build Unit Tests" ON)
option(BUILD_SYSTEM_TESTS "Build System Tests" ON)
option(BUILD_STATIC_ANALYSIS "Run Static Analysis during build" ON)

if (BUILD_TESTING)
    enable_testing()
    if (NOT TARGET check)
        add_custom_target(check COMMAND ${CMAKE_CTEST_COMMAND} --output-on-failure)
    endif()

    # Determine cross setup
    if(CMAKE_CROSSCOMPILING)
        message(STATUS "Using alternate ${CMAKE_SYSTEM_PROCESSOR} toolchain")
        # Maybe we can still run the cross compiled binaries?  Ideally this
        # would compare cannonical host triplets, but it seems cmake doesn't
        # have that concept.
        if (CMAKE_SYSROOT AND CMAKE_HOST_SYSTEM_PROCESSOR STREQUAL CMAKE_SYSTEM_PROCESSOR)
            # Set RPATH to point to the cross toolchain's current lib directory
            set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -Wl,--enable-new-dtags")
            list(APPEND CMAKE_BUILD_RPATH ${CMAKE_SYSROOT}/lib)

            # Find the dyn linker used by the toolchain and build executables that use it
            # from it's current location.
            execute_process(COMMAND echo 'main;'
                        COMMAND sh -c "${CMAKE_C_COMPILER} -v -x c - -o /dev/null -### 2>&1"
                        COMMAND sed -rn "s/.*-dynamic-linker ([^ ]+).*/\\1/p"
                        OUTPUT_STRIP_TRAILING_WHITESPACE OUTPUT_VARIABLE LDSO)
            message(STATUS "Configuring binaries to use cross dynamic linker ${LDSO} from sysroot")
            set(EXECUTE_TARGET_BINARY ${CMAKE_SYSROOT}${LDSO})
            set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -Wl,--dynamic-linker=${EXECUTE_TARGET_BINARY}")
        else()
            message(STATUS "Target binaries will not be runnable on host")
            # If someone tries to run a target bin, it should just fail
            set(EXECUTE_TARGET_BINARY false)
        endif()
    endif()
endif()

if (BUILD_DOCS)
    find_package(Sphinx REQUIRED)
    find_package(Doxygen REQUIRED dot)
    set(DOXYGEN_JAVADOC_AUTOBRIEF YES)
endif()

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_INTERPROCEDURAL_OPTIMIZATION_RELEASE ON)

set(SKYROCKET_LINK_FLAGS
    -Wl,-z,relro
    -Wl,-z,now
    -Wl,--hash-style=gnu
    -Wl,--no-copy-dt-needed-entries)

set(SKYROCKET_C_WARNINGS
    -Wall
    -Wextra
    -Wformat=2
    -Wstrict-overflow=5
    -Wcast-align
    -Wcast-qual
    -Wpointer-arith
    -Wshadow
    -Wunreachable-code
    -Wredundant-decls
    -Wbad-function-cast
    -Wstrict-prototypes
    -Wnested-externs
    -Wundef
    -Wunused
    -Wlogical-op)

set(SKYROCKET_C_FLAGS
    -fstrict-aliasing
    -fstrict-overflow
    -fstack-protector-strong)

set(SKYROCKET_CXX_WARNINGS
    -Wall
    -Wextra
    -Wformat=2
    -Wstrict-overflow=5
    -Wcast-align
    -Wcast-qual
    -Wpointer-arith
    -Wshadow
    -Wunreachable-code
    -Wredundant-decls
    -Wunused
    -Wlogical-op
    -Wno-effc++
    -Wno-psabi)

set(SKYROCKET_CXX_FLAGS ${SKYROCKET_C_FLAGS})

if (CMAKE_BUILD_TYPE STREQUAL "Release")
    list(APPEND SKYROCKET_C_FLAGS -D_FORTIFY_SOURCE=1)
    list(APPEND SKYROCKET_CXX_FLAGS -D_FORTIFY_SOURCE=1)
endif()

function (skyrocket_setup_target TARGET_IN)
    if (NOT TARGET ${TARGET_IN})
        message(FATAL_ERROR "First argument, ${TARGET_IN} is not a valid target.")
    endif()


    set(_options ENABLE_CODE_SONAR NO_CLANG_FORMAT NO_CLANG_TIDY NO_INSTALL NO_DOXYGEN NO_SPHINX)
    set(_oneValueArgs CODE_SONAR_CONFIG SERVICE VERSION CONFIG HEADERS_STRIP_PREFIX)
    set(_multiValueArgs TEST_COMMAND COVERAGE_EXCLUDE HEADERS)
    cmake_parse_arguments(SETUP "${_options}" "${_oneValueArgs}" "${_multiValueArgs}" ${ARGN})
    # Argument defaults:
    if (NOT DEFINED SETUP_HEADERS_STRIP_PREFIX)
        set(SETUP_HEADERS_STRIP_PREFIX "impinj") # For legacy only, several packages assume this
    endif()

    # Get target type, some things are different for different targets
    get_target_property(target_type ${TARGET_IN} TYPE)

    # Add standard compile options.
    # This sets per-compilation unit flags based on the compiler used.
    target_compile_options(${TARGET_IN} PRIVATE
        $<$<COMPILE_LANGUAGE:CXX>:${SKYROCKET_CXX_FLAGS} ${SKYROCKET_CXX_WARNINGS}>
        $<$<COMPILE_LANGUAGE:C>:${SKYROCKET_C_FLAGS} ${SKYROCKET_C_WARNINGS}>
    )

    # OCTANE_ENABLED is defined in Impinj common package infrastructure (pkg-impinj.mk) when the Octane
    # package is turned on.
    if (DEFINED OCTANE_ENABLED)
        target_compile_definitions(${TARGET_IN} PUBLIC OCTANE_BUILD)
    endif()

    # Put both source and binary directories in the include path.
    target_include_directories(${TARGET_IN} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_BINARY_DIR})
    # Add standard linker options.
    target_link_libraries(${TARGET_IN} PRIVATE ${SKYROCKET_LINK_FLAGS})
    # Add headers to interface
    if (DEFINED SETUP_HEADERS)
        set_target_properties(${TARGET_IN} PROPERTIES PUBLIC_HEADER "${SETUP_HEADERS}")
    endif()

    # If a test command is defined set up for testing with code coverage.
    if (DEFINED SETUP_TEST_COMMAND)
        set(_TEST_COMMAND TEST_COMMAND ${SETUP_TEST_COMMAND})
    else()
        set(_COV_DEPENDS DEPENDS check)
    endif()

    # Don't produce coverage reports for external dependencies (both explicit and generated)
    # or the tests themselves
    set(SKYROCKET_EXCLUDES '*/external/*' '*/test/*')

    if (GENERATE_COVERAGE)
        setup_target_for_coverage(${TARGET_IN})
        if (NOT TARGET coverage)
            add_coverage_target(TARGET coverage BRANCH_COVERAGE
                                ${_TEST_COMMAND}
                                ${_COV_DEPENDS}
                                EXCLUDE ${SKYROCKET_EXCLUDES} ${SETUP_COVERAGE_EXCLUDE})
        endif()
    endif()

    # If specifying a service configuration add that, named after the target
    if (DEFINED SETUP_SERVICE)
        skyrocket_add_service(${SETUP_SERVICE} OUTPUT ${TARGET_IN}.service)
    endif()

    # Allow clang tidy and clang format to be enabled.
    if (NOT SETUP_NO_CLANG_FORMAT)
        add_clang_format(${TARGET_IN} EXCLUDES "external;docker_build")
    endif()

    if (NOT SETUP_NO_CLANG_TIDY)
        add_clang_tidy_checks(TARGETS ${TARGET_IN}
                              EXTRA_ARGS -Wno-unknown-warning-option
                              EXPORT_FIX_FILE replacements.yaml)
    endif()

    if (SETUP_ENABLE_CODE_SONAR)
        if (DEFINED SETUP_CODE_SONAR_CONFIG)
            set(CODE_SONAR_CONFIG CONFIG_FILE ${SETUP_CODE_SONAR_CONFIG})
        endif()

        add_code_sonar(ROOT_PATH skyrocket ${CODE_SONAR_CONFIG})
    endif()

    if (NOT SETUP_NO_INSTALL)
        install(TARGETS ${TARGET_IN}
                EXPORT ${TARGET_IN}
                RUNTIME DESTINATION "${CMAKE_INSTALL_BINDIR}"
                ARCHIVE DESTINATION "${CMAKE_INSTALL_LIBDIR}"
                LIBRARY DESTINATION "${CMAKE_INSTALL_LIBDIR}")
        # PUBLIC_HEADER DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}"
        # The above won't work because it flattens the hierarchy, see
        # https://gitlab.kitware.com/cmake/cmake/issues/16739, so we do this workaround.
        foreach(header ${SETUP_HEADERS})
            get_filename_component(header_dir ${header} DIRECTORY)
            string(REGEX REPLACE "^${SETUP_HEADERS_STRIP_PREFIX}/?" "" header_dir "${header_dir}")
            install(FILES "${header}" DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}/impinj/${header_dir}")
        endforeach()
    endif()

    if (BUILD_DOCS)
        set(BASE_DIR doc/output/)
        if (NOT SETUP_NO_DOXYGEN)
            skyrocket_setup_doxygen(${TARGET_IN} BASE_OUTPUT_DIR ${BASE_DIR})
        endif()
        if (NOT SETUP_NO_SPHINX)
            add_sphinx_target(${TARGET_IN} SOURCE_DIR doc BASE_OUTPUT_DIR ${BASE_DIR})
        endif()
    endif()

    if (target_type STREQUAL "SHARED_LIBRARY")
        if (NOT SETUP_VERSION)
            set(SETUP_VERSION ${PROJECT_VERSION}) # default value
        endif()
        set_target_properties(${TARGET_IN} PROPERTIES VERSION ${SETUP_VERSION})
    endif()

    if (SETUP_CONFIG)
        message(STATUS "Install config file ${SETUP_CONFIG} as ${TARGET_IN}-config.cmake")
        install(FILES ${SETUP_CONFIG} RENAME "${TARGET_IN}-config.cmake" DESTINATION "${CMAKE_INSTALL_LIBDIR}/cmake/${TARGET_IN}")
        install(EXPORT ${TARGET_IN} DESTINATION "${CMAKE_INSTALL_LIBDIR}/cmake/${TARGET_IN}")
    endif()

endfunction()

function (skyrocket_add_dbus_config)
    set(_options "")
    set(_oneValueArgs DOMAIN CONFIG CONF_IN SERVICE_IN)
    set(_multiValueArgs INTERFACES)
    cmake_parse_arguments(ARG "${_options}" "${_oneValueArgs}" "${_multiValueArgs}" ${ARGN})

    if (NOT DEFINED ARG_DOMAIN)
        set(ARG_DOMAIN "com.impinj")
    endif()
    if (NOT DEFINED ARG_CONF_IN)
        set(ARG_CONF_IN ${ARG_DOMAIN}.${ARG_CONFIG}.conf.in)
    endif()
    if (NOT DEFINED ARG_SERVICE_IN)
        set(ARG_SERVICE_IN ${ARG_DOMAIN}.${ARG_CONFIG}.service.in)
    endif()

    # Dbus provide this in the pkgconfig file, but cmake's dbus module doesn't get it
    pkg_get_variable(DBUS_SERVICE_INSTALL_DIR dbus-1 system_bus_services_dir)
    # This one doesn't appear to be provided to us by anything so the path is hardcoded here
    set(DBUS_CFG_INSTALL_DIR "${CMAKE_INSTALL_DATADIR}/dbus-1/system.d")

    # Create system bus policy elements.
    # Add "@DBUS_SEND_DESTS@" and @DBUS_RECV_SENDS@" in the conf.in file.
    # for the root and default policies.
    set(DBUS_SEND_DESTS "${DBUS_SEND_DESTS}    <allow send_destination=\"${ARG_DOMAIN}.${ARG_CONFIG}\"/>\n")
    set(DBUS_RECV_SENDS "${DBUS_RECV_SENDS}    <allow receive_sender=\"${ARG_DOMAIN}.${ARG_CONFIG}\"/>\n")

    foreach(interface ${ARG_INTERFACES})
        set(DBUS_SEND_DESTS "${DBUS_SEND_DESTS}    <allow send_interface=\"${ARG_DOMAIN}.${interface}\"/>\n")
        set(DBUS_RECV_SENDS "${DBUS_RECV_SENDS}    <allow receive_interface=\"${ARG_DOMAIN}.${interface}\"/>\n")
    endforeach(interface)

    # Generate config files
    set(DBUS_SERVICE ${ARG_DOMAIN}.${ARG_CONFIG})
    configure_file(${ARG_CONF_IN} ${ARG_DOMAIN}.${ARG_CONFIG}.conf @ONLY)
    configure_file(${ARG_SERVICE_IN} ${ARG_DOMAIN}.${ARG_CONFIG}.service @ONLY)

    # Install targets
    install(FILES "${CMAKE_CURRENT_BINARY_DIR}/${ARG_DOMAIN}.${ARG_CONFIG}.conf"
            DESTINATION ${DBUS_CFG_INSTALL_DIR})
    install(FILES "${CMAKE_CURRENT_BINARY_DIR}/${ARG_DOMAIN}.${ARG_CONFIG}.service"
            DESTINATION ${DBUS_SERVICE_INSTALL_DIR})
endfunction()

function (skyrocket_add_service SERVICE_INPUT)
    cmake_parse_arguments(SERVICE "" "OUTPUT" "" ${ARGN})
    # Use a writable directory for coverage reports (gcda files)
    # See https://gcc.gnu.org/onlinedocs/gcc/Cross-profiling.html
    if (GENERATE_COVERAGE AND CMAKE_CROSSCOMPILING)
        set(GCOV_PREFIX_ENV "Environment=\"GCOV_PREFIX=/tmp/gcov\"")

        # Setting GCOV_PREFIX_STRIP makes the gcov dir structure a bit cleaner
        # by chopping off the dirs above the interesting bits.
        string(REGEX REPLACE "/build-system.*" "" _dirs_over_build ${CMAKE_CURRENT_BINARY_DIR})
        string(REGEX MATCHALL "/" _dir_slashes ${_dirs_over_build})
        list(LENGTH _dir_slashes GCOV_PREFIX_STRIP)
        set(GCOV_PREFIX_STRIP_ENV "Environment=\"GCOV_PREFIX_STRIP=${GCOV_PREFIX_STRIP}\"")
    endif()
    if (NOT DEFINED SERVICE_OUTPUT)
        # Remove .in suffix, in make we could write $(notdir $(INPUT:%.in=%)), but
        # the primitive cmake language has no concept of expressions.
        string(REGEX REPLACE "\.in$" "" SERVICE_OUTPUT ${SERVICE_INPUT})
        get_filename_component(SERVICE_OUTPUT ${SERVICE_OUTPUT} NAME)
    endif()
    message(STATUS "Install service file ${SERVICE_OUTPUT}")
    configure_file(${SERVICE_INPUT} ${SERVICE_OUTPUT})
    install(FILES ${CMAKE_CURRENT_BINARY_DIR}/${SERVICE_OUTPUT} DESTINATION lib/systemd/system)
endfunction()

function(skyrocket_add_test)
    set(_options HOST_EXECUTABLE GTEST)
    set(_oneValueArgs NAME TARGET WORKING_DIRECTORY)
    set(_multiValueArgs COMMAND DEPENDS)
    cmake_parse_arguments(TEST "${_options}" "${_oneValueArgs}" "${_multiValueArgs}" ${ARGN})

    configure_valgrind(${TEST_COMMAND})
    # If GTest is selected we want to export the xml test results
    # so it can be parsed by Bamboo
    if (TEST_GTEST)
        set(GTEST_EXTENSION --gtest_output=xml:reports/${TEST_NAME}_results.xml)
    endif()
    add_test(NAME ${TEST_NAME} COMMAND ${TEST_COMMAND} ${GTEST_EXTENSION}
             WORKING_DIRECTORY ${TEST_WORKING_DIRECTORY})

    add_sanitizers(${TEST_TARGET})
    if (GENERATE_COVERAGE)
        setup_target_for_coverage(${TEST_TARGET})
    endif()

    add_dependencies(check ${TEST_TARGET} ${TEST_DEPENDS})
endfunction()

function(skyrocket_add_system_test)
    set(_options )
    set(_oneValueArgs DEST_DIR)
    set(_multiValueArgs PROGRAMS FILES DIRECTORIES)
    cmake_parse_arguments(SYS_TEST "${_options}" "${_oneValueArgs}" "${_multiValueArgs}" ${ARGN})

    if (NOT BUILDROOT)
        message(STATUS "System tests only supported in Buildroot -- skipping")
        return()
    endif()

    # Set the default destination if user did not specify
    if (NOT SYS_TEST_DEST_DIR)
        if (NOT PKG)
            message(FATAL_ERROR "Must specify both SYSTEM_TEST_DIR and PKG to install system tests.
                                 This is an error in the Buildroot configuration")
        else()
            set(SYS_TEST_DEST_DIR ${SYSTEM_TEST_DIR}/${PKG})
        endif()
    endif()

    # Add target that invokes the installation command if not already present
    if (NOT TARGET install-system-test)
        add_custom_target(install-system-test
                          COMMAND "${CMAKE_COMMAND}" -DCMAKE_INSTALL_COMPONENT=system-test
                                  -P "${CMAKE_CURRENT_BINARY_DIR}/cmake_install.cmake")
    endif()

    if (SYS_TEST_PROGRAMS)
            install(PROGRAMS ${SYS_TEST_PROGRAMS}
                    DESTINATION  ${SYS_TEST_DEST_DIR}
                    COMPONENT system-test EXCLUDE_FROM_ALL)
    endif()

    if (SYS_TEST_FILES)
        install(FILES ${SYS_TEST_FILES}
                DESTINATION  ${SYS_TEST_DEST_DIR}
                COMPONENT system-test EXCLUDE_FROM_ALL)
    endif()

    if (SYS_TEST_DIRECTORIES)
        # When installing directories, ignore unneeded CMake files
        install(DIRECTORY ${SYS_TEST_DIRECTORIES}
                DESTINATION  ${SYS_TEST_DEST_DIR}
                COMPONENT system-test EXCLUDE_FROM_ALL
                PATTERN "CMake*" EXCLUDE
                PATTERN "Makefile" EXCLUDE
                PATTERN "*.cmake" EXCLUDE)
    endif()
endfunction()

function(skyrocket_enable_package)
    set(_options "")
    set(_oneValueArgs PACKAGE_INSTALL_DIRECTORY)
    set(_multiValueArgs "")
    cmake_parse_arguments(ARG "${_options}" "${_oneValueArgs}" "${_multiValueArgs}" ${ARGN})

    set(CPACK_PACKAGE_VENDOR "Impinj")
    set(CPACK_GENERATOR "TGZ")
    set(CPACK_SET_DESTDIR true)
    if (DEFINED ARG_PACKAGE_INSTALL_DIRECTORY)
        set(CPACK_PACKAGE_INSTALL_DIRECTORY ${ARG_PACKAGE_INSTALL_DIRECTORY})
    endif()
    if (DEFINED READER_PLATFORM)
        set(CPACK_SYSTEM_NAME ${READER_PLATFORM})
    endif()
    include(CPack)
endfunction()

function(skyrocket_insert_build_rpath TARGET)
    get_target_property(build_rpath ${TARGET} BUILD_RPATH)
    list(APPEND ARGN ${build_rpath})
    set_property(TARGET ${TARGET} PROPERTY BUILD_RPATH ${ARGN})
endfunction()

function(skyrocket_setup_doxygen TARGET)
    set(_options)
    set(_oneValueArgs BASE_OUTPUT_DIR OUTPUT_DIRECTORY)
    set(_multiValueArgs INPUTS)
    cmake_parse_arguments(ARG "${_options}" "${_oneValueArgs}" "${_multiValueArgs}" ${ARGN})
    if (NOT DEFINED ARG_OUTPUT_DIRECTORY)
        set(ARG_OUTPUT_DIRECTORY "${TARGET}-doxygen")
    endif()

    set(DOXYGEN_OUTPUT_DIRECTORY ${ARG_BASE_OUTPUT_DIR}/${ARG_OUTPUT_DIRECTORY})
    set(DOXYGEN_USE_MDFILE_AS_MAINPAGE DoxygenMainPage.md)
    set(MAIN_PAGE_FILE ${CMAKE_BINARY_DIR}/DoxygenMainPage.md)
    configure_file(${SKYROCKET_CMAKE_DIR}/DoxygenMainPage.md.in ${MAIN_PAGE_FILE})
    if (DEFINED ARG_INPUTS)
        doxygen_add_docs(${TARGET}-doxygen-docs ${MAIN_PAGE_FILE} ${ARG_INPUTS})
    else()
        get_property(_headers TARGET ${TARGET} PROPERTY PUBLIC_HEADER)
        get_property(_sources TARGET ${TARGET} PROPERTY SOURCES)
        doxygen_add_docs(${TARGET}-doxygen-docs ${MAIN_PAGE_FILE} ${_headers} ${_sources})
    endif()

    sphinx_add_link(${TARGET} ${TARGET}-doxygen-docs
                    "${TARGET} Doxygen"
                    "${ARG_OUTPUT_DIRECTORY}/html/index.html")

    if(NOT TARGET docs)
        add_custom_target(docs)
    endif()
    add_dependencies(docs ${TARGET}-doxygen-docs)
endfunction()
