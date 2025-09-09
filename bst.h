#ifndef BST_H_
#define BST_H_

/**
 * Binary search trees are a
 * hiarchical data structure 
 * where nodes branch out with multiple pointers
 */


typedef struct treeNode{
    int value;
    struct treeNode* left;
    struct treeNode* right;
} treeNode;

void printTree(treeNode* head);

treeNode *createNode(int value);
treeNode* loadTree(int* arr, int size);
treeNode* insertNode(treeNode* head, int value);
#endif // bst.h