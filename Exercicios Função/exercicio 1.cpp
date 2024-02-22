#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int calcula(int b, int e);

void entrada(int *bas, int *exp);

void main()
{
	system("color F1");
	int base, expoente, resultado, i;
	entrada(&base, &expoente);
	for (i = 0; i <= expoente; i++)
	{
		resultado = calcula(base, i);
		printf("%i^%i = %i\n", base, i, resultado);
	}
	printf("\n\n");
	system("pause");
}

void entrada(int *bas, int *exp)
{
	printf("Digite a base: ");
	scanf("%i", &*bas);
	printf("Digite o expoente: ");
	scanf("%i", &*exp);
}

int calcula(int b, int e)
{
	int res=0, i;
	for (i = 0; i <= e; i++)
	{
		res = res*b;
		if (i == 0)
		{
			res = 1;
		}
	}
	return res;
}