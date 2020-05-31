/* Atividade 29 - Produto de dois naturais */

#include<stdio.h>

unsigned int produto(unsigned int a, unsigned int b) {
	if (b == 0) return 0;
	return (a + produto(a, b-1));
}


int main() {
	unsigned int a;
	unsigned int b;
	
	printf("\n\n Digite a e b: ");
	scanf("%u %u", &a, &b);
	
	printf("\n Produto de %u e %u: %u", a, b, produto(a,b));
	
	return 0;
}
