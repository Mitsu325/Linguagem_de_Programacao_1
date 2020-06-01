/* Ordem crescente 3 números */

#include <stdio.h>

int main() {
	int a, b, c;
	
	printf("\n\n Digite tres numeros: ");
	scanf("%d%d%d", &a, &b, &c);
	
	if (a>b && a>c) {
		if (b > c) printf("\n Ordem: %d, %d, %d", c, b, a);
		else printf("\n Ordem: %d, %d, %d", b, c, a);
	} 
	else
		if(b>a && b>c) {
			if (a > c) printf("\n Ordem: %d, %d, %d", c, a, b);
			else printf("\n Ordem: %d, %d, %d", a, c, b);
		} 
		else {
			if (a > b) printf("\n Ordem: %d, %d, %d", b, a, c);
			else printf("\n Ordem: %d, %d, %d", a, b, c);
		}
	
	return 0;
}
