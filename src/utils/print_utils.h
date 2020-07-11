#ifndef NODE_T_PRINT_UTILS_H
#define NODE_T_PRINT_UTILS_H

#include<iostream>
#include<stdio.h>

#include "tree.h"
#include "print_utils.h"

using namespace std;

#define COUNT 9  


void print_tree(node_t* node) {
    if(!node) return;
    printf("weight: %u\n", node->weight);

    if(node->left) {
        printf("left of node %u:\n", node->weight);
        print_tree(node->left);
    }

    if(node->right) {
        printf("right of node %u:\n", node->weight);
        print_tree(node->right);
    }
}

// Function to print binary tree in 2D  
// It does reverse inorder traversal  
void print2DUtil_weight(node_t *root, int space)  
{  
    // Base case  
    if (root == NULL)  
        return;  
  
    // Increase distance between levels  
    space += COUNT;  
  
    // Process right child first  
    print2DUtil_weight(root->right, space);  
  
    // Print current node after space  
    // count  
    cout<<endl;  
    for (int i = COUNT; i < space; i++)  
        cout<<" ";  
    cout<<root->weight<<"\n";  
  
    // Process left child  
    print2DUtil_weight(root->left, space);  
}  

void print2DUtil_char(node_t *root, int space)  
{  
    // Base case  
    if (root == NULL)  
        return;  
  
    // Increase distance between levels  
    space += COUNT;  
  
    // Process right child first  
    print2DUtil_char(root->right, space);  
  
    // Print current node after space  
    // count  
    cout<<endl;  
    for (int i = COUNT; i < space; i++)  
        cout<<" ";  
    cout<<root->character<<"\n";  
  
    // Process left child  
    print2DUtil_char(root->left, space);  
}  

void print2DUtil_height(node_t *root, int space)  
{  
    // Base case  
    if (root == NULL)  
        return;  
  
    // Increase distance between levels  
    space += COUNT;  
  
    // Process right child first  
    print2DUtil_height(root->right, space);  
  
    // Print current node after space  
    // count  
    cout<<endl;  
    for (int i = COUNT; i < space; i++)  
        cout<<" ";  
    cout<<root->height<<"\n";  
  
    // Process left child  
    print2DUtil_height(root->left, space);  
}  

// Wrapper over print2DUtil()  
void print_2d_weight(node_t *root)  
{  
    // Pass initial space count as 0  
    print2DUtil_weight(root, 0);  
}  
// Wrapper over print2DUtil()  
void print_2d_height(node_t *root)  
{  
    // Pass initial space count as 0  
    print2DUtil_height(root, 0);  
}  
// Wrapper over print2DUtil()  
void print_2d_characters(node_t *root)  
{  
    // Pass initial space count as 0  
    print2DUtil_char(root, 0);  
}  
void print_indices(node_t* root) {
    if(!root) return;
    print_indices(root->left);
    printf("%i ", root->weight);
    print_indices(root->right);
}

void print_characters(node_t* root) {
    if(!root) return;
    print_characters(root->left);
    printf("%c", root->character);
    print_characters(root->right);
}

#endif