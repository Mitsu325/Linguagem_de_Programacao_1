/*Atividade 2 - IMC */

#include<stdio.h>
#include<stdlib.h>

int main() {
	float imc, peso, altura;
	
	printf("\n\t-------*Programa calcula IMC*-------\n");
	
	printf("\n\tDigite o seu peso em kg: ");
		scanf("%f", &peso);
	printf("\n\tDigite a sua altura em metros: ");
		scanf("%f", &altura);
	
	imc = peso / (altura * altura);
	
	printf("\n\tO seu IMC %c %.2f\n\n", 130, imc);
	
	system ("pause");
	return 0;
}
