#include <stdio.h>

// Null & Wild Pointer
int main()
{
    int *ptr;               // declared but not intialised (garbage address) --> Wild Pointer
    int *ptr1=NULL;	    // declared & intialised as null --> Null pointer
    
    printf("%s %d %s %d", ptr, ptr, ptr1, ptr1);
    
    return 0;
}
