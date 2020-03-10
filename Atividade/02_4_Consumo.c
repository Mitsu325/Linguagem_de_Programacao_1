/*Atividade 2.5 - Consumo de combustível*/

#include <stdio.h>

int main() {
	float distancia, litros, consumo;
	system("cls");
	
	printf("\n\n\t-------*Programa calcula o consumo m%cdio de combust%cvel*-------\n", 130, 161);
	
	printf("\n\tDigite a dist%cncia em quil%cmetros: ", 131, 147);
		scanf("%f", &distancia);
	printf("\n\tDigite o total de combust%cvel gasto em litros: ", 161);
		scanf("%f", &litros);
	
	consumo = distancia / litros;
	
	printf("\n\tO consumo m%cdio %c %.2f\n", 130, 130, consumo);
	
	system("pause");
	return 0;
}

