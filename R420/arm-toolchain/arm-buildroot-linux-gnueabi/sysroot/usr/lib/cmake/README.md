## Common CMake Modules
This repository contains CMake modules that could be useful across a variety of
projects. Visit the [CMake website](https://www.cmake.org/) for more information
about the tool itself.

* [CMake Latest Documentation](https://cmake.org/cmake/help/latest/)

### How to Use
These modules are best integrated within your project using git-submodule.

    git submodule add ssh://git@stash.impinj.com:7999/skyr/cmake.git

To use, all you have to do is add the submodule path to the CMAKE_MODULE_PATH
variable near the top of your root CMakeLists.txt file.

    list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")

> Note: You may want to use a different directory path if you have cmake scripts
> that are specific to your project. IE, separate external_cmake and cmake
> directories.

### Modules

#### Clang-format
The FindClangFormat.cmake module will add a special `format` target to your
generated build. It is not added to the `all` target, so it will not be run 
automatically. By executing the target, it will run clang-format on the target
sources and format the files directly. It assumes a file in the root directory
of the project with the desired style.

* [ClangFormat](https://clang.llvm.org/docs/ClangFormat.html)

To add a `format` target in your CMakeLists.txt:

    find_package(ClangFormat)
    add_clang_format(${PROJECT_NAME} EXCLUDES dir_to_exclude)

To execute the `format` target:

    make format

#### Clang-tidy
Clang-tidy was integrated directly into CMake 3.6. As such, to use this script,
you should be using at least that version. Clang-tidy is a linter that can be 
run during compilation to run a variety of checks. For more information about
what checks are available and how to specify them, visit the below link.

* [ClangTidy](http://clang.llvm.org/extra/clang-tidy/index.html)

To enable a set of clang-tidy checks in your CMakeLists.txt:

    find_package(ClangTidy)
    add_clang_tidy_checks(TARGETS target1 target2
                          CHECKS -* google-* cert-*
                          WARNINGS_AS_ERRORS -* cert-*
                          EXPORT_FIX_FILE replacements.yaml
                          CONFIG "{AnalyzeTemporaryDtors: false}")

Alternatively, you can place much of the configuration in a .clang-tidy file,
just like clang-format. Clang-tidy recursively searches parent directories until
it finds the .clang-tidy file, so the best place to store is in the root of your
project directory. The .clang-tidy file is a YAML file that clang-tidy will
parse. Here is an example of a .clang-tidy file:

    ---
    Checks: "-*,google-*,cert-*"
    WarningsAsErrors: "-*,cert-*"
    HeaderFilterRegex: ""
    AnalyzeTemporaryDtors: false
    CheckOptions:
      - key: google-readability-braces-around-statements.ShortStatementLines
        value: '1'
    ...

In using the .clang-tidy file, you can reduce the CMakeLists.txt call to:

    add_clang_tidy_checks(TARGETS target1 target2
                          EXPORT_FIX_FILE replacements.yaml)

If using the `EXPORT_FIX_FILE` option, the build process will generate a yaml
file with a list of suggested fixes for clang-tidy generated warnings. This can
be used by clang-apply-replacements to apply the suggested fix to the original
source. Clang-apply-replacements is a bit odd, because it simply takes a
directory as an argument, finds any yaml files with replacements and then
applies those. You can invoke it like this:

    clang-apply-replacements -remove-change-desc-files .

The extra option there will remove the replacements YAML file after it applies
the changes. This is a good idea since trying to apply the same change twice
could result in some odd behavior.

#### Sanitizers
This collection of modules enable the Address, Thread, Memory and/or Undefined
Behavior Sanitizers for binary targets. These enable run time instrumentation of
your binaries to find issues. They are supported by both Clang and GCC. 

* [Sanitizers](https://github.com/google/sanitizers)
* [Sanitizers-CMake](https://github.com/arsenm/sanitizers-cmake)

To use any of the sanitizers, you'll need to add it to your CMakeLists.txt and 
then specify an associated define at generation time.

CMakeLists.txt:
    find_package(Sanitizers)

    add_sanitizers(${TARGET_NAME})

To generate an Address Sanitized build:

    cmake -DSANITIZE_ADDRESS=On ..

To generate an Memory Sanitized build:

    cmake -DSANITIZE_MEMORY=On ..

To generate an Thread Sanitized build:

    cmake -DSANITIZE_THREAD=On ..

To generate an Undefined Behavior Sanitized build:

    cmake -DSANITIZE_UNDEFINED=On ..

#### Valgrind
Test executables can be run with Valgrind for memory debugging and leak
detection.

* [Valgrind](http://valgrind.org/)

Valgrind support can be enabled by supplying the following during CMake's
invocation:

    cmake -DENABLE_VALGRIND=On

Full leak check support can be enabled with the following:

    cmake -DENABLE_VALGRIND=On -DVALGRIND_FULL=On

