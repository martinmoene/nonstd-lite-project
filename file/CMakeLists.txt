# Copyright 2018 by Martin Moene
#
# https://github.com/martinmoene/xxx-lite
#
# Distributed under the Boost Software License, Version 1.0.
# (See accompanying file LICENSE.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

cmake_minimum_required( VERSION 3.5 )

# xxx-lite project and version, updated by script/update-version.py:

project(
    xxx_lite
    VERSION 9.9.9
    DESCRIPTION "XXX"
#   HOMEPAGE_URL "https://github.com/martinmoene/xxx-lite"
    LANGUAGES CXX )

set( ${PROJECT_NAME}_version "${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}.${PROJECT_VERSION_PATCH}" )

# Toplevel or subproject:

if ( CMAKE_CURRENT_SOURCE_DIR STREQUAL CMAKE_SOURCE_DIR )
    set( xxx_IS_TOPLEVEL_PROJECT TRUE )
else()
    set( xxx_IS_TOPLEVEL_PROJECT FALSE )
endif()

# If toplevel project, enable building and performing of tests, disable building of examples:

option( XXX_LITE_OPT_BUILD_TESTS    "Build and perform xxx-lite tests" ${xxx_IS_TOPLEVEL_PROJECT} )
option( XXX_LITE_OPT_BUILD_EXAMPLES "Build xxx-lite examples" OFF )

option( XXX_LITE_OPT_SELECT_STD     "Select std::xxx"    OFF )
option( XXX_LITE_OPT_SELECT_NONSTD  "Select nonstd::xxx" OFF )

project( xxx_lite LANGUAGES CXX )

include( GNUInstallDirs )

set( package_name "xxx-lite" )
set( include_source_dir "${PROJECT_SOURCE_DIR}/include" )

# Interface library:

add_library(
    ${package_name} INTERFACE )

target_include_directories(
    ${package_name} INTERFACE "$<BUILD_INTERFACE:${include_source_dir}>" )

# Installation:

install(
    DIRECTORY ${CMAKE_SOURCE_DIR}/include/ DESTINATION ${CMAKE_INSTALL_INCLUDEDIR} )

# If requested, build and perform tests, build examples:

enable_testing()

if ( XXX_LITE_OPT_BUILD_TESTS )
    add_subdirectory( test )
endif()

if ( XXX_LITE_OPT_BUILD_EXAMPLES )
    add_subdirectory( example )
endif()

# end of file
