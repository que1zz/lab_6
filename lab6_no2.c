#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RUS");
    double x, y;

    printf("Введите координаты x и y: ");
    if (scanf("%lf %lf", &x, &y) != 2) {
        printf("Ошибка: нужно ввести два числа\n");
        return 1;
    }

    if (x * x + (y + 2) * (y + 2) <= 49 && !(x * x + (y + 5) * (y + 5) < 64) && y >= 0) {
        printf("Точка принадлежит области\n");
    }
    else {
        printf("Точка не принадлежит области\n");
    }

    return 0;
}