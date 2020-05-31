/*Atividade 2.2 - Temperatura*/

#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	system("cls");
	
	float celsius, fahrenheit;
	
	printf("\n -------*Programa converte Fahrenheit em Celsius*-------\n");
	
	printf ("\n Digite a temperatura em Fahrenheit: ");
		scanf("%f", &fahrenheit);
	
	celsius = (fahrenheit - 32) * 5/9;
	
	printf("\n A temperatura em Celsius é %.2f\n\n", celsius);
	
	system ("pause");
	return 0;
}

