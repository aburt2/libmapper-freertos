cmake_minimum_required(VERSION 3.5.0)
project(libmapper-freertos VERSION 0.1.0 LANGUAGES C)

add_library(mapper INTERFACE)
add_subdirectory(src)
