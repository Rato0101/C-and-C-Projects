#include <stdio.h>​
int main(void)
{
	int n, soma = 0, i = 0;
	float media;
	do
	{
		printf("diz o numero ");
		scanf_s("%i", &n);
		soma = n + soma;
		i = i + 1;
	} while (soma < 1000);
	media = soma / i;
	printf("a media e %.1f e escreveste %i numeros", media, i);
}