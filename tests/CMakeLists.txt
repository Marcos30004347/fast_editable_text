cmake_minimum_required(VERSION 3.10)

project(append_tree_left)
add_executable(append_tree_left append_tree_left.cpp)
target_link_libraries(append_tree_left node_t)

project(append_tree_right)
add_executable(append_tree_right append_tree_right.cpp)
target_link_libraries(append_tree_right node_t)

project(insert_char_at)
add_executable(insert_char_at insert_char_at.cpp)
target_link_libraries(insert_char_at node_t)

project(insert_tree_at)
add_executable(insert_tree_at insert_tree_at.cpp)
target_link_libraries(insert_tree_at node_t)

project(insert_string_at)
add_executable(insert_string_at insert_string_at.cpp)
target_link_libraries(insert_string_at node_t)

project(index)
add_executable(index index.cpp)
target_link_libraries(index node_t)

project(lenght)
add_executable(lenght lenght.cpp)
target_link_libraries(lenght node_t)

project(to_string)
add_executable(to_string to_string.cpp)
target_link_libraries(to_string node_t)

project(split_at)
add_executable(split_at split_at.cpp)
target_link_libraries(split_at node_t)

project(stream_section)
add_executable(stream_section stream_section.cpp)
target_link_libraries(stream_section node_t)

project(subtree)
add_executable(subtree subtree.cpp)
target_link_libraries(subtree node_t)

project(remove_character_at)
add_executable(remove_character_at remove_character_at.cpp)
target_link_libraries(remove_character_at node_t)

project(remove_characters_between)
add_executable(remove_characters_between remove_characters_between.cpp)
target_link_libraries(remove_characters_between node_t)


add_test(insert_char_at insert_char_at)
add_test(index index)
add_test(lenght lenght)
add_test(insert_tree_at insert_tree_at)
add_test(append_tree_left append_tree_left)
add_test(append_tree_right append_tree_right)
add_test(to_string to_string)
add_test(insert_string_at insert_string_at)
add_test(split_at split_at)
add_test(stream_section stream_section)
add_test(subtree subtree)
add_test(remove_character_at remove_character_at)
add_test(remove_characters_between remove_characters_between)

