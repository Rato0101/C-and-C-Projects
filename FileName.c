#include<stdio.h>
#include<locale.h>
int main(void)
{
	char temp;
	float p1;
	setlocale(LC_ALL, "");
	printf("Queres C para F ou o contrário (C/F)\n");
	scanf_s("%c", &temp);
	printf("Diz a temp");
	scanf_s("%f", &p1);
	if (temp == 'C' || temp == 'c')
		printf("é %.1f F\n", (p1 * 9 / 5) + 32);
	else
		printf("é %.1f C\n", (p1 - 32)*5/9);
	return 0;
}
