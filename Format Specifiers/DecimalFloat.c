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
    
    // floating point values are by default double without type casting
    float a = 1.2357f;
    float b = 1.2357F;
    double c = 1.8739d;
    double d = 1.8739D;
    printf("%f %f %f %f\n", a, b, c, d);
    
    // default precision after decimal point
    printf("%d %d %d", FLT_DIG, DBL_DIG, LDBL_DIG);
    
}
