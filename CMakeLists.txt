cmake_minimum_required(VERSION 3.10)
set (CMAKE_CXX_STANDARD 20)


project(mandelchess)

add_compile_options(-Wall -Wextra -Wpedantic -O2)
add_executable(mandel src/bitboard.cpp src/bitboard.h)
target_link_libraries(mandel PRIVATE)
target_compile_features(mandel PRIVATE cxx_std_20)
