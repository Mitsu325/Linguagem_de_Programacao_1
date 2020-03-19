/* Atividade 14 - Quadrado de Sequência */

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
	int num, quadrado;
	
	printf("\n ----------*Programa imprime o quadrado da sequencia de numeros*----------");

	printf("\n\n Digite uma sequencia terminada por zero: \n");
	scanf("%d", &num);
	
	while (num != 0) {
		quadrado = pow(num, 2);
		printf(">> %d\n\n", quadrado);
		scanf("%d", &num);
	}
	
	return 0;
}
