#define _USE_MATH_DEFINES
#include <stdio.h>
#include <locale.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main(void)
{
    setlocale(LC_ALL, "RUS");

    const double k = 7.0;   
    double x;               
    double a, b, y;

    printf("Введите значение x: ");
    scanf("%lf", &x);

    
    a = pow(k + x, 3);

    
    b = log10(fabs(k * x));

    
    y = b * b + sqrt(fabs(a));

  
    printf("При k = %.0f, x = %.1f:\n", k, x);
    printf("  a = (k + x)^3   = %.3f\n", a);
    printf("  b = lg|k*x|     = %.6f\n", b);
    printf("  y = b^2 + sqrt(|a|) = %.3f\n", y);

    return 0;
}