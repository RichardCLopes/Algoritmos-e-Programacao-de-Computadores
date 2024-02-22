#define _CRT_SECURE_NO_WANINGS
#include<stdio.h>
#include<stdlib.h>
#define tam 10

void soma_vet(int ve1[], int ve2[], int veres[]);
void sub_vet(int vetor1[], int vetor2[], int vetores[]);
void vezes_vet(int vt1[], int vt2[], int vtres[]);
void recebe_vet(int v1[], int v2[]);
void main()
{
	system("color F1");
	int vet1[tam], vet2[tam], ressoma[tam], resvezes[tam], ressub[tam], i;
	recebe_vet(vet1, vet2);
	soma_vet(vet1, vet2, ressoma);
	sub_vet(vet1, vet2, ressub);
	vezes_vet(vet1, vet2, resvezes);
	printf("\n\nResultado do vetor soma:\n");
	for (i = 0; i < tam ; i++)
	{
		printf("%i / ", ressoma[i]);
	}
	printf("\n\nResultado do vetor subtracao:\n");
	for (i = 0; i < tam ; i++)
	{
		printf("%i / ", ressub[i]);
	}
	printf("\b\b\n\nResultado do vetor multiplicacao:\n");
	for (i = 0; i < tam; i++)
	{
		printf("%i / ", resvezes[i]);
	}
	printf("\b\b\n\n\n");
	system("pause");
}

void recebe_vet(int v1[], int v2[])
{
	int i;
	printf("Vetor 1:\n");
	for (i = 0; i < tam; i++)
	{
		printf("Digite o elemento %i: ", i+1);
		scanf_s("%i", &v1[i]);
	}
	printf("\nVetor 2:\n");
	for (i = 0; i < tam; i++)
	{
		printf("Digite o elemento %i: ", i+1);
		scanf_s("%i", &v2[i]);
	}
}

void soma_vet(int ve1[], int ve2[], int veres[])
{
	int i;
	for (i = 0; i < tam; i++)
	{
		veres[i] = ve1[i] + ve2[i];
	}
}

void sub_vet(int vetor1[], int vetor2[], int vetores[])
{
	int i;
	for (i = 0; i < tam; i++)
	{
		vetores[i] = vetor1[i] - vetor2[i];
	}
}

void vezes_vet(int vt1[], int vt2[], int vtres[])
{
	int i;
	for (i = 0; i < tam; i++)
	{
		vtres[i] = vt1[i] * vt2[i];
	}
}