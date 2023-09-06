// Header File
#include "binaryTree.h"

/* Prototypes */
struct Tree* insertNode(struct Tree* Node, int data);
struct Tree* createNewNode(int item);
bool checkIsBinarySearchTree(struct Tree* root);

/**
 * main - Entry point for the program, print Yes if the tree is binary search tree, No otherwise
 * Return: 0
*/
int main() {
  
  struct Tree* root = NULL;
  //Create an ordered binary tree
    root = insertNode(root, 50);
    insertNode(root, 3);
    insertNode(root, 2);
    insertNode(root, 4);
    insertNode(root, 7);
    insertNode(root, 6);
    insertNode(root, 8);
    //Check if the created binary tree is a binary search tree
    if (checkIsBinarySearchTree(root)) {
      printf("%s\n", "Yes");
    } else {
      printf("%s\n", "No");
    }
    return 0;
}