#include <stdio.h>

struct Student{
    int reg;
    char gender;
} s1, s2, *ptr;

int main()
{
    s1.reg = 1209;
    s1.gender = 'M';
    printf("%d %c\n", s1.reg, s1.gender);       // direct instance access
    
    ptr = &s2;          // Struct Pointer
    
    ptr->reg = 1210;
    ptr->gender = 'F';
    printf("%d %c", ptr->reg, ptr->gender);     // pointer access
    
    return 0;
}
