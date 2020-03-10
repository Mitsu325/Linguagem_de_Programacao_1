/*Atividade 2.5 - Caracter*/

#include <stdio.h>

int main() {
	char caracter;
	system("cls");
	
	printf("\n\n\t-------*Programa converte o caracter em c%cdigo ASCII*-------\n", 162);
	
	printf("\n\tDigite o caracter: ");
		scanf("%c", &caracter);
	
	printf("\n\tOctal >>> %o", caracter);
	printf("\n\tDecimal >>> %d", caracter);
	printf("\n\tHexadecimal >>> %x\n", caracter);
	
	system("Pause");
	return 0;
}
