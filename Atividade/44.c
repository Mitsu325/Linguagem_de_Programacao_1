/* Atividade 44 */

#include<stdio.h>

typedef struct {
	char nome[21];
	char matricula[9];
	float media;
} aluno;

void LeAlunos(aluno t[], int n) {
	int i;
	
	for (i=0; i<n; i++) {
		printf("\n %do Nome: ", i+1);
		gets(t[i].nome);
		printf("\n Numero de matricula: ");
		gets(t[i].matricula);
		printf("\n Media: ");
		scanf("%f%*c", &t[i].media);
	}
}

void Imprime(aluno t[], int n) {
	int i;
	
	for (i=0; i<n; i++) {
		printf("\n Nome: %s", t[i].nome);
		printf("\n Numero de matricula: %s", t[i].matricula);
		printf("\n Media: %.2f \n", t[i].media);
	}
}

int main() {
	aluno turma[5];
	
	LeAlunos(turma, 5);
	
	Imprime(turma, 5);
	
	return 0;
}
