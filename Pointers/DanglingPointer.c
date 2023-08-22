#include <stdio.h>
#include<stdlib.h>

int main()
{
    char* p1 = (char*) malloc(sizeof(char)); 
    int* p2 = (int*) malloc(sizeof(int));
    short* p3 = (short*) malloc(sizeof(short));
    long* p4 = (long*) malloc(sizeof(long));
    
    *p1 = '/';
    *p2 = 10346232;
    *p3 = 61378;                // unsigned short
    *p4 = 1566666666666728L;
    
    free(p4);
    // p4 becomes dangling pointer
    
    printf("%p %c\n", p1, *p1);
    printf("%p %d\n", p2, *p2);
    printf("%p %hu\n", p3, *p3);
    printf("%p %ld\n", p4, *p4);    // garbage long value
}
