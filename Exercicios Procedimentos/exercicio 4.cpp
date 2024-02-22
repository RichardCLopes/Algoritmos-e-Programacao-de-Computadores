#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int x, y;
void troca_int(float y);
void main()
{
	system("color F1");
	printf("Digite o valor de X:  ");
	scanf("%i", &x);
	printf("Digite o valor de Y:  ");
	scanf("%i", &y);
	troca_int(y);
	y = x;
	printf("Y = %i\n\n", y);
	system("pause");
}

void troca_int(float y)
{
	int x;
	x = y;
	printf("X = %i\n", x);
}