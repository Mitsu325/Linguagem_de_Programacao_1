/*Atividade 2.2 - Temperatura*/

#include<stdio.h>

int main() {
	float celsius, fahrenheit;
	system("cls");
	
	printf("\n\t-------*Programa converte Fahrenheit em Celsius*-------\n");
	
	printf ("\n\tDigite a temperatura em Fahrenheit: ");
		scanf("%f", &fahrenheit);
	
	celsius = (fahrenheit - 32.0) * 5.0/9.0;
	
	printf("\n\tA temperatura em Celsius %c %.2f\n\n", 130, celsius);
	
	system ("pause");
	return 0;
}

