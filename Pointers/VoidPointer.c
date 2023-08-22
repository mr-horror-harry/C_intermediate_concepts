#include <stdio.h>

// Void Pointer
int main()
{
    void* ptr;
    
    int x=10;
    char c='a';
    long l=23456L;
    
    ptr = &x;
    printf("%d\n", *((int*) ptr));    // typecast void to int ptr 
    
    ptr = &c;
    printf("%c\n", *((char*) ptr));   // typecast void to char ptr
    
    ptr = &l;
    printf("%ld", (*(long*) ptr))  ;   // typecast void to long ptr
}
