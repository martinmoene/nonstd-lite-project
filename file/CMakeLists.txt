# Copyright 2018 by Martin Moene
#
# https://github.com/martinmoene/xxx-lite
#
# Distributed under the Boost Software License, Version 1.0.
# (See accompanying file LICENSE.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

cmake_minimum_required( VERSION 3.5 )

# xxx-lite version, updated by script/update-version.py:

set( xxx_lite_version "9.9.9" )

# Enable building and performing of tests and building of examples:

option( XXX_LITE_OPT_BUILD_TESTS    "Build and perform xxx-lite tests" ON )
option( XXX_LITE_OPT_BUILD_EXAMPLES "Build xxx-lite examples" OFF )

option( XXX_LITE_OPT_SELECT_STD     "Select std::xxx"    OFF )
option( XXX_LITE_OPT_SELECT_NONSTD  "Select nonstd::xxx" OFF )

project( xxx_lite LANGUAGES CXX )

set( package_name "xxx-lite" )
set( include_source_dir "${PROJECT_SOURCE_DIR}/include" )

# Interface library:

add_library(
    ${package_name} INTERFACE )

target_include_directories(
    ${package_name} INTERFACE "$<BUILD_INTERFACE:${include_source_dir}>" )

enable_testing()

if ( XXX_LITE_OPT_BUILD_TESTS )
    add_subdirectory( test )
endif()

if ( XXX_LITE_OPT_BUILD_EXAMPLES )
    add_subdirectory( example )
endif()

# end of file
