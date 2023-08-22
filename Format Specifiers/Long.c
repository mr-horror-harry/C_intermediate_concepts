#include <stdio.h>

int main()
{
    // long format specfiers
    long x;
    signed long y;
    unsigned long z;
    
    scanf("%ld %li %lu", &x, &y, &z);
    printf("%ld %li %lu\n", x, y, z);
    
    long a=12343l; // type suffix (or) type sepcifier
    long b=12436L;
    long c=13416;
    
    printf("%ld %ld %ld", a, b, c);
    
}
