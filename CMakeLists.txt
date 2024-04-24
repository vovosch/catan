cmake_minimum_required(VERSION 3.7)

project(Catan)

add_library(tile STATIC
    src/tile.cpp
)

target_include_directories(tile
    PUBLIC 
        ${PROJECT_SOURCE_DIR}/include
)

add_executable(main 
    src/main.cpp
)

target_link_libraries(main
    PRIVATE 
        tile
)