#define _USE_MATH_DEFINES
#include <stdio.h>
#include <locale.h>
#include <math.h>

// ќпределение константы ѕи (если не определена в math.h)
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main(void)
{
    setlocale(LC_ALL, "RUS");

    double gr;  
    double rad; 
    double result;

    printf("¬ведите угол в градусах: ");
    scanf("%lf", &gr);

   
    rad = gr * M_PI / 180.0;

   
    result = sin(rad);

   
    printf("sin(%.0f∞) = %.6f\n", gr, result);

    return 0;
}