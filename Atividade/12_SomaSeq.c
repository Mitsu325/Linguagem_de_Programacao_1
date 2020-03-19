/* Atividade 12 - Soma de Sequência */

#include <stdio.h>
#include <conio.h>

int main() {
	int num, soma=0;
	
	printf("\n ----------*Programa soma a sequencia*----------");

	printf("\n\n Digite uma sequencia terminada por zero: \n");
	
	do {
		scanf("%d", &num);
		soma = soma + num;	
	} while (num != 0);
	
	printf("\n Soma da sequencia: %d\n", soma);
	return 0;
}
