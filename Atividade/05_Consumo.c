/*Atividade 2.5 - Consumo de combust�vel*/

#include <stdio.h>
#include <locale.h>

int main() {
	system("cls");
	
	setlocale(LC_ALL, "Portuguese");
	
	float distancia, litros, consumo;
	
	printf("\n\n -------*Programa calcula o consumo m�dio de combust�vel*-------\n");
	
	printf("\n Digite a dist�ncia em quil�metros: ");
		scanf("%f", &distancia);
	printf("\n Digite o total de combust�vel gasto em litros: ");
		scanf("%f", &litros);
	
	consumo = litros / distancia;
	
	printf("\n O consumo m�dio � %.2f l/km \n", consumo);
	
	system("pause");
	return 0;
}

