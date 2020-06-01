/* Polígono - número de diagonais */

#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int n, nd;
	
	do {
		printf("\n\n Digite número de lados: ");
		scanf("%d", &n);
	} while(n < 3);
	
	nd = n * (n - 3) / 2;
	
	printf("\n Número de diagonais: %d", nd);
	
	return 0;
}
