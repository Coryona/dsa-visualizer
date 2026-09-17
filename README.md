# DSA Visualizer

An interactive command-line program that implements core data structures from scratch in C++11.

## Features
- **Binary Search Tree**: insert values, print the tree sideways, and view inorder (sorted) traversal
- **Stack**: push, pop, and display (LIFO)
- **Queue**: enqueue, dequeue, and display (FIFO)
- All structures built with pointers and manual memory management (no STL containers)

## How to Run
```bash
g++ -std=c++11 src/main.cpp src/bst.cpp src/stack.cpp src/queue.cpp -o dsavisualizer
./dsavisualizer
```

## Example
```
Your BST:
     70
50
     30
```

## Project Structure
```
include/   header files (bst.h, stack.h, queue.h)
src/       implementations and main menu
web/       browser visualization (in progress)
```

## What I Learned
- How nodes connect with pointers. A BST node points left and right, while stack and queue nodes only point to the next one.
- Stack is LIFO (last in, first out) and Queue is FIFO (first in, first out). Same node idea, different rules for adding and removing.
- Why you save the node in a temp pointer before deleting it. If you delete first, you lose the rest of the list.
- Inorder traversal prints a BST in sorted order because of how the tree is built, not because anything gets sorted.
- Splitting code into header (.h) and source (.cpp) files, and compiling multiple files together with g++.
- Reading compiler errors. A missing `}` error showed me part of my file got cut off.
- Using Git and GitHub to commit and push a project.

## Next Steps
- BST delete and search
- Browser-based visualization

## Author
Coryona Greer, Computer Science @ Jackson State University
