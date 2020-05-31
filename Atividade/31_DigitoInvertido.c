/* Atividade 28 - Binário */

#include <stdio.h>
#include <locale.h>

void inverter(unsigned int n) {
	if(n < 10) printf("%u", n);
	else {
		printf("%u", n % 10);
		inverter(n / 10);
	}
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	unsigned int n;
	
	printf("\n Digite n: ");
	scanf("%u", &n);
	
	printf("\n Dígitos invertidos: ");
	inverter(n);
	
	return 0;
}
