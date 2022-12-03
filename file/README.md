# xxx lite: C++yy's xxx for C++yy and later

[![Language](https://img.shields.io/badge/C%2B%2B-98/11/14/17/20/23-blue.svg)](https://en.wikipedia.org/wiki/C%2B%2B#Standardization) [![License](https://img.shields.io/badge/license-BSL-blue.svg)](https://opensource.org/licenses/BSL-1.0) [![Build Status](https://github.com/martinmoene/xxx-lite/actions/workflows/ci.yml/badge.svg)](https://github.com/martinmoene/xxx-lite/actions/workflows/ci.yml) [![Build status](https://ci.appveyor.com/api/projects/status/nrnbfhvvp39ex075?svg=true)](https://ci.appveyor.com/project/martinmoene/xxx-lite) [![Version](https://badge.fury.io/gh/martinmoene%2Fxxx-lite.svg)](https://github.com/martinmoene/xxx-lite/releases) [![download](https://img.shields.io/badge/latest-download-blue.svg)](https://raw.githubusercontent.com/martinmoene/xxx-lite/master/include/nonstd/xxx.hpp) [![Conan](https://img.shields.io/badge/on-conan-blue.svg)]() [![Try it online](https://img.shields.io/badge/on-wandbox-blue.svg)](https://wandbox.org/permlink/DiMxDuWYOiUMKsdj) [![Try it on godbolt online](https://img.shields.io/badge/on-godbolt-blue.svg)](https://godbolt.org/z/7dEz5r)

**Contents**  

- [Example usage](#example-usage)
- [In a nutshell](#in-a-nutshell)
- [License](#license)
- [Dependencies](#dependencies)
- [Installation](#installation)
- [Synopsis](#synopsis)
- [Other implementations of xxx](#other-implementations-of-xxx)
- [Notes and references](#notes-and-references)
- [Appendix](#appendix)

<!-- - [Reported to work with](#reported-to-work-with)
- [Building the tests](#building-the-tests) -->

## Example usage

```Cpp
#include "nonstd/xxx.hpp"
#include <iostream>

int main(int argc, char **)
{
}
```

### Compile and run

```Text
$ g++ -std=c++11 -Wall -I../include/ -o main.exe main.cpp && main.exe
```

## In a nutshell

**xxx lite** is a single-file header-only library to provide [C++yy's class xxx](https://en.cppreference.com/w/cpp/???/xxx) for use with C++11 and later. If available, the standard library is used, unless [configured](#configuration) otherwise.

Currently `nonstd::xxx` does not (yet) support ... .

**Features and properties of xxx lite** are ease of installation (single header), freedom of dependencies other than the standard library.

**Limitations of xxx lite** are ... \[*to be summed up*\].

## License

*xxx lite* is distributed under the [Boost Software License](https://github.com/martinmoene/xxx-lite/blob/master/LICENSE.txt).

## Dependencies

*xxx lite* has no other dependencies than the [C++ standard library](http://en.cppreference.com/w/cpp/header).

## Installation

*xxx lite* is a single-file header-only library. Put `xxx.hpp` in the [include](include) folder directly into the project source tree or somewhere reachable from your project.

## Synopsis

- [Documentation of `class xxx`](#documentation-of-class-xxx)
- [*xxx lite* implementation status](#xxx-lite-implementation-status)
- [Configuration](#configuration)

### Documentation of class xxx

\[*Envisioned*\] Depending on the compiler and C++ standard used, *xxx lite* behaves less or more like the standard's version. To get an idea of the capabilities of *xxx lite* with your configuration, look at the output of the [tests](test/xxx.t.cpp), issuing `xxx-main.t --pass @`.

For the standard's documentation, see [`class xxx`](https://en.cppreference.com/w/cpp/???/xxx), which is part of the [C++ ??? library](https://en.cppreference.com/w/cpp/???).

### *xxx lite* implementation status

| Kind               | Type or function             | Notes |
|--------------------|------------------------------|-------|
| **Type**           | **xxx**                      | present, no stop abilities |
| &nbsp;             | &nbsp; | &nbsp; |
| **Objects**        | **nostopstate**              | macro for pre-C++17 (no inline var.) |
| &nbsp;             | &nbsp; | &nbsp; |
| **Utilities**      | **make_stop_callback()**     | not present, deduction guideline workaround |

### Configuration

#### Tweak header

If the compiler supports [`__has_include()`](https://en.cppreference.com/w/cpp/preprocessor/include), *xxx lite* supports the [tweak header](https://vector-of-bool.github.io/2020/10/04/lib-configuration.html) mechanism. Provide your *tweak header* as `nonstd/xxx.tweak.hpp` in a folder in the include-search-path. In the tweak header, provide definitions as documented below, like `#define xxx_CPLUSPLUS 201103L`.

### Select `std::xxx` or `nonstd::xxx`

\[*To be implemented*\]

At default, *xxx lite* uses `std::xxx` if it is available and lets you use it via namespace `nonstd`. You can however override this default and explicitly request to use `std::xxx` or xxx lite's `nonstd::xxx` as `nonstd::xxx` via the following macros.

-D<b>xxx\_CONFIG\_SELECT\_XXX</b>=xxx\_SELECT\_XXX\_NONSTD  
Define this to `xxx__CONFIG_SELECT_XXX_STD` to select `std::xxx` as `nonstd::xxx`. Define this to `xxx_SELECT_XXX_NONSTD` to select `nonstd::xxx` as `nonstd::xxx`. Default is undefined, which has the same effect as defining to `xxx_SELECT_XXX_NONSTD` currently (this may change to `xxx_SELECT_XXX_DEFAULT`).

#### Standard selection macro

\-D<b>xxx\_CPLUSPLUS</b>=199711L  
Define this macro to override the auto-detection of the supported C++ standard, if your compiler does not set the `__cplusplus` macro correctly.

#### Disable exceptions

-D<b>xxx_CONFIG_NO_EXCEPTIONS</b>=0
Define this to 1 if you want to compile without exceptions. If not defined, the header tries and detect if exceptions have been disabled (e.g. via `-fno-exceptions`). Default is undefined.

## Other implementations of xxx

- [xxx](url). Description.

## Notes and references

- [pNNNN](http://wg21.link/pNNNN) - Tile. Author(s). Year.

## Appendix

<a id="a1"></a>
### A.1 Compile-time information

The version of *xxx lite* is available via tag `[.version]`. The following tags are available for information on the compiler and on the C++ standard library used: `[.compiler]`, `[.stdc++]`, `[.stdlanguage]` and `[.stdlibrary]`.

<a id="a2"></a>
### A.2 Xxx lite test specification

<details>
<summary>click to expand</summary>
<p>

```Text
xxx: Allows to ...
tweak header: Reads tweak header if supported [tweak]
```

</p>
</details>
