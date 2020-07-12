cmake_minimum_required(VERSION 3.10)

project(text_tree)

add_library(text_tree src/tree.cpp)

target_include_directories(text_tree PUBLIC src)

enable_testing()

add_subdirectory(tests)