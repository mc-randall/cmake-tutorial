
cmake_minimum_required(VERSION 3.15)

#include_directories(./include)


add_library(message STATIC
    src/message.cpp
)

target_include_directories(message PUBLIC ./include)