#include "stella/bst.h"
#include <stdio.h>
#include <stdlib.h>

treeNode *createNode(int value){
    treeNode* result = malloc(sizeof(treeNode));
    if(result != NULL){
        result->left = NULL;
        result->right = NULL;
        result->value = value;

    }
    return result; 
}

void printTree(treeNode* node){
   if(node==NULL){
    return;
   } 

   printTree(node->left);

   printf("%d\n", node->value);

   printTree(node->right); 

}

treeNode* insertNode(treeNode* head, int value){
    treeNode* newNode = createNode(value);
    
    if(head == NULL){ // if no other node exisit return 
        
        return newNode;
    }

    treeNode* curr = head;
    treeNode* parent = NULL;

    while(curr != NULL){
        parent = curr;
        if(value < curr->value){ // new node is less than head
            curr = curr->left;
        } else if(value > curr->value){ // new node greater than head
            curr = curr->right;
        }else{ // node is equal :,(
            free(newNode);
            return head;
        }
    }


    // after we find an empty spot check one last time to see if 
    // i should put it in the left or right side 
    if(value < parent->value){
        parent->left = newNode;
    }else{
        parent->right = newNode;
    }


    return head;


}

treeNode* loadTree(int* arr, int size){
   treeNode* head = NULL;
   for(int i = 0; i < size; i++){
    head = insertNode(head, arr[i]);
   }

   return head; 
}

treeNode* searchTree(treeNode* n, int key){
    while(n != NULL){
        if(key < n->value){ // search left 
            
            n = n->left;
        }else if(key > n->value){ // search right
            
            n = n->right;
        }else{ // found
            
            return n;
        }

    }
    
    return NULL; // not found

}
