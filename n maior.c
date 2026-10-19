#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");
	float p1, p2, p3;
	printf("Numero 1");
	scanf_s("%f", &p1);
	printf("Numero 2");
	scanf_s("%f", &p2);
	printf("Numero 3");
	scanf_s("%f", &p3);
	if (p1 > p2 && p1 > p3)
	{
		printf("n1 é maior");
	}
	else if (p2 > p3)
	{
		printf("n2 é maior");
	}
	else
	{
		printf("n3 é maior");
	}
	return 0;

}
