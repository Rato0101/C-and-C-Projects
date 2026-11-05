#include <stdio.h>
#include <locale.h>
#include <time.h>
int main(void)
{
	srand(time(NULL));
	setlocale(LC_ALL, "");
	int num = rand() % 1000 + 1;
	int p1,i=0;
	do {
		printf("advinha o número\n");
		scanf_s("%d", &p1);
		if (num < p1)
			printf("abaixo\n");
		if (num > p1)
			printf("acima\n");
		i = i + 1;
	} while (num != p1);
	printf("Venceste !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
	printf("Numero de tentatevas: %d", i);
	return 0;
}

