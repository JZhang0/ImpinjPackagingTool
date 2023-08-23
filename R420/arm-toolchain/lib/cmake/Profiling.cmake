# CMake include() module for profiling
#
# Example usage:
#
# include(Profiling)
# setup_target_for_profiling(test_target)
#
# Details:
#
# setup_target_for_profiling(<target>)
#
# Sets up a target for profiling.  This function will configure the target to
# include compiler and linker flags necessary for code profiling.
#

function(setup_target_for_profiling TARGET_IN)
    if (NOT TARGET ${TARGET_IN})
        message(FATAL_ERROR "First argument, ${TARGET_IN} is not a valid target.")
    endif()

    target_compile_options(${TARGET_IN} PUBLIC -pg)
    #TODO: use CMake 3.13+ and use 'target_link_options (-pg)' instead
    set_target_properties(${TARGET_IN} PROPERTIES LINK_FLAGS -pg)
endfunction()
