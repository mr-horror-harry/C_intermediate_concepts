#include <stdio.h>

int main()
{
    char ar[101] = "HelloWorld!_This_is_India";
    
    char *ptr = ar;
    
    while(*ptr!='\n'){
        printf("%c %p\n", *ptr, ptr++);
    }
    
}