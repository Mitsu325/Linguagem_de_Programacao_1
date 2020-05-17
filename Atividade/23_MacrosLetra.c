/* Atividade 23 */

#include<stdio.h>
#include"macrosLetra.h"

int main() {
	printf("\n %d", e_minuscula('a'));
	printf("\n %d", e_maiuscula('A'));
	
	int letra = 'a';
	
	if (e_minuscula(letra))
		printf("\n %c", maiuscula(letra));
		
	if (e_maiuscula(letra))
		printf("\n %c", minuscula(letra));
	
	return 0;
}
