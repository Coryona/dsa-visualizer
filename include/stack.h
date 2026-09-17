#pragma once
#include <iostream>

struct StackNode {
    int data;
    StackNode* next;
    StackNode(int val) : data(val), next(nullptr) {}
};

class Stack {
public:
    StackNode* top = nullptr;
    void push(int val);
    void pop();
    void display();
    bool isEmpty();
};