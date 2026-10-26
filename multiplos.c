#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");
	int p1;
	do
	{
		printf("um num pls: \n");
		scanf_s("%i", &p1);



		if (p1 != 0)

				{

					if (p1 % 3 == 0)
					printf("Este num é multiplo de 3\n");

				}
				{

					if (p1 % 5 == 0)
					printf("Este num é multiplo de 5\n");

				}
	}
	while (p1 != 0);
	{
	printf("meteste 0 - morri");
	 }
}