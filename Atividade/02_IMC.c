/*Atividade 2 - IMC */

#include<stdio.h>
#include<stdlib.h>

int main() {
	float imc, peso, altura;
	
	printf("\n\tDigite o peso e a altura: ");
	scanf(" %f, %f", &peso, &altura);
	imc = peso / (altura * altura);
	printf("%f", &imc);
}
