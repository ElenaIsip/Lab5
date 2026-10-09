#define _USE_MATH_DEFINES
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void)
{
    setlocale(LC_ALL, "RUS");

    double x, y, F;

    // Первый контрольный пример
    x = 1.9;
    y = -1.0;
    F = 2.33 * log(sqrt(1.0 + cos(x) * cos(x)))
        / (exp(y) + sin(x) * sin(x));
    printf("F(%.2f, %.2f) = %.6f\n", x, y, F);

    // Второй контрольный пример
    x = 1.6;
    y = -2.3e-6;
    F = 2.33 * log(sqrt(1.0 + cos(x) * cos(x)))
        / (exp(y) + sin(x) * sin(x));
    printf("F(%.2f, %.1e) = %.6e\n", x, y, F);

    return 0;
}