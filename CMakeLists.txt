cmake_minimum_required(VERSION 3.0.0)
project(cmake-tutorial VERSION 0.1.0)

set(CMAKE_WARN_DEPRECATED ON)

include(CTest)
enable_testing()

add_subdirectory(src)

add_executable(cmake-tutorial.elf src/main.cpp)

target_link_libraries(cmake-tutorial.elf PRIVATE message)

#set(CPACK_PROJECT_NAME ${PROJECT_NAME})
#set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
#include(CPack)
