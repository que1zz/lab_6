#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "RUS");

	int x;
	printf("Введите год:\n");
	scanf("%d", &x);
	if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0){
		printf("В этом году 366 дней\n");
	}
	else {
		printf("В этом году 365 дней\n");
	}
	return 0;
}
