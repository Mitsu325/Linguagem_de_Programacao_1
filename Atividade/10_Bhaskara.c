/*Atividade 10 - Bhaskara*/
#include<stdio.h>
#include<math.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float a, b, c, delta, x1, x2;
	
	printf("\n\n -------*Programa calcula raízes*-------\n");
	
	printf("\n Digite os coeficientes a, b e c: ");
	scanf("%f %f %f", &a, &b, &c);
	
	if (a == 0) {
		printf("\n Nao é possível aplicar o Bhaskara\n");
	}
	else
		delta = pow(b, 2) - (4 * a * c);
		if (delta < 0)
			printf("\n Nao possui raízes reais\n");
		else
			if (delta == 0) {
				x1 = -b / (2 * a);
				printf("\n x1 = x2 = %.2f", x1);
			}
			else {
				x1 = (-b + sqrt(delta))/(2 * a);
				x2 = (-b - sqrt(delta))/(2 * a);
				printf("\n x1 = %.2f, x2 = %.2f\n", x1, x2);
			}
	
	system("pause");
	return 0;
}
