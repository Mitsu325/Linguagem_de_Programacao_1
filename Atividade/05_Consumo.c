/*Atividade 2.5 - Consumo de combustível*/

#include <stdio.h>
#include <locale.h>

int main() {
	system("cls");
	
	setlocale(LC_ALL, "Portuguese");
	
	float distancia, litros, consumo;
	
	printf("\n\n -------*Programa calcula o consumo médio de combustível*-------\n");
	
	printf("\n Digite a distância em quilômetros: ");
		scanf("%f", &distancia);
	printf("\n Digite o total de combustível gasto em litros: ");
		scanf("%f", &litros);
	
	consumo = litros / distancia;
	
	printf("\n O consumo médio é %.2f l/km \n", consumo);
	
	system("pause");
	return 0;
}

