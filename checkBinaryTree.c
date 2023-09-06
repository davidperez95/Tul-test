#include "binaryTree.h"

/**
 * checkIsBinarySearchTree - Function that checks if the binary tree is a binary search Tree
 * @root: pointer to the top/head of the binary tree
 * Return: True if the binary tree is a binary search tree, false otherwise
*/
bool checkIsBinarySearchTree(struct Tree* root) {

    // Create a pointer to the root to reference and
    // A previousNode pointer to not lose track
    struct Tree* currentNode = root;
    struct Tree* previousNode = NULL;
    
    // Iterate through the binary tree while the current node exists
    while (currentNode != NULL) {
        if (currentNode->left != NULL) {
            struct Tree* parent = currentNode->left;
            
            //Loop to the right of the tree to find the parent Node
            while (parent->right != NULL && parent->right != currentNode)
                parent = parent->right;
            
            //If the leaf is reached, set the parent and move the current node to the left
            if (parent->right == NULL) {
                parent->right = currentNode;
                currentNode = currentNode->left;
            } else {
                //Set free the right leaf and Check if the current node is less than the previous node
                parent->right = NULL;
                if (previousNode != NULL && currentNode->data <= previousNode->data)
                    return false;
                
                //Restart the positions to move the current node to the right
                //and the previous to not lose track
                previousNode = currentNode;
                currentNode = currentNode->right;
            }
        } else {
            // Check if the current node is less than previous node
            if (previousNode != NULL && currentNode->data <= previousNode->data)
                return false;
            //If there's not a previous node, set the previous node to the current node
            //and move the current node to the parent node
            previousNode = currentNode;
            currentNode = currentNode->right;
        }
    }
    
    return true;
}