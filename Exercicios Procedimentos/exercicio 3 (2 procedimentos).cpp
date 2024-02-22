#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

float convertido;
void dolar_to_real(float dolar);
void real_to_dolar(float real);
void main()
{
	system("color F1");
	float real, dolar;
	int opcao, rep;
	do {
		do {
			printf("Converter de:\n1 - Real para Dolar.\n2 - Dolar para Real.\n");
			scanf("%i", &opcao);
		} while (opcao != 1 && opcao != 2);
		if (opcao == 2)
		{
			printf("\nQuantia em Dolar:  US$");
			scanf("%f", &dolar);
			dolar_to_real(dolar);
		}
		if (opcao == 1)
		{
			printf("\nQuantia em Real:  R$");
			scanf("%f", &real);
			real_to_dolar(real);
		}
		printf("Deseja realizar outra conversao? 1-S/2-N  ");
		scanf("%i", &rep);
	} while (rep == 1);
	system("pause");
}
void dolar_to_real(float dolar)
{
	convertido = dolar * 3.26;
	printf("\nQuantia em Real:  R$%.2f\n\n", convertido);
}
void real_to_dolar(float real)
{
	convertido = real / 3.26;
	printf("\nQuantia em Dolar:  US$%.2f\n\n", convertido);
}