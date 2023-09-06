# Tul-test

This public repository is specially made for the technical test within the selection process for the position of Tul Intern. Wish me luck!

---

## Why this exercise?

I chose this exercise because since I started to develop and create software, I have been very curious about the background functioning of languages, especially how nowadays we can easily define data structures without knowing their behavior.
As a Hash table supports today a dictionary in python or a double linked list supports an array, a binary tree is one of the most used data structures to store, sort and search information.
Not only my interest in data structures led me to perform this exercise, it also has an emotional component, since the first language with which I started my way in software development, was C and performing this exercise, brought me many memories about my beginnings in development.

---

## How did i solve it?

I started by creating the main function that would allow me to create a binary tree, already sorted to corroborate that my verifying function was correct. I made this function by declaring a structure composed of an integer and two pointers reflecting the leaves or child nodes of the tree. For this function I used a recursion approach, where depending on the numerical value passed as a parameter, I could insert the new node to the left or right of the parent node.

Then I used a inorder traversal algorithm, to iterate through all the leaves or nodes of the tree, so that I could have ordered results.

At this point, I did a lot of whiteboarding using paper and pencil and the python tutor tool that allowed me to understand graphically in which part of the algorithm I had to perform the validations to verify that the tree was a BST. Basically, in each leaf or node on the left, I verify that the value of its parent is not less and in the leaves or nodes on the right, I verify that its value is not less than that of its parent. In this way, going through the whole binary tree I can validate if it is a BST or not.

---

## Instructions

To run the program you must have the GCC compiler installed on your machine at least in version 9.4.0.

You can verify this by running the following command:
`gcc --version`

If you don't have gcc installed, you can refer to the official documentation at the following link:

[gnu.org Oficial Documentation](https://gcc.gnu.org/install/)

When you have it installed you should see an input like this:

`gcc (Ubuntu 9.4.0-1ubuntu1~20.04.2) 9.4.0 Copyright (C) 2019 Free Software Foundation, Inc. This is free software; see the source for copying conditions.  There is NO warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.`

Then you must run the compiler as follows:

`gcc -o main main.c createBinaryTree.c checkBinaryTree.c`

###Explanation

`gcc` -  compiler
`-o main` - flag to name the resulting executable file as main
`main.c createBinaryTree.c chechBinaryTree.c`- files needed for the main function to work properly

After running this command in your terminal, an executable file named main will have been created.

To run it you only need to type
`./main`

And you will be able to see in console the result of the program.

---

### Example

![Binary Search Tree](/BST.png)

Should print in the console

`Yes`