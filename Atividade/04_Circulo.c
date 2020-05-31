/*Atividade 2.3 - Circunferência*/

#include<stdio.h>
#include<math.h>
#include<locale.h>
#define PI 3.1415

int main() {
	system("cls");
	setlocale(LC_ALL, "Portuguese");
	
	float raio, area, perimetro;
	
	printf("\n -------*Programa calcula área e perímetro do círculo*-------\n");
	
	printf("\n Digite o raio: ");
		scanf("%f", &raio);
	
	area = PI * pow(raio, 2);
	perimetro = 2 * PI * raio;
	
	printf("\n A área é %.2f\n", area);
	printf("\n O perímetro é %.2f \n", perimetro);
	
	system ("pause");
	return 0;
}

