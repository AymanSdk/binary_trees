# Binary Trees in C

This repository contains an implementation of binary trees in the C programming language. Binary trees are a fundamental data structure consisting of nodes, each with at most two children: a left and a right child.

## Overview

A binary tree is composed of nodes, where each node contains a value and references to its left and right children (if they exist). This implementation provides basic operations for creating, inserting, deleting nodes, traversing the tree, and other utility functions.

## Files

- `binary_tree.c`: Contains the implementation of the binary tree functions.
- `binary_tree.h`: Header file declaring the functions and structures used in `binary_tree.c`.
- `main.c`: An example usage of the binary tree functions demonstrating various operations.

## Functions

### Basic Operations

- `createNode(value)`: Creates a new node with the given value.
- `insertNode(root, value)`: Inserts a new node with the given value into the tree.
- `deleteNode(root, value)`: Deletes the node with the given value from the tree.
- `searchNode(root, value)`: Searches for a node with the given value in the tree.

### Traversal

- `preorderTraversal(root)`: Performs a preorder traversal of the tree (Root, Left, Right).
- `inorderTraversal(root)`: Performs an inorder traversal of the tree (Left, Root, Right).
- `postorderTraversal(root)`: Performs a postorder traversal of the tree (Left, Right, Root).

### Utility

- `getHeight(root)`: Calculates the height of the tree.
- `getMinValue(root)`: Finds the minimum value in the tree.
- `getMaxValue(root)`: Finds the maximum value in the tree.

## Usage

To use the binary tree implementation:

1. Clone this repository: `git clone https://github.com/aymansdk/binary_trees.git`
2. Include `binary_tree.c` and `binary_tree.h` in your C project.
3. Utilize the functions provided in `binary_tree.h` to work with binary trees.

Example usage can be found in `main.c`.

## Contributing

Contributions are welcome! If you find any issues or want to add improvements, feel free to open a pull request or create an issue in this repository.
