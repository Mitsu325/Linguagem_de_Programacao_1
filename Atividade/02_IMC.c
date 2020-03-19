/*Atividade 2.1 - IMC*/

#include <stdio.h>
#include <math.h>

int main() {
	float imc, peso, altura;
	system("cls");
	
	printf("\n\t-------*Programa calcula IMC*-------\n");
	
	printf("\n\tDigite o peso e altura: ");
		scanf("%f%f", &peso, &altura);
	
	imc = peso / pow(altura, 2);
	
	printf("\n\tO seu IMC %c %.2f\n\n", 130, imc);
	
	system ("pause");
	return 0;
}
