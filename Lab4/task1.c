#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int a, b, c, check;
	printf("Введите массу элементов a,b,c через пробел: ");
	scanf("%d %d %d", &a, &b, &c);
	check = (a % 3 == 0 && b % 3 == 0 && c % 3 == 0);
	printf("Реакция запущена (1 - да, 0 - нет): %d",check);
}