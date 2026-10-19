#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");
	int p1, p2, p3;
	int valor;
	printf("quais são os km iniciais?");
	scanf_s("%d", &p1);
	printf("quais são os km finais?");
	scanf_s("%d", &p2);
	printf("quais são os litros?");
	scanf_s("%d", &p3);
	valor = p3 * 100 / (p1 - p2);
	if (valor < 5)
		printf("és rico");
	else
		printf("boa escolha de toyota");

}
