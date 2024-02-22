#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void verifica_primo(int ver);
void main()
{
	system("color F1");
	int n;
	printf("Digite o numero:");
	scanf("%i", &n);
	verifica_primo(n);

	system("pause");
}
void verifica_primo(int ver)
{
	int i, aux = 0, res;
	if (ver >= 1 && ver <= 3)
	{
		printf("\nO numero eh primo.\n\n");
	}
	else
	{
		for (i = 2; i <= ver / 2; i++)
		{
			res = ver%i;
			if (res == 0)
			{
				aux = aux + 1;
			}
			else
			{
				aux = aux + 0;
			}
		}
		if (aux == 0)
		{
			printf("\nO numero eh primo.\n\n");
		}
		else
		{
			printf("\nO numero nao eh primo.\n\n");
		}
	}
}
