/* Reajuste Salarial */

#include <stdio.h>

int main() {
	float salario;
	
	printf("\n\n Digite o salario atual: ");
	scanf("%f", &salario);
	
	printf("\n Salario com reajuste: R$%.2f", (salario * 1.05));
	
	return 0;
}
