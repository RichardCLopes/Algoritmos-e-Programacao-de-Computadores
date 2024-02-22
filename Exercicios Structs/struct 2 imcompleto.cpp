#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct tipoAluno {
	float nota1, nota2, media;
	char nome[30];
	int ra;
};

tipoAluno recebedados();
float mediageral(tipoAluno lisaluno[], int t, int inc);
float calculamedia(tipoAluno aluno);
void imprimemedia(tipoAluno aluno[], int t);
int imprimemaiorgeral(tipoAluno aluno[], int med, int t);

void main()
{
	tipoAluno listAlunos[50], aluno;
	int quantidade, i = 0, r, j, escolha, upgeral;
	float mediag;
	do {
		listAlunos[i] = recebedados();
		printf("\n1 - Cadastrar / 2 - Sair do cadastro de alunos.");
		scanf("%i", &r);
		i++;
	} while (i < 50 && r == 1);

	//calcula media de cada aluno
	for (j = 0; j < i; j++)
	{
		listAlunos[j].media = calculamedia(listAlunos[j]);
	}

	//calcula media geral da sala
	mediag = mediageral(listAlunos, i, 0);

	//escolha do  que o usuario quer saber, switch com prints dos resultados.
	do {
		printf("\n\n--------------------------------------");
		printf("\n1 - Medias dos alunos.\n2 - Media geral da sala.\n3 - Alunos acima da media geral.\n4 - Lista de reprovados.\n5 - Lista de Aprovados.\n6 - Maior e menor media.\n7 - Sair.\nOpcao: ");
		scanf_s("%i", &escolha);
		printf("--------------------------------------");
		switch (escolha)
		{
		case 1:
			printf("\nAlunos:\t\tMedias:");
			imprimemedia(listAlunos, i);
			break;
		case 2:
			printf("\nMedia geral da sala :  %.2f", mediag);
			break;
		case 3:
			upgeral = imprimemaiorgeral(listAlunos, mediag, i);
			printf("\nAlunos acima da media geral: %i\n", upgeral);
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		default:
			printf("\nOpcao invalida.\n");
			break;
		}
	} while (escolha != 7);
	printf("\n\n");
	system("pause");
}
tipoAluno recebedados() {
	tipoAluno aluno;

	printf("\nNome: ");
	fflush(stdin);
	scanf("%s", &aluno.nome);
	printf("RA: ");
	scanf_s("%i", &aluno.ra);
	printf("Nota 1: ");
	scanf_s("%f", &aluno.nota1);
	printf("Nota 2: ");
	scanf_s("%f", &aluno.nota2);
	return aluno;
}

float calculamedia(tipoAluno aluno) {
	aluno.media = ((0.4*aluno.nota1) + (0.6*aluno.nota2));
	return aluno.media;
}

void imprimemedia(tipoAluno aluno[], int t)
{
	int i;
	for (i = 0; i < t; i++)
	{
		printf("\n%s\t\t%.2f", aluno[i].nome, aluno[i].media);
	}
}

float mediageral(tipoAluno lisaluno[], int t, int inc)
{
	float media = 0;
	if (inc == t)
	{
		return media;
	}
	if (inc < t && inc != 0)
	{
		return media + lisaluno[inc].media + mediageral(lisaluno, t, inc + 1);
	}
	if (inc == 0)
	{
		return (media + lisaluno[inc].media + mediageral(lisaluno, t, inc + 1)) / t;
	}
}

int imprimemaiorgeral(tipoAluno aluno[], int med, int t)
{
	int rep = 0, i;
	for (i = 0; i < t; i++)
	{
		if (aluno[i].media >= med)
		{
			rep = rep + 1;
		}
	}
	return rep;
}