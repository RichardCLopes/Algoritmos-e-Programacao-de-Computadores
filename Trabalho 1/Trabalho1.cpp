#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define tam 1000

struct cadastrorenas {
	char name[tam];
	int age, weight;
	float height;
};

cadastrorenas receberenas();
void organizando(cadastrorenas lista[], int *quant);
cadastrorenas aux[tam];
void imprimeresposta(cadastrorenas vet[], int *go, int *cen);

void main()
{
	cadastrorenas listarenas[tam];
	int casos, quantidade, treno, i, j;
	printf("casos: ");
	scanf_s("%i", &casos);
	for (j = 0; j < casos; j++)
	{
		printf("renas/treno: ");
		scanf_s("%i%i", &quantidade, &treno);
		for (i = 0; i < quantidade; i++)
		{
			listarenas[i] = receberenas();
		}
		organizando(listarenas, &quantidade);
		imprimeresposta(listarenas, &treno, &j);
	}

	system("pause");
}

cadastrorenas receberenas() {
	cadastrorenas renas;
	printf("nome:");
	scanf("%s", &renas.name);
	printf("peso/idade/altura:");
	scanf_s("%i%i%f", &renas.weight, &renas.age, &renas.height);
	return renas;
}

void organizando(cadastrorenas lista[], int *quant)
{
	int i, j, res;
	for (i = 0; i < *quant-1; i++)
	{
		for (j = 0; j < *quant-1-i; j++)
		{
			if (lista[j].weight < lista[j+1].weight)
			{
				aux[i] = lista[j];
				lista[j] = lista[j+1];
				lista[j+1] = aux[i];
			}
			if (lista[j].weight == lista[j + 1].weight)
			{
				if (lista[j].age > lista[j + 1].age)
				{
					aux[i] = lista[j];
					lista[j] = lista[j + 1];
					lista[j + 1] = aux[i];
				}
				if (lista[j].age == lista[j + 1].age)
				{
					if (lista[j].height >lista[j+1].height)
					{
						aux[i] = lista[j];
						lista[j] = lista[j + 1];
						lista[j + 1] = aux[i];
					}
					if (lista[j].height == lista[j + 1].height)
					{
						res = strcmp(lista[j + 1].name, lista[j].name);
						if (res < 0)
						{
							aux[i] = lista[j];
							lista[j] = lista[j + 1];
							lista[j + 1] = aux[i];
						}
					}
				}
			}
		}
	}
}

void imprimeresposta(cadastrorenas vet[], int *go, int *cen)
{
	int i;
	printf("CENARIO {%i}\n", *cen+1);
	for (i = 0; i< *go; i++)
	{
		printf("%i - %s\n", i+1, vet[i].name);
	}
}

