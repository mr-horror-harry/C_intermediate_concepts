#include <stdio.h>
#include <stdlib.h>

void add(int* a, int* b, int* res){
    *res = *a + *b;
}

int main()
{
    int *p1, *p2, x, y, res;
    
    scanf("%d %d", &x, &y);
    p1=&x;
    p2=&y;
    
    add(p1, p2, &res);
    
    printf("%d", res);
    return 0;
}
