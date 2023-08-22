#include <stdio.h>

int main()
{
    // short format specfiers
    
    short n;
    signed short x;
    unsigned short y;
    
    scanf("%hd %hi %hu", &n, &x, &y);
    
    printf("%hd %hi %hu", n, x, y);
}
