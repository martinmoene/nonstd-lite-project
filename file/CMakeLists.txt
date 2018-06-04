# Copyright 2018 by Martin Moene
#
# https://github.com/martinmoene/xxx-lite
#
# Distributed under the Boost Software License, Version 1.0. 
# (See accompanying file LICENSE.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

cmake_minimum_required( VERSION 3.0 )

# At default, enable building and performing of tests and building of examples:

option( XXX_LITE_OPT_BUILD_TESTS    "Build and perform xxx-lite tests" ON )
option( XXX_LITE_OPT_BUILD_EXAMPLES "Build xxx-lite examples" OFF )

project( xxx_lite )

set( package_name "xxx-lite" )

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
