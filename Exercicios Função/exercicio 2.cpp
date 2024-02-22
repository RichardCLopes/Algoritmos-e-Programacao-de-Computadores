#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int calcula_modulo(int n);
void recebe(int *n);
void main()
{
	system("color F1");
	int number, modulo;
	recebe(&number);
	modulo = calcula_modulo(number);
	printf("\nModulo: %i", modulo);
	printf("\n\n");
	system("pause");
}

void recebe(int *n)
{
	printf("Digite o numero: ");
	scanf("%i", &*n);
}
int calcula_modulo(int n)
{
	int res;
	if (n < 0)
	{
		res = n*(-1);
	}
	if (n >= 0)
	{
		res = n;
	}
	return res;
}

