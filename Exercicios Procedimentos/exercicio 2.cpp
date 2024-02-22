#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void cal_hipotenusa(float cat1, float cat2);

void main()
{
	system("color F1");
	float cateto1, cateto2;
	int rep;
	do {
		printf("Digite o cateto A: ");
		scanf("%f", &cateto1);
		printf("Digite o cateto B: ");
		scanf("%f", &cateto2);
		cal_hipotenusa(cateto1, cateto2);
		printf("\nDeseja realizar outro calculo de hipotenusa ? 1-S/2-N - ");
		scanf("%i", &rep);
	} while (rep == 1);
	system("pause");
}

void cal_hipotenusa(float cat1, float cat2)
{
	float hipotenusa;
	hipotenusa = sqrt((cat1*cat1) + (cat2*cat2));
	printf("\nHipotenusa = %.2f\n\n", hipotenusa);
}