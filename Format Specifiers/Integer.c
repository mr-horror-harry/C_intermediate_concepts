#include <stdio.h>

int main()
{
    // Integer format specfiers
    
    int n;
    unsigned int x;
    signed int y;
    
    scanf("%d %u %i", &n, &x, &y);
    
    printf("%d %u %i", n, x, y);

    // %d --> decimal int
    // %i --> decimal to int, octal to int
}
