#include "binaryTree.h"

/**
 * insert - Function that insert a new node, depending on its value
 * @Node: Pointer to the top of the tree
 * @data: Value to store
 * Return: pointer to the inserted node
*/
struct Tree* insertNode(struct Tree* Node, int data)
{
    //If the tree is empty, create the head of the tree
    if (Node == NULL)
        return createNewNode(data);
 
    // Loop recursively through the tree to find the place to store
    if (data < Node->data)
        Node->left = insertNode(Node->left, data);
    else if (data > Node->data)
        Node->right = insertNode(Node->right, data);
 
    // Return the inserted Node
    return Node;
}

/**
 *  newNode - Create the space in memory for a new Node
 * @data: integer value to store in the Node
 * Return: Pointer to the created node
*/
struct Tree* createNewNode(int data)
{
    //Memory allocation for the new node
    struct Tree* newNode = malloc(sizeof(struct Tree));

    //Set the data node
    newNode->data = data;

    //Set the child leaf to NULL
    newNode->left = newNode->right = NULL;
    return newNode;
}