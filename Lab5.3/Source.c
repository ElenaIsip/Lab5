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
    double x, a, b, y;

    printf("Введите значение x: ");
    scanf("%lf", &x);

    a = pow(k + x, 3);
    b = log10(fabs(k * x));
    y = b * b + sqrt(fabs(a));

    printf("\n--- Результаты задания 2 ---\n");
    printf("При k = %.0f, x = %.1f:\n", k, x);
    printf("  a = %.3f\n", a);
    printf("  b = %.6f\n", b);
    printf("  y = %.3f\n", y);

    
    int A = (int)a;
    int B = (int)b;
    int C = (int)y;

    printf("\nЦелые части: A = %d, B = %d, C = %d\n", A, B, C);

  
    int cond_a = (A % 2 == 0) != (B % 2 == 0);
    printf("\nа) только одно из A и B чётное -> условие выполнено (1 - да, 0 - нет): %d\n", cond_a);
    printf("   A %% 2 = %d, B %% 2 = %d\n", A % 2, B % 2);

  
    int cond_b = (A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0);
    printf("\nб) A, B, C кратны 3 -> условие выполнено (1 - да, 0 - нет): %d\n", cond_b);
    printf("   A %% 3 = %d, B %% 3 = %d, C %% 3 = %d\n",
        A % 3, B % 3, C % 3);

    return 0;
}
