/*Atividade 10 - Bhaskara*/
#include<stdio.h>
#include<math.h>

int main() {
	float a, b, c, delta, x1, x2;
	
	printf("\n\n\t-------*Programa calcula ra%czes*-------\n", 161);
	
	printf("\n\tDigite os coeficientes a, b e c: ");
	scanf("%f %f %f", &a, &b, &c);
	
	if (a == 0) {
		printf("\n\tNao %c poss%cvel aplicar o Bhaskara\n", 130, 161);
	}
	else
		delta = pow(b, 2) - (4 * a * c);
		if (delta < 0)
			printf("\n\tNao possui ra%czes reais\n", 161);
		else
			if (delta == 0) {
				x1 = -b / (2 * a);
				printf("\n\tx1 = x2 = %.2f", x1);
			}
			else {
				x1 = (-b + sqrt(delta))/(2 * a);
				x2 = (-b - sqrt(delta))/(2 * a);
				printf("\n\tx1 = %.2f, x2 = %.2f\n", x1, x2);
			}
	
	system("pause");
	return 0;
}
