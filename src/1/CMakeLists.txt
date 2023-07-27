add_executable(1 1.c)
target_include_directories(1 PRIVATE .)

# # example:
# target_link_libraries(mk_first_win
#     PRIVATE SDL2
#     PRIVATE glad_static
# )
