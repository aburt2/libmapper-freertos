# Add file
add_executable(compat 
    gai_strerror.c
    gethostname.c
    getnameinfo.c
    ifaddrs.c
)

# Link to library
target_link_libraries(compat mapper)