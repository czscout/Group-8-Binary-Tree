//**************************************
// Group 8
// Binary Tree Implementation
// Binary Tree Functions
// CSCI 205
// Last Edit: 11:29 03/13/19
//**************************************

#include <stdio.h>
#include <stdbool.h>
#include "binarytree.h"

void initialize(binary_tree* bt){
    bt->numberElements = 0;
}

bool search(binary_tree* bt, int key){
    node* temp = bt->rootNode;
    while(temp != NULL) {
        if(temp->number == key) {
            return true;
        }
        if(key < temp->number) {
            temp = temp->left;
        }
        else {
            temp = temp->right;
        }
    }
    return false;
}

void insert(binary_tree* bt, int item){

}

void printinorder(binary_tree* bt){

}

void printpreorder(binary_tree* bt){

}

void printpostorder(binary_tree* bt){

}

int btsize(binary_tree* bt){

}

int treeheight(binary_tree* bt){

}
