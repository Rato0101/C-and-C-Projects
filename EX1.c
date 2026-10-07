#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");
	int p1, p2, p3, p4;
	float media;
	printf("Diz o Primeiro Número ");
	scanf_s("%d", &p1);
	printf("Diz o segundo Número ");
	scanf_s("%d", &p2);
	printf("Diz o terceiro Número ");
	scanf_s("%d", &p3);
	printf("Diz o quarto Número ");
	scanf_s("%d", &p4);
	media = (p1 + p2 + p3 + p4) / 4.0;
	printf("A média da nota é: %.2f", media);
	return 0;

}
