# Add file
add_executable(crc32 crc32.c)

# Link to library
target_link_libraries(crc32 osc)
target_link_libraries(crc32 mapper)