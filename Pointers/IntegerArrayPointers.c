#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 10 

int main(){
    // C older version sdont support VLA(variale length arrays) --> macro: define
    // VLA allow you to declare arrays whose sizes are determined at runtime rather than at compile time
    
    int ar[SIZE]={1090, 200, 34, 617, 2567, 2, 87, 5, 563, 1908};
    
    for(int *p=ar; p<ar+SIZE; p++)
        printf("%d ", *p);
}