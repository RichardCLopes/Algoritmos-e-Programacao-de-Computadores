#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void recebe(int vet[], int *tam);
int palindromo(int vet[], int *tam, int i);

void main()
{
	int v[1000], t, resposta;
	recebe(v, &t);
	resposta = palindromo(v, &t, 0);
	if (resposta == t / 2)
	{
		printf("\nEste vetor eh palindromo.");
	}
	else
	{
		printf("\nEste vetor nao eh palindromo");
	}
	printf("\n\n");
	system("pause");
}

void recebe(int vet[], int *tam)
{
	int i;
	printf("Quantos elementos deseja digitar? ");
	scanf_s("%i", &*tam);
	printf("\nDigite os elementos:\n");
	for (i = 0; i < *tam; i++)
	{
		scanf("%i", &vet[i]);
	}
}

int palindromo(int vet[], int *tam, int i)
{
	int med;
	med = *tam / 2;
	if (i == med)
	{
		return i;
	}
	if (i < med)
	{
		if (vet[i] == vet[*tam - i-1])
		{
			return palindromo(vet, &*tam, i + 1);
		}
		else
		{
			return i;
		}
	}
}
