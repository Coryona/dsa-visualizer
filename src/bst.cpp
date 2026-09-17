#include <iostream>
#include "../include/bst.h"

void BST::insert(int val) {
    Node* newNode = new Node(val);
    if (!root) { root = newNode; return; }
    Node* curr = root;
    while (true) {
        if (val < curr->data) {
            if (!curr->left) { curr->left = newNode; break; }
            curr = curr->left;
        } else {
            if (!curr->right) { curr->right = newNode; break; }
            curr = curr->right;
        }
    }
}

void BST::inorder(Node* node) {
    if (!node) return;
    inorder(node->left);
    std::cout << node->data << " ";
    inorder(node->right);
}

void BST::printTree(Node* node, int space) {
    if (!node) return;
    space += 5;
    printTree(node->right, space);
    std::cout << "\n";
    for (int i = 5; i < space; i++) std::cout << " ";
    std::cout << node->data << "\n";
    printTree(node->left, space);
}