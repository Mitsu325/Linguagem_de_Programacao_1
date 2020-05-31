/*Atividade 2.1 - IMC*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float imc, peso, altura;
	system("cls");
	
	printf("\n -------*Programa calcula IMC*-------\n");
	
	printf("\n Digite o peso e altura: ");
		scanf("%f%f", &peso, &altura);
	
	imc = peso / pow(altura, 2);
	
	printf("\n O seu IMC é %.2f\n\n", imc);
	
	system ("pause");
	return 0;
}
