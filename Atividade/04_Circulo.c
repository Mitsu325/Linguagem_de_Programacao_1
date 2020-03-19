/*Atividade 2.3 - Circunferência*/

#include<stdio.h>
#include<math.h>
#define PI 3.1415

int main() {
	float raio, area, perimetro;
	system("cls");
	
	printf("\n\t-------*Programa calcula %crea e per%cmetro do c%crculo*-------\n", 160, 161, 161);
	
	printf("\n\tDigite o raio: ");
		scanf("%f", &raio);
	
	area = PI * pow(raio, 2);
	perimetro = 2 * PI * raio;
	
	printf("\n\tA %crea %c %.2f", 160, 130, area);
	printf("\n\tO per%cmetro %c %.2f \n", 161, 130, perimetro);
	
	system ("pause");
	return 0;
}

