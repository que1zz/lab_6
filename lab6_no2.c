#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RUS");
    double x, y;

    printf("Введите координаты x и y: ");
    scanf("%lf %lf", &x, &y);

    if (x * x + y * y <= 36 && !(x * x + y * y < 16) && y >= 2) {
        printf("Точка принадлежит области\n");
    }
    else {
        printf("Точка не принадлежит области\n");
    }

    return 0;
}
