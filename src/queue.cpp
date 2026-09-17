#include <iostream>
#include "../include/queue.h"

bool Queue::isEmpty() {
    return front == nullptr;
}

void Queue::enqueue(int val) {
    QueueNode* newNode = new QueueNode(val);
    if (isEmpty()) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
    std::cout << val << " added to queue!\n";
}

void Queue::dequeue() {
    if (isEmpty()) {
        std::cout << "Queue is empty, nothing to remove!\n";
        return;
    }
    std::cout << front->data << " removed from queue!\n";
    QueueNode* temp = front;
    front = front->next;
    if (front == nullptr) rear = nullptr;
    delete temp;
}

void Queue::display() {
    if (isEmpty()) {
        std::cout << "Queue is empty!\n";
        return;
    }
    QueueNode* curr = front;
    std::cout << "Queue (front to back): ";
    while (curr) {
        std::cout << curr->data << " ";
        curr = curr->next;
    }
    std::cout << "\n";
}