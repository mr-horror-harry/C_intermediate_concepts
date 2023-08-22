#include <stdio.h>

// Null Pointer
int main()
{
    int *ptr;               // declared but not intialised
    int *ptr1=NULL;
    
    printf("%s %d %s %d", ptr, ptr, ptr1, ptr1);
    
    return 0;
}
