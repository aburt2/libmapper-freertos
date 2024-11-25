cmake_minimum_required(VERSION 3.5.0)
project(osc VERSION 0.1.0 LANGUAGES C)

set(lib osc)
add_library(${lib} STATIC osc.c)

target_include_directories(
    ${lib}
    PUBLIC ../src
)

