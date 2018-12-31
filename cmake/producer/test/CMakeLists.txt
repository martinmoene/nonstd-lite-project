# ./cmake/producer/CMakeLists.txt

cmake_minimum_required( VERSION 3.5 FATAL_ERROR )

set( PACKAGE ${package_name} )

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

target_link_libraries(
    producer_test PRIVATE ${PACKAGE}
)

# end of file
