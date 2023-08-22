#include <stdio.h>
#include <float.h>

int main()
{
    // decimal float values
    
    float x;            // 4 bytes
    double y;           // 8 bytes
    long double z;      // 8 - 16 bytes
    
    scanf("%f %lf %Lf", &x, &y, &z);
    
    printf("%f %lf %Lf\n", x, y, z);
    
    // default precision after decimal point
    printf("%d %d %d", FLT_DIG, DBL_DIG, LDBL_DIG);
    
}
