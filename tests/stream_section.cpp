#include <iostream> 
#include <stdio.h>
#include <stdlib.h>
#include <sstream>

#include "string.h"
#include "assert.h"
#include "tree.h"

void print_characters(node_t* root) {
    if(!root) return;
    print_characters(root->left);
    printf("%c", root->character);
    print_characters(root->right);
}

int main() {
    node_t* root = nullptr;
    std::stringstream stream;

    root = insert_character_at(root, 'a', 0);
    root = insert_character_at(root, 'b', 1);
    root = insert_character_at(root, 'c', 2);
    root = insert_character_at(root, 'd', 3);

    stream_section(root, stream, 0, 1);

    assert(strcmp(stream.str().c_str(), "ab") == 0);

    stream_section(root, stream, 2, 3);

    assert(strcmp(stream.str().c_str(), "abcd") == 0);

    return 0;
}