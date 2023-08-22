#include<stdio.h>
#include<stdlib.h>

int main(){
    int mat[3][3]={{1,2,3}, {4,5,6}, {7,8,9}};
    
    int size = 3*3;
    
    printf("%ld\n", sizeof(mat)/sizeof(mat[0][0]));
    
    for(int *ptr=mat; ptr<mat+size; ptr++){
        printf("%d %p\n", *ptr, ptr);
    }
    
}