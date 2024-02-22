#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void recebe(int vet[], int *tam);
void mergesort(int v[], int inicio, int fim);
void merge(int v[], int ini, int mei, int fi);


void main()
{
	int v[1000], t, in = 0, f, i, maior;
	recebe(v, &t);
	f = t - 1;
	mergesort(v, in, f);
	maior = v[0];
	printf("\nMaior numero do vetor eh: %i\n\n", maior);
	system("pause");
}

void recebe(int vet[], int *tam)
{
	int i;
	printf("Quantos numeros deseja digitar? ");
	scanf_s("%i", &*tam);
	printf("\nDigite os  numeros: \n");
	for (i = 0; i < *tam; i++)
	{
		scanf_s("%i", &vet[i]);
	}
}

void mergesort(int v[], int inicio, int fim)
{
	int meio = (inicio + fim) / 2;
	if (inicio < fim) {
		mergesort(v, inicio, meio);
		mergesort(v, meio + 1, fim);
		merge(v, inicio, meio, fim);

	}
}

void merge(int vt[], int ini, int mei, int fi)
{
	int aux[100];
	int i = ini, j = mei + 1, k = 0;
	while (i <= mei && j <= fi)
	{
		if (vt[i] >= vt[j])
		{
			aux[k] = vt[i];
			i++;
		}
		else
		{
			aux[k] = vt[j];
			j++;
		}
		k++;
	}
	for (i = i; i <= mei; i++)
	{
		aux[k] = vt[i];
		k++;
	}
	for (j = j; j <= fi; j++)
	{
		aux[k] = vt[j];
		k++;
	}
	k = 0;
	for (i = ini; i <= fi; i++)
	{
		vt[i] = aux[k];
		k++;
	}
}

