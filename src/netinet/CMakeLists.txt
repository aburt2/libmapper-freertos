# Add file
add_executable(netinet 
   netinet.c
)

# Link to library
target_link_libraries(netinet mapper)