add_executable(heap heap.c)
add_executable(stack stack.c)
add_executable(blink blink.c)

# Link pigpio
target_link_libraries(blink PRIVATE pigpio)
