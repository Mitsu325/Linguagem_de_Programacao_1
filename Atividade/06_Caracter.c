/*Atividade 2.5 - Caracter*/

#include <stdio.h>
#include <locale.h>

int main() {
	system("cls");
	
	setlocale(LC_ALL, "Portuguese");
	
	char caracter;
	
	printf("\n\n -------*Programa converte o caracter em código ASCII*-------\n");
	
	printf("\n Digite o caracter: ");
	scanf("%c", &caracter);
	
	printf("\n Octal >>> %o", caracter);
	printf("\n Decimal >>> %d", caracter);
	printf("\n Hexadecimal >>> %x\n", caracter);
	
	system("Pause");
	return 0;
}
