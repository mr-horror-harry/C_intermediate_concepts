#include <stdio.h>

int main()
{
    // long format specfiers
    // 8 bytes
    long x;
    signed long y;
    unsigned long z;
    
    scanf("%ld %ld %li %lu", &x, &y, &z);
    printf("%ld %li %lu\n", x, y, z);
    
    long a=12343l; // type suffix (or) type sepcifier
    long b=12436L;
    long c=13416;
    
    printf("%ld %ld %ld", a, b, c);

    // int -->  4 bytes
    // long int --> 32bit compiler: 4byte & 64bit compiler: 8bytes
    long int a=86912689;
    long long int b=8728819;

    printf("%ld %lld", a, b);
    
}
