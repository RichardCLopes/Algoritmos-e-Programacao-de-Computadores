#define CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define max 100

void recebe(int v[], int *t);
void converte(int vet[], int *ta, char vc[][max]);

void main()
{
	system("color F1");
	int vt[max], tamanho, i, j;
	char vetchar[max][max];
	recebe(vt, &tamanho);
	converte(vt, &tamanho, vetchar);
	printf("\nDigitos em codigo Morse: \n");
	for (i = 0; i < tamanho; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%c", vetchar[j][i]);
		}
		printf(" ");
	}
	printf("\n\n");
	system("pause");
}

void recebe(int v[], int *t)
{
	int i;
	printf("Quantos digitos pretende inserir? ");
	scanf_s("%i", &*t);
	for (i = 0; i < *t; i++)
	{
		printf("Digite o %i%c digito: ", i+1, 167);
		scanf_s("%i", &v[i]);
	}
}

void converte(int vet[], int *ta, char vc[][max])
{
	int i;
	for (i = 0; i < *ta; i++)
	{
		switch (vet[i])
		{
		case 0: vc[0][i] = {'-'};
				vc[1][i] = { '-' };
				vc[2][i] = { '-' };
				vc[3][i] = { '-' };
				vc[4][i] = { '-' };
				vc[5][i] = { '\0' };
			break;
		case 1: vc[0][i] = { '.' };
				vc[1][i] = { '-' };
				vc[2][i] = { '-' };
				vc[3][i] = { '-' };
				vc[4][i] = { '-' };
				vc[5][i] = { '\0' };
			
			break;
		case 2:vc[0][i] = { '.' };
			   vc[1][i] = { '.' };
			   vc[2][i] = { '-' };
			   vc[3][i] = { '-' };
			   vc[4][i] = { '-' };
			   vc[5][i] = { '\0' };
			break;
		case 3:vc[0][i] = { '.' };
			   vc[1][i] = { '.' };
			   vc[2][i] = { '.' };
			   vc[3][i] = { '-' };
			   vc[4][i] = { '-' };
			   vc[5][i] = { '\0' };
			break;
		case 4:vc[0][i] = { '.' };
			   vc[1][i] = { '.' };
			   vc[2][i] = { '.' };
			   vc[3][i] = { '.' };
			   vc[4][i] = { '-' };
			   vc[5][i] = { '\0' };
			break;
		case 5:vc[0][i] = { '.' };
			   vc[1][i] = { '.' };
			   vc[2][i] = { '.' };
			   vc[3][i] = { '.' };
			   vc[4][i] = { '.' };
			   vc[5][i] = { '\0' };
			break;
		case 6:vc[0][i] = { '-' };
			   vc[1][i] = { '.' };
			   vc[2][i] = { '.' };
			   vc[3][i] = { '.' };
			   vc[4][i] = { '.' };
			   vc[5][i] = { '\0' };
			break;
		case 7:vc[0][i] = { '-' };
			   vc[1][i] = { '-' };
			   vc[2][i] = { '.' };
			   vc[3][i] = { '.' };
			   vc[4][i] = { '.' };
			   vc[5][i] = { '\0' };
			break;
		case 8:vc[0][i] = { '-' };
			   vc[1][i] = { '-' };
			   vc[2][i] = { '-' };
			   vc[3][i] = { '.' };
			   vc[4][i] = { '.' };
			   vc[5][i] = { '\0' };
			break;
		case 9:vc[0][i] = { '-' };
			   vc[1][i] = { '-' };
			   vc[2][i] = { '-' };
			   vc[3][i] = { '-' };
			   vc[4][i] = { '.' };
			   vc[5][i] = { '\0' };
			break;
		}
	}
}