# Add file
add_executable(libmapper
    expression/expr_buffer.h
    expression/expr_constant.h
    expression/expr_evaluator.h
    expression/expr_function.h
    expression/expr_lexer.h
    expression/expr_operator.h
    expression/expr_parser.h
    expression/expr_stack.h
    expression/expr_struct.h
    expression/expr_token.h
    expression/expr_trace.h
    expression/expr_value.h
    expression/expr_variable.h
    util/mpr_debug.h
    util/mpr_inline.h
    util/mpr_set_coerced.c
    util/mpr_set_coerced.h
    bitflags.h
    config.h
    device.c
    device.h
    expression.c
    expression.h
    graph.c
    graph.h
    id.h
    id_map.h
    link.c
    link.h
    list.c
    list.h
    map.c
    map.h
    mapper.h
    mapper_constants.h
    mapper_cpp.h
    mapper_types.h
    message.c
    message.h
    mpr_signal.h
    mpr_time.h
    mpr_type.h
    network.c
    network.h
    object.c
    object.h
    path.c
    path.h
    property.c
    property.h
    signal.c
    slot.c
    slot.h
    table.c
    table.h
    thread_data.h
    time.c
    value.c
    value.h
)

# Add subdirectories
target_include_directories(libmapper PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Link to library
target_link_libraries(libmapper osc)
target_link_libraries(libmapper mapper)