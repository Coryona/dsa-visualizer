#pragma once
#include <iostream>

struct QueueNode {
    int data;
    QueueNode* next;
    QueueNode(int val) : data(val), next(nullptr) {}
};

class Queue {
public:
    QueueNode* front = nullptr;
    QueueNode* rear = nullptr;
    void enqueue(int val);
    void dequeue();
    void display();
    bool isEmpty();
};