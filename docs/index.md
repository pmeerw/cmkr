---
layout: home
title: Index
nav_order: 0
---

# Index

`cmkr`, pronounced "cmaker", is a modern build system based on [CMake](https://cmake.org/) and [TOML](https://toml.io).

`cmkr` parses `cmake.toml` files and generates a modern, idiomatic `CMakeLists.txt` for you. A minimal example:

```toml
[project]
name = "cmkr_for_beginners"

[target.hello_world]
type = "executable"
sources = ["src/main.cpp"]
```

`cmkr` can bootstrap itself from CMake and you only need CMake to use it.

## Getting started

To get started run the following commands from your project directory:

```sh
curl https://raw.githubusercontent.com/build-cpp/cmkr/main/cmake/cmkr.cmake -o cmkr.cmake
cmake -P cmkr.cmake
```

After the bootstrapping process finishes, modify [`cmake.toml`](https://build-cpp.github.io/cmkr/cmake-toml) and open the project in your favorite IDE or build with CMake:

```sh
cmake -B build
cmake --build build
```

Once bootstrapped, `cmkr` does not introduce extra steps to your workflow. After modifying `cmake.toml` you simply build/configure your CMake project and `cmkr` will automatically regenerate `CMakeLists.txt`.

In CI settings the `cmkr` bootstrapping process is skipped so there is no extra configure-time overhead in your pipelines.

## Template repositories

Another way to get started is to use the [cmkr_for_beginners](https://github.com/build-cpp/cmkr_for_beginners) template repository. Either open it in [Gitpod](https://gitpod.io/#https://github.com/build-cpp/cmkr_for_beginners), or clone the repository and run:

```sh
cmake -B build
cmake --build build
```

Check out the [cmkr topic](https://github.com/topics/cmkr), the [build-cpp organization](https://github.com/build-cpp) or the [tests](https://github.com/build-cpp/cmkr/tree/main/tests) for more examples and templates.

## Command line

Optionally you can put a [`cmkr` release](https://github.com/build-cpp/cmkr/releases) in your `PATH` and use it as a utility from the command line:

```
Usage: cmkr [arguments]
arguments:
    init    [executable|library|shared|static|interface] Starts a new project in the same directory.
    gen                                                  Generates CMakeLists.txt file.
    build   <extra cmake args>                           Run cmake and build.
    install                                              Run cmake --install. Needs admin privileges.
    clean                                                Clean the build directory.
    help                                                 Show help.
    version                                              Current cmkr version.
```

## Credits

- https://github.com/gulrak/filesystem
- https://github.com/Tessil/ordered-map
- https://github.com/ToruNiina/toml11
- https://github.com/mpark/variant
- https://www.svgrepo.com/svg/192268/hammer
