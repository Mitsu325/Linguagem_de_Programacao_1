/* Atividade 43 */

#include<stdio.h>

typedef struct{
	int dia;
	int mes;
	int ano;
} DATA;

typedef struct {
	char nome[31];
	char fone[21];
	DATA nasc;
} PESSOA;

int main() {
	PESSOA amigo;
	strcpy(amigo.nome, "Erika");	
	strcpy(amigo.fone, "(11)1234-5678");
	amigo.nasc.dia = 20;
	amigo.nasc.mes = 04;
	amigo.nasc.ano = 1990;
	
	printf("\n Nome: %s", amigo.nome);
	printf("\n Fone: %s", amigo.fone);
	printf("\n Data de nascimento: %d/%d/%d \n", amigo.nasc.dia, amigo.nasc.mes, amigo.nasc.ano);
	
	return 0;
}
