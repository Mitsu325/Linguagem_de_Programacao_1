/* Atividade 28 - Binário */

#include <stdio.h>
#include <locale.h>

void bin(unsigned int n) {
	if(n < 2) printf("%u", n);
	else {
		bin(n / 2);
		printf("%u", n % 2);
	}
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	unsigned int n;
	
	printf("\n Digite n: ");
	scanf("%u", &n);
	
	printf("\n %u em binário: ", n);
	bin(n);
	
	return 0;
}
