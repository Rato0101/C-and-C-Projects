#include <stdio.h>​
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");
	int p1, i;
	printf("insere o num a multiplicar: ");
	scanf_s("%d", &p1);
	for (i = 1; i <= 10; i++)
	printf("%d X %i = %d\n", i, p1, p1*i);
	return 0;
}