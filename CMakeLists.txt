cmake_minimum_required(VERSION 3.23)
project(libmapper-freertos VERSION 0.1.0 LANGUAGES C)


add_library(mapper INTERFACE)

target_include_directories(mapper INTERFACE .)
add_subdirectory(src)
