#include <stdio.h>
#include <stella/bst.h>
#include <stdlib.h>

int main(){

    int arr[] = {10, 4,2, 15, 2, 7, 12, 20};
    int n = sizeof(arr)/sizeof(arr[0]);
    int searchKey;
    

    treeNode* root = loadTree(arr, n);
    treeNode* searchFuncTest = malloc(sizeof(treeNode));

    printTree(root);
    printf("Enter Search Term: \n");
    scanf("%d", &searchKey);
    
    searchFuncTest = searchTree(root, searchKey);

   if(searchFuncTest != NULL){ 
        printf("Key found: %d", searchFuncTest->value);
    }else{
        printf("Key not found\n");
    }
  
    return 0;
}