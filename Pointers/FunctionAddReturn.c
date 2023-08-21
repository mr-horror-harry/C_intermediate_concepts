#include <stdio.h>
#include <stdlib.h>

int add(int* a, int* b){
    return *a + *b;
}

int main()
{
    int *p1, *p2, x, y;
    
    scanf("%d %d", &x, &y);
    p1=&x;
    p2=&y;
    
    printf("%d", add(p1, p2));
    return 0;
}
