/* Atividade 30 - Contagem Regressiva */

#include <stdio.h>

void contagem(unsigned int n) {
	if(n < 2) printf("%u", n);
	else {
		printf("%u, ", n);
		contagem(n - 1);
	}
}

int main() {	
	unsigned int n;
	
	printf("\n Digite n: ");
	scanf("%u", &n);
	
	printf("\n Contagem regressiva: ");
	contagem(n);
	
	return 0;
}
