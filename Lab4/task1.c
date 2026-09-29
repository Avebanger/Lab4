#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int a, b, c;
	printf("Введите массу элементов a,b,c через пробел: ");
	scanf("%d %d %d", &a, &b, &c);
	if (a % 3 == 0 && b % 3 == 0 && c % 3 == 0)
	{
		printf("Реакция успешно запущена.");
	}
	else
	{
		printf("Реакция не была запущена");
	}

}