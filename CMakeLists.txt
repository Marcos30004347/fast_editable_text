cmake_minimum_required(VERSION 3.10)

project(node_tree)

add_library(node_t src/tree.cpp)

target_include_directories(node_t PUBLIC src)

enable_testing()

add_subdirectory(tests)