cmake_minimum_required(VERSION 3.0.0)
project(clang-test VERSION 0.0.1)

include(CTest)
enable_testing()

add_executable(clang-test main.cpp)

install(TARGETS clang-test)

enable_testing()
add_test(NAME main COMMAND main)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

