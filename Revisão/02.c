/* Pol�gono - n�mero de diagonais */

#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int n, nd;
	
	do {
		printf("\n\n Digite n�mero de lados: ");
		scanf("%d", &n);
	} while(n < 3);
	
	nd = n * (n - 3) / 2;
	
	printf("\n N�mero de diagonais: %d", nd);
	
	return 0;
}
