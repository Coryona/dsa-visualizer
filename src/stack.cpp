#include <iostream>
#include "../include/stack.h"

bool Stack::isEmpty() {
    return top == nullptr;
}

void Stack::push(int val) {
    StackNode* newNode = new StackNode(val);
    newNode->next = top;
    top = newNode;
    std::cout << val << " pushed to stack!\n";
}

void Stack::pop() {
    if (isEmpty()) {
        std::cout << "Stack is empty, nothing to pop!\n";
        return;
    }
    std::cout << top->data << " popped from stack!\n";
    StackNode* temp = top;
    top = top->next;
    delete temp;
}

void Stack::display() {
    if (isEmpty()) {
        std::cout << "Stack is empty!\n";
        return;
    }
    StackNode* curr = top;
    std::cout << "Stack (top to bottom): ";
    while (curr) {
        std::cout << curr->data << " ";
        curr = curr->next;
    }
    std::cout << "\n";
}