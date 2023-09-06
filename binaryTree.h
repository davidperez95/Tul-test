#ifndef BINARY_TREE_H
#define BINARY_TREE_H

/* Libraries to use */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

/* Structure */

/**
 * struct Tree - Struct to create a binary tree of integers
 * @data: Integer to store
 * @left: Pointer to the left child leaf
 * @right: Pointer to the right child leaf
*/
struct Tree {
  int data;
  struct Tree *left;
  struct Tree *right;
};

/* Prototypes */
struct Tree* insertNode(struct Tree* Node, int data);
struct Tree* createNewNode(int item);
bool checkIsBinarySearchTree(struct Tree* root);

#endif