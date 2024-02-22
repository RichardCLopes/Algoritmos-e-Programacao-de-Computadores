#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define lim 100

void recebe(int vet[], int *tamanho, int *x1, int *x2, int *x3);

int ocorrencias(int vt[], int inicio, int fim, int num);

void main()
{
	system("color F1");
	int v1[lim], i, casas, n1, n2, n3, resposta;
	recebe(v1, &casas, &n1, &n2, &n3);
	resposta = ocorrencias(v1, n1, n2, n3);
	printf("\nQuantidade de %i no intervalo de %i ate %i  = %i\n\n", n3, n1, n2, resposta);
	system("pause");
}

void recebe(int vet[], int *tamanho, int *x1, int *x2, int* x3)
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
	do {
		printf("\nComeco do intervalo: ");
		scanf_s("%i", &*x1);
		printf("Fim do intervalo: ");
		scanf_s("%i", &*x2);
	} while (*x1<0 || *x1>*x2 || *x2>*tamanho);
	printf("Valor que deseja encontrar: ");
	scanf_s("\n%i", &*x3);
}

int ocorrencias(int vt[], int inicio, int fim, int num)
{
	int acu = 0, i;
	for (i = inicio - 1; i < fim; i++)
	{
		if (num == vt[i])
		{
			acu = acu + 1;
		}
	}
	return acu;
}