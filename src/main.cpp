#include <iostream>
#include "../include/bst.h"
#include "../include/stack.h"
#include "../include/queue.h"

int main() {
    BST tree;
    Stack stack;
    Queue queue;
    int choice, val;

    while (true) {
        std::cout << "\n[DSA Visualizer]\n";
        std::cout << "--- BST ---\n";
        std::cout << "1. Insert into BST\n";
        std::cout << "2. Print BST\n";
        std::cout << "3. Inorder (sorted)\n";
        std::cout << "--- Stack ---\n";
        std::cout << "4. Push\n";
        std::cout << "5. Pop\n";
        std::cout << "6. Display Stack\n";
        std::cout << "--- Queue ---\n";
        std::cout << "7. Enqueue\n";
        std::cout << "8. Dequeue\n";
        std::cout << "9. Display Queue\n";
        std::cout << "0. Exit\n";
        std::cout << "> ";
        std::cin >> choice;

        if (choice == 1) {
            std::cout << "Enter a number: ";
            std::cin >> val;
            tree.insert(val);
            std::cout << "Inserted " << val << "!\n";
        } else if (choice == 2) {
            std::cout << "\nYour BST:\n";
            tree.printTree(tree.root);
        } else if (choice == 3) {
            std::cout << "\nInorder: ";
            tree.inorder(tree.root);
            std::cout << "\n";
        } else if (choice == 4) {
            std::cout << "Enter a number: ";
            std::cin >> val;
            stack.push(val);
        } else if (choice == 5) {
            stack.pop();
        } else if (choice == 6) {
            stack.display();
        } else if (choice == 7) {
            std::cout << "Enter a number: ";
            std::cin >> val;
            queue.enqueue(val);
        } else if (choice == 8) {
            queue.dequeue();
        } else if (choice == 9) {
            queue.display();
        } else if (choice == 0) {
            break;
        } else {
            std::cout << "Invalid choice, try again.\n";
        }
    }
    return 0;
}