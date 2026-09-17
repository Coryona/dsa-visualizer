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
- How pointers link nodes together in trees and lists
- Why pop and dequeue save a temp pointer before deleting (avoids memory leaks)
- Why inorder traversal of a BST always prints sorted output

## Next Steps
- BST delete and search
- Browser-based visualization

## Author
Coryona Greer, Computer Science @ Jackson State University
