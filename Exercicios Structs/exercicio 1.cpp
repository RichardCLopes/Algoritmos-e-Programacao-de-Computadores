
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct tipoAluno {
	float nota1, nota2, media;
	char nome[30];
	int ra;
};

tipoAluno recebedados();
float calculamedia(tipoAluno aluno);
void imprime(tipoAluno aluno);

int main()
{
	tipoAluno listAlunos[50], aluno;
	int quantidade, i = 0, r, j;
	do {
		listAlunos[i] = recebedados();
		printf("\n1 - Cadastrar / 2 - Cacular media.");
		scanf("%i", &r);
		i++;
	} while (i < 50 && r == 1);
	for (j = 0; j < i; j++)
	{
		listAlunos[j].media = calculamedia(listAlunos[j]);
	}
	printf("\nAluno:\t\tMedia:");
	for (j = 0; j < i; j++)
	{
		imprime(listAlunos[j]);
	}
	printf("\n\n");
	system("pause");
}
tipoAluno recebedados() {
	tipoAluno aluno;

	printf("\nNome: ");
	fflush(stdin);
	scanf("%s", &aluno.nome);
	printf("RA:");
	scanf("%i", &aluno.ra);
	printf("Nota 1:");
	scanf("%f", &aluno.nota1);
	printf("Nota 2:");
	scanf("%f", &aluno.nota2);
	return aluno;
}
float calculamedia(tipoAluno aluno) {


	aluno.media = ((0.4*aluno.nota1) + (0.6*aluno.nota2));
	return aluno.media;
}
void imprime(tipoAluno aluno)
{
	printf("\n%s\t\t%.2f", aluno.nome, aluno.media);
}