#include <stdio.h>​
#include <locale.h>

int main(void)
{
	int n, soma = 0, i = 0, j = 0;
	printf("quantos numeros queres somar: ");
	scanf_s("%i", &j);
	do
	{

		printf("diz o numero para somar");
		scanf_s("%i", &n);
		soma = n + soma;
		i = i + 1;
	} while (soma < j);
	soma = soma + n;
	printf("escreveste %i numeros", n);
}
