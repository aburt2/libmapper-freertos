# Add subdirectories
target_include_directories(mapper INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

# Add subdirectories
add_subdirectory(compat)
add_subdirectory(lo)
add_subdirectory(mapper)
add_subdirectory(netinet)
add_subdirectory(zlib)