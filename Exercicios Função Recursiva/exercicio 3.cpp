#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void recebe(int *n1, int *n2);
int resolvemdc(int n1, int n2, int mdc);

void main()
{
	int a, b, r, m;
	recebe(&a, &b);
	m = b;
	r = resolvemdc(a, b, m);
	printf("\nMDC = %i\n\n", r);
	system("pause");
}

void recebe(int *n1, int *n2)
{
	printf("Numero 1: ");
	scanf_s("%i", &*n1);
	printf("Numero 2: ");
	scanf_s("%i", &*n2);
}

int resolvemdc(int n1, int n2, int mdc)
{
	if (n1%mdc == 0 && n2%mdc == 0)
	{
		return mdc;
	}
	else
	{
		return resolvemdc(n1, n2, mdc - 1);
	}
}