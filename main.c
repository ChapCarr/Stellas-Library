#include <stdio.h>
#include <stella/bst.h>

int main(){

    int arr[] = {10, 4,2, 15, 2, 7, 12, 20};
    int n = sizeof(arr)/sizeof(arr[0]);

    treeNode* root = loadTree(arr, n);

    printTree(root);


  
    return 0;
}