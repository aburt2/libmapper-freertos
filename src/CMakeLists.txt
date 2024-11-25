# Add libraries
add_library(osc INTERFACE)
add_library(mapper INTERFACE)

# Add subdirectories
target_include_directories(osc INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(mapper INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

# Add subdirectories
add_subdirectory(compat)
add_subdirectory(lo)
add_subdirectory(mapper)
add_subdirectory(netinet)
add_subdirectory(zlib)

# Link mapper to osc
target_link_libraries(mapper INTERFACE osc)