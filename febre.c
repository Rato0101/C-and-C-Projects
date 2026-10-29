#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");
	float tempi, tempf;
	printf("diz a temperatura inicial: ");
	scanf_s("%f", &tempi);
	printf("diz a temperatura final: ");
	scanf_s("%f", &tempf);
	if (tempi < 35.5 || tempf < 35.5)
		printf("Anfíbio");
	else if ((tempi > 35.5 && tempi < 37.1) && (tempf > 35.5 && tempf < 37.1))
		printf("Normal");
	else
	{
		if (tempi == tempf)
			printf("Febre manteve");
		else if (tempi < tempf)
			printf("febre subiu");
		else if(tempi > tempf)
			printf("febre baixou");


	}

}