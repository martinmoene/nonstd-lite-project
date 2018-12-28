# ./cmake/producer/CMakeLists.txt

cmake_minimum_required( VERSION 3.5 FATAL_ERROR )

project(
    producer_lite
    VERSION 1.2.3
#   DESCRIPTION "A CMake project providing header-only library 'producer-lite'"
#   HOMEPAGE_URL "https://github.com/martinmoene/nonstd-lite-project/cmake"
    LANGUAGES CXX )

set( package_name "producer-lite" )

message( STATUS "Project '${PROJECT_NAME}', package '${package_name}' version: '${${PROJECT_NAME}_VERSION}'")

# CMake helpers:

include( GNUInstallDirs )
include( CMakePackageConfigHelpers )

# Interface library:

add_library(
    ${package_name} INTERFACE )

add_library(
    ${package_name}::${package_name} ALIAS ${package_name} )

target_include_directories(
    ${package_name}
    INTERFACE
        "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/>"
        "$<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>" )

# Package configuration:

configure_package_config_file(
    "${CMAKE_CURRENT_SOURCE_DIR}/cmake/${package_name}-config.cmake.in"
    "${CMAKE_CURRENT_BINARY_DIR}/${package_name}-config.cmake"
    INSTALL_DESTINATION "${CMAKE_INSTALL_LIBDIR}/cmake/${package_name}"
)

write_basic_package_version_file(
    "${CMAKE_CURRENT_BINARY_DIR}/${package_name}-config-version.cmake"
    VERSION       ${${PROJECT_NAME}_VERSION}
    COMPATIBILITY SameMajorVersion
)

# Installation:

install(
    TARGETS      ${package_name}
    EXPORT       ${package_name}-targets
#   INCLUDES DESTINATION "${...}"  # already set via target_include_directories()
)

install(
    EXPORT       ${package_name}-targets
    NAMESPACE    ${package_name}::
    DESTINATION "${CMAKE_INSTALL_LIBDIR}/cmake/${package_name}"
)

install(
    FILES       "${CMAKE_CURRENT_BINARY_DIR}/${package_name}-config.cmake"
                "${CMAKE_CURRENT_BINARY_DIR}/${package_name}-config-version.cmake"
    DESTINATION "${CMAKE_INSTALL_LIBDIR}/cmake/${package_name}"
)

install(
    DIRECTORY   "${CMAKE_SOURCE_DIR}/include/"
    DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}"
)

# Testing:

enable_testing()

add_subdirectory( test )

# end of file
