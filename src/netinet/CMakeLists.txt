# Add file
add_library(netinet INTERFACE)
target_include_directories(netinet INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

# Link to library
target_link_libraries(netinet INTERFACE mapper)