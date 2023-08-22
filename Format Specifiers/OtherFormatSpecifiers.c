#include <stdio.h>

int main()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    
    printf("%o %x %d\n", x, y, z); // octal, hexadecimal, decimal
    
    int* ptr;
     
    ptr=&x;
    printf("%p\n", ptr);  // address value
    
    float f=1.2573f;
    
    printf("%e", f);    // scientific notation
    
}
