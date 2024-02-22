#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int recebenumero();
int calculafatorial(int num);

void main()
{ 
	int n, f;
	n = recebenumero();
	f = calculafatorial(n);
	printf("\nO fatorial de %i eh %i.\n\n", n, f);
	system("pause"); 
}

int recebenumero()
{
	int numero;
	printf("Digite o numero: ");
	scanf_s("%i", &numero);
	return numero;
}

int calculafatorial(int num)
{
	if (num == 1)
	{
		return num;
	}
	else
	{
		return num*calculafatorial(num - 1);
	}
}

