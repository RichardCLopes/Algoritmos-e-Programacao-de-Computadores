#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int verifica_perfeito(int n);
void recebe(int *n);
void main()
{
	system("color F1");
	int number, resposta;
	recebe(&number);
	resposta = verifica_perfeito(number);
	if(resposta==1)
	{ 
		printf("\nSeu numero eh perfeito\n\n");
	}
	if (resposta == 0)
	{
		printf("\nSeu numero nao eh perfeito\n\n");
	}
	system("pause");
}

void recebe(int *n)
{
	printf("Digite o numero: ");
	scanf("%i", &*n);
}
int verifica_perfeito(int n)
{
	int numero, i, r = 0, acu=0;
	numero = n;
	for (i = 1; i < numero; i++)
	{
		r = numero % i;
		if (r == 0)
		{
			acu = acu + i;
			printf("%i + ", i);
		}
	}
	printf("\b\b = %i", acu);
	if (n == acu)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}