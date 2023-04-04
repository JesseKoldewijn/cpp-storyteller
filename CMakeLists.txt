cmake_minimum_required(VERSION 3.0.0)
project(Cpp-StoryTeller VERSION 0.0.1)

include(CTest)
enable_testing()

add_executable(Cpp-StoryTeller ./src/main.cpp)

install(TARGETS Cpp-StoryTeller)

enable_testing()
add_test(NAME main COMMAND main)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

