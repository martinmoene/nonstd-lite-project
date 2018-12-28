# ./cmake/producer/CMakeLists.txt

cmake_minimum_required( VERSION 3.5 FATAL_ERROR )

project(
    producer_test
    VERSION 0.1.0
#   DESCRIPTION "Test for header-only library 'producer'"
#   HOMEPAGE_URL "https://github.com/martinmoene/nonstd-lite-project/cmake"
    LANGUAGES CXX
)

message( STATUS "Test ${PROJECT_NAME} version: '${${PROJECT_NAME}_VERSION}'")

add_executable(
    producer_test
    producer.t.cpp
)

target_include_directories(
    producer_test
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../include>
        $<INSTALL_INTERFACE:include>
)

# end of file
