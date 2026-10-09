#define _USE_MATH_DEFINES
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void)
{
    setlocale(LC_ALL, "RUS");

    double x, y;

    printf("Введите значение x: ");
    scanf("%lf", &x);

    printf("Введите значение y: ");
    scanf("%lf", &y);

    // Разложение на простые операции
    double Res1 = 0.5 * y;
    double Res2 = pow(x, Res1);
    double Res3 = sin(Res2);
    double Res4 = y + 8e-4;
    double Res5 = pow(Res4, 1.0 / 5.0);

    double Result = Res3 + Res5;

    printf("ответ: %.3f\n", Result);

    // Альтернативная запись одной строкой
    printf("ответ : %.3f\n",
        sin(pow(x, 0.5 * y)) + pow(y + 8e-4, 1.0 / 5.0));

    return 0;
}