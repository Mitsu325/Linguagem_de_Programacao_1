/* Atividade 01 */

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main () {
	
	setLocale(LC_ALL, "Portuguese_Brazil");
	
	printf("\n\t------------------------------------------------------------\n");
	printf("\t\t\t\t** Curriulo **");
	printf("\n\t------------------------------------------------------------\n");
	printf("\n\tNome: Patricia Mitsuko Mashiba");
	printf("\n\tIdade: 22 anos");
	printf("\n\tFormacao: Estudante de Analise e Desenvolvimento de Sistemas");
	printf("\n\tProfissao: Tecnologa");
	printf("\n\tTempo de experiencia: 7 meses\n\n");
	
	system ("pause");
	return 0;
}
