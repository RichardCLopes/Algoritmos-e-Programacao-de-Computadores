#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define tam 1000

void recebestr(char str1[], char str2[]);
void alterastr(char st1[], char st2[]);
void imprime(char s[]);

void main()
{
	char fra1[tam], fra2[tam];
	recebestr(fra1, fra2);
	alterastr(fra1, fra2);
	imprime(fra1);
	system("pause");
}

void recebestr(char str1[], char str2[])
{
	printf("Digite a string 1:\n");
	fflush(stdin);
	gets(str1);
	printf("\nDigite a string 2:\n");
	fflush(stdin);
	gets(str2);
}

void alterastr(char st1[], char st2[])
{
	int t1, t2, i, j = 0, w;
	t1 = strlen(st1);
	t2 = strlen(st2);
	for (i = 0; i < t1; i++)
	{
		if (st1[i] == st2[j])
		{
			j = j + 1;
			if (j == t2)
			{
				for (w = i; w > i - j; w--)
				{
					st1[w] = '*';
				}
				j = 0;
			}
		}
	}
}

void imprime(char s[])
{
	printf("\n%s\n\n", s);
}