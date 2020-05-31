/* Atividade 27 - Pot�ncia Recursiva */

#include<stdio.h>

double pot(double a, unsigned int b) {
	if (b == 0) return 1;
	return (a * pot(a, b-1));
}


int main() {
	double a;
	unsigned int b;
	
	printf("\n\n Digite a e b: ");
	scanf("%lf %u", &a, &b);
	
	printf("\n %.2lf elevado a %u: %.2lf", a, b, pot(a,b));
	
	return 0;
}