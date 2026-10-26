#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");
	int n;

	do
	{
	printf("diz um número:\n");
	scanf_s("%i", &n);
	if (n != 0)
	{
		if (n % 2 == 0) 
		{
			printf("é um num par\n");
		}
		else
		{
			printf("é um num impar\n");
		}
	}

	} while (n != 0);
	printf("meteste 0 a sair do programa");
	return 0;
	

}