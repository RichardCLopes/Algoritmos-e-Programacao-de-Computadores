#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float calcula_umaraiz(float ma, float mb);
void calcula_duasraiz(float sa, float sb, float sdelta, float *xi, float *xii);
void recebe(float *a, float *b, float *c);
void main()
{
	float na, nb, nc, delta, indelta, r1, x1, x2;
	double d;
	recebe(&na, &nb, &nc);
	indelta = (nb*nb)-4*na*nc;
	if (indelta < 0)
	{
		printf("\nNao existe raizes reais.\n\n");
	}
	if (indelta == 0)
	{
		r1 = calcula_umaraiz(na, nb);
		printf("\nX = %.2f\n\n", r1);
	}
	if(indelta>0)
	{
		d = sqrt(indelta);
		delta = (float)d;
		calcula_duasraiz(na, nb, delta, &x1, &x2);
		printf("\nX1 = %.2f\nX2 = %.2f\n\n", x1, x2);
	}
	
	system("pause");
}

void recebe(float *a, float *b, float *c)
{
	printf("Digite os valores de A/B/C da equacao de segundo grau: ax%c + bx + c\nA = ", 253);
	scanf("%f", &*a);
	printf("B = ");
	scanf("%f", &*b);
	printf("C = ");
	scanf("%f", &*c);
}
void calcula_duasraiz(float sa, float sb, float sdelta, float *xi, float *xii)
{
	*xi = ((-sb) - sdelta) / (2 * sa);
	*xii = ((-sb) + sdelta) / (2 * sa);
}
float calcula_umaraiz(float ma, float mb)
{
	float x;
	x = (-mb) / (2 * ma);
	return x;
}