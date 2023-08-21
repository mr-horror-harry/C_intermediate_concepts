#include <stdio.h>
#include <limits.h>

void inc(int* ptr){
    (*ptr)++;
}

int main()
{
    int *ptr;
    int x=INT_MAX-1;
    
    // scanf("%d", &x);
    ptr=&x;
     
    inc(ptr);
    
    printf("%d", *ptr);
    
    return 0;
}
