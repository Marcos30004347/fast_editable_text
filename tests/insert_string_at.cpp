#include <iostream> 
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sstream>

#include"tree.h"
#include"assert.h"

int main() {
    node_t* root = nullptr;

    root = insert_string_at(root, "abcd", 0);

    assert(strcmp(to_string(root, 0, lenght(root) - 1).c_str(), "abcd") == 0);

    root = insert_string_at(root, "abcd", 2);

    assert(strcmp(to_string(root, 0, lenght(root) - 1).c_str(), "ababcdcd") == 0);

    root = insert_string_at(root, "abcd", lenght(root));

    assert(strcmp(to_string(root, 0, lenght(root) - 1).c_str(), "ababcdcdabcd") == 0);
    
    return 0; 
}