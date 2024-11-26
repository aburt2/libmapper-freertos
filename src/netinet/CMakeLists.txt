# Add file
add_executable(netinet 
   netinet.c
   in.h
   tcp.h
)

# Link to library
target_link_libraries(netinet mapper)