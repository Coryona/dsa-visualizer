#pragma once

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

class BST {
public:
    Node* root = nullptr;
    void insert(int val);
    void printTree(Node* node, int space = 0);
    void inorder(Node* node);
};