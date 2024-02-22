#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define lim 100

void recebe(int vet[], int *tamanho);
void inverte(int vt[], int tama);

void main()
{
	system("color F1");
	int v1[lim], i, casas;
	recebe(v1, &casas);
	inverte(v1, casas);
	printf("\nVetor invertido:\n");
	for (i = 0; i < casas; i++)
	{
		printf("%i / ", v1[i]);
	}
	printf("\n\n");
	system("pause");
}

void recebe(int vet[], int *tamanho)
{
	int i;
	printf("Qual o tamanho do vetor: ");
	scanf_s("%i", &*tamanho);
	printf("\n");
	for (i = 0; i < *tamanho; i++)
	{
		printf("Digite o elemento %i: ", i + 1);
		scanf_s("%i", &vet[i]);
	}
}

void inverte(int vt[], int tama)
{
	int k, i;
	for (i = 0; i < tama/2; i++)
	{
		k = vt[i];
		vt[i] = vt[tama - i - 1];
		vt[tama - i - 1] = k;
	}
}
