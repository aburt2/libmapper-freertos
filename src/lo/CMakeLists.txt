# Add file
add_executable(liblo 
    address.c
    blob.c
    bundle.c
    message.c
    method.c
    osc.c
    pattern_match.c
    send.c
    server_thread.c
    server.c
    timetag.c
    version.c
    config.h
    lo_cpp.h
    lo_endian.h
    lo_errors.h
    lo_internal.h
    lo_lowlevel.h
    lo_macros.h
    lo_osc_types.h
    lo_serverthread.h
    lo_throw.h
    lo_types_internal.h
    lo_types.h
    lo.h
)

# Link to library
target_link_libraries(liblo osc)
target_link_libraries(liblo mapper)