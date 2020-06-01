/* Número de erros */

#include<stdio.h>

int main() {
	int e;
	
	printf("\n\n Digite o numero de erros: ");
	scanf("%d", &e);
	
	printf("\n %d %s", e, e == 1 ? "erro detectado" : "erros detectados");
	
	return 0;
}
