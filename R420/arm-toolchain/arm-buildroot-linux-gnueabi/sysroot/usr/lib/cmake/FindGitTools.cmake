# CMake find_package() Module for adding tools that interact with git.
#
# Example usage:
#
# find_package(GitTools)
#
# If successful the following variables will be defined
#
# GIT_BRANCH_NAME - The short name of your current git branch.
# GIT_REPOSITORY_NAME The short nome of your current git repository,
#                     unset if no repository could be found, happen by default in Bamboo.
#
# Note: These variables are set at configure time if you change branches you'll need
#       to reconfigure to pick up the new names, that tends to happen automatically.
#       as branch checkouts tend to change things.

find_package(Git REQUIRED)

include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(GitTools
                                  "Failed to locate git executable"
                                  GIT_EXECUTABLE)

if (GIT_FOUND)
   execute_process(COMMAND ${GIT_EXECUTABLE} rev-parse --abbrev-ref HEAD
                   OUTPUT_VARIABLE GIT_BRANCH_NAME
                   OUTPUT_STRIP_TRAILING_WHITESPACE)

   execute_process(COMMAND ${GIT_EXECUTABLE} remote -v
                   COMMAND tail -1
                   OUTPUT_VARIABLE _gitRemote)

   string(REGEX REPLACE ^.*/\(.*\).git.* \\1 GIT_REPOSITORY_NAME ${_gitRemote})

   # Bamboo does a shallow git clone and does not add the remote repository, if your build needs to use these tools
   # then you should explicitly add the correct when setting up bamboo so that we can query the repository name.

   if (${_gitRemote} STREQUAL ${GIT_REPOSITORY_NAME})
       message(WARNING "No valid git repository found, 'git remote -v | tail': ${_gitRemote}")
       unset(GIT_REPOSITORY_NAME)
   endif()
endif()
