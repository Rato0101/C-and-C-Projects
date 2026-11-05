#include <stdio.h>
#include <time.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");
	char A;
	float p1, p2, res;
	printf("o que queres fazer? (A-adicionar , S-subtrair, M-multiplicar, D-dividir): \n");
	scanf_s("%c", &A);
	printf("diz os números: ");
	scanf_s("%f %f", &p1, &p2);
	switch (A) {
		case 'A':
		case 'a':
			printf("o resultado da soma é %.2f", res, res = p1 + p2);
			break;
		case 'S':
		case 's':
			printf("o resultado da subtração é %.2f", res, res = p1 - p2);
			break;
		case 'M':
		case 'm':
			printf("o resultado da multiplicação é %.2f", res, res = p1 * p2);
			break;
		case 'D':
		case 'd':
			printf("o resultado da divisão é %.2f", res, res = p1 / p2);
			break;
	
	}
return 0;

	

}