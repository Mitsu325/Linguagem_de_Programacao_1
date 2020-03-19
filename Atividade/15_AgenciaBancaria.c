/* Atividade 15 - Agencia Bancaria */

#include <stdio.h>
#include <conio.h>

int main() {
	int num, digito, conta, zero, cont = 0, soma = 0;
	
	printf("\n ----------*Programa retorna o numero da conta completo*----------");
	
	printf("\n\n Digite o numero da conta: ");
	scanf("%d", &num);
	conta = num;
	
	do {
		soma += num % 10;
		num /= 10;
	} while(num != 0);
	
	digito = soma % 10;
	
	zero = conta;
	while (zero != 0) {
		cont++;
		zero /= 10;
	}
	
	switch (cont) {
		case 1: printf("\n 00000%d-%d\n", conta, digito);
			break;
		case 2: printf("\n 0000%d-%d\n", conta, digito);
			break;
		case 3: printf("\n 000%d-%d\n", conta, digito);
			break;
		case 4: printf("\n 00%d-%d\n", conta, digito);
			break;
		case 5: printf("\n 0%d-%d\n", conta, digito);
			break;
		case 6: printf("\n %d-%d\n", conta, digito);
			break;
		default: printf("\n Valor da conta invalido\n");	
	}
	
	return 0;
}
