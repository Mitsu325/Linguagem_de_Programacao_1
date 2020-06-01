/* Ordem crescente */

#include <stdio.h>

int main() {
	int a, b;
	
	printf("\n\n Digite dois numeros: ");
	scanf("%d%d", &a, &b);
	
	a > b ? printf("\n %d, %d", b, a) : printf("\n %d, %d", a, b);
	
	return 0;
}
