#include <stdio.h>

int main()
{
    // byte format specfiers
    
    char x;         // 1 Byte
    signed char y;
    unsigned char z;
    
    scanf("%hhd %hhi %hhu", &x, &y, &z);
    printf("%hhd %hhi %hhu\n", x, y, z);
    
    printf("%c %c %c", x, y, z);
    
}
