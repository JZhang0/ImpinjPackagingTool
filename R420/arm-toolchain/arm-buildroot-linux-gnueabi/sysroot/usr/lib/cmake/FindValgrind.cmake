#
# Find Valgrind
#

include(FindPackageHandleStandardArgs)

option(ENABLE_VALGRIND "Enable valgrind when running tests targets" OFF)
option(VALGRIND_FULL "Run valgrind with '--leak-check=full'" OFF)

if (ENABLE_VALGRIND)
    find_program(VALGRIND_EXE NAMES valgrind)
    find_package_handle_standard_args(VALGRIND DEFAULT_MSG VALGRIND_EXE)
    mark_as_advanced(VALGRIND_EXE)
endif()

function (configure_valgrind TEST_COMMAND)
    if (NOT ENABLE_VALGRIND OR NOT VALGRIND_FOUND)
        return()
    endif()

    set(VALGRIND_COMMAND ${VALGRIND_EXE})
    if (VALGRIND_FULL)
        list(APPEND VALGRIND_COMMAND "--leak-check=full")
    endif()

    set(TEST_COMMAND ${VALGRIND_COMMAND} ${TEST_COMMAND} PARENT_SCOPE)
endfunction()
