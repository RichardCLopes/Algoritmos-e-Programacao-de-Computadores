#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void converter(float moeda, float escolha);
void main()
{
	system("color F1");
	float quantia;
	int opcao, rep;
	do {
		do {
			printf("Converter de:\n1 - Real para Dolar.\n2 - Dolar para Real.\n");
			scanf("%i", &opcao);
		} while (opcao != 1 && opcao != 2);
		if (opcao == 2)
		{
			printf("\nQuantia em Dolar:  US$");
			scanf("%f", &quantia);
			converter(quantia, opcao);
		}
		if (opcao == 1)
		{
			printf("\nQuantia em Real:  R$");
			scanf("%f", &quantia);
			converter(quantia, opcao);
		}
		printf("Deseja realizar outra conversao? 1-S/2-N  ");
		scanf("%i", &rep);
	} while (rep == 1);
	system("pause");
}

void converter(float moeda, float escolha)
{
	float convertido;
	if (escolha == 1)
	{
		convertido = moeda / 3.26;
		printf("\nQuantia em Dolar:  US$%.2f\n\n", convertido);
	}
	if (escolha == 2)
	{
		convertido = moeda * 3.26;
		printf("\nQuantia em Real:  R$%.2f\n\n", convertido);
	}
}

