#include <stdio.h>

int main()
{
    short s=190;
    int i=100;
    long l=200L;
    char c='a';
    
    short *ps=&s;
    int *pi=&i;
    long *pl=&l;
    char *pc=&c;
    
    printf("%hu %d %ld %c\n", *ps, *pi, *pl, *pc);
    printf("%p %p %p %p", ps, pi, pl, pc);
    
}
