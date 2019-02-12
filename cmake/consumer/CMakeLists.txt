# ./cmake/consumer/CMakeLists.txt

if( NOT DEFINED CMAKE_MINIMUM_REQUIRED_VERSION )
    cmake_minimum_required( VERSION 3.5 FATAL_ERROR )
endif()

project(
    consumer
    VERSION 0.1.0
#   DESCRIPTION "A CMake project consuming header-only library 'producer-lite'"
#   HOMEPAGE_URL "https://github.com/martinmoene/nonstd-lite-project/cmake"
    LANGUAGES CXX )

message( STATUS "Project ${PROJECT_NAME} version: '${${PROJECT_NAME}_VERSION}'")

# Obtain package producer-lite:

find_package(
    producer-lite 1.0.0 REQUIRED )

message( STATUS "Package producer-lite found: '${producer-lite_FOUND}', version '${producer-lite_VERSION}'" )

# Define product to create:

add_executable(
    consumer
    src/consumer.cpp )

target_link_libraries(
    consumer
    producer-namespace::producer-lite )

# end of file
