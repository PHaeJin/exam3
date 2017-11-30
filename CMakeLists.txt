add_library(prim99lib mathfunc.c printfunc.c)

add_executable(prime99exe main.c)

target_link_libraries(prime99exe prim99lib)

