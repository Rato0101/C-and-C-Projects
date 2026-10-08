#include <stdio.h>
#include <locale.h>


int main(void)
{
	setlocale(LC_ALL, "");
	int ld, Ld;
	float area;
	float perim;
	printf("Qual é o Lado 1-- ");
	scanf_s("%d", &ld);
	printf("Qual é o Lado 2-- ");
	scanf_s("%d", &Ld);
	area = ld * Ld;
	perim = ld + ld + Ld + Ld;
	printf("A Área é %.2f\n", area);
	printf("O Perímetro é %.1f\n", perim);
	return 0;
	// hello world! :)

}
