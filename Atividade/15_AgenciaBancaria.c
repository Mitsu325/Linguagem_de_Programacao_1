/* Atividade 15 - Agencia Bancaria */

#include <stdio.h>
#include <conio.h>

int main() {
	long int num, conta, soma = 0;
	
	printf("\n ----------*Programa retorna o numero da conta completo*----------");
	
	printf("\n\n Digite o numero da conta: ");
	scanf("%6ld", &num);
	
	conta = num;
	
	while(num != 0) {
		soma += (num % 10);
		num /= 10;
	}
	
	printf("\n Conta: %06ld-%ld", conta, soma % 10);
		
	return 0;
}
