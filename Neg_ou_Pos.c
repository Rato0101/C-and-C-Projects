#include <stdio.h>​
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");
	int p1;
	printf("insere um número ");
	scanf_s("%i", &p1);

	if (p1 == 0)
		printf("Inseriste 0 - Vai sair do programa");
	else if (p1 > 0)
		printf("Inseriste um número positivo: %.1i", p1);
	else
		printf("inseriste um número negativo: %i", p1);

	return 0;
}
