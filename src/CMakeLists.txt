# Add subdirectories
target_include_directories(mapper INTERFACE .)

# Add subdirectories
add_subdirectory(compat)
add_subdirectory(lo)
add_subdirectory(mapper)
add_subdirectory(netinet)
add_subdirectory(zlib)