#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void recebenumero(int *n1, int *n2);
int multiplica(int num1, int num2);

void main()
{
	int numero1, numero2, resposta;
	recebenumero(&numero1, &numero2);
	resposta = multiplica(numero1, numero2);
	printf("\n%i x %i = %i\n\n", numero1, numero2, resposta);
	system("pause");
}

void recebenumero(int *n1, int *n2)
{
	printf("Numero 1: ");
	scanf_s("%i", &*n1);
	printf("Numero 2: ");
	scanf_s("%i", &*n2);
}

int multiplica(int num1, int num2)
{
	if (num2 == 1)
	{
		return num1;
	}
	else
	{
		return num1+multiplica(num1, num2 - 1);
	}
}