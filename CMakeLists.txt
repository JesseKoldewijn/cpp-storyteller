cmake_minimum_required(VERSION 3.0.0)
project(cpp-storyteller VERSION 0.0.1)

include(CTest)
enable_testing()

add_executable(cpp-storyteller ./src/main.cpp)

install(TARGETS cpp-storyteller)

enable_testing()
add_test(NAME main COMMAND main)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

