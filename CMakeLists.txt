cmake_minimum_required(VERSION 3.15.0)
project(cmake-tutorial VERSION 0.1.0)

set(CMAKE_WARN_DEPRECATED ON)

include(CTest)
enable_testing()

set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -O0")

add_subdirectory(src)

message("CMAKE_CXX_COMPILER = ${CMAKE_CXX_COMPILER}")
message("CMAKE_CXX_FLAGS_DEBUG = ${CMAKE_CXX_FLAGS_DEBUG}")
message("CMAKE_BUILD_TYPE = ${CMAKE_BUILD_TYPE}")

add_executable(cmake-tutorial.elf src/main.cpp)

target_link_libraries(cmake-tutorial.elf PRIVATE message)

#set(CPACK_PROJECT_NAME ${PROJECT_NAME})
#set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
#include(CPack)
