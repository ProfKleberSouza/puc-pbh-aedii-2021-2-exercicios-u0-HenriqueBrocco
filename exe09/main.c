#include <stdio.h>

#define max 10

typedef struct Aluno
{
	char nome[25];
	int nota;
}Aluno;

int main()
{
	int n;
	float media;
	Aluno alunos[max];
	scanf("%i", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%s", &alunos[i].nome);
		scanf("%i", &alunos[i].nota);
		media = alunos[i].nota + media;
	}
	printf("\nNota Media = %f.1\n%s = %i\n%s = %i\n%s = %i\n", media / max, alunos[0].nome, alunos[0].nota, alunos[1].nome, alunos[1].nota, alunos[2].nome, alunos[2].nota);
	return 0;
}
