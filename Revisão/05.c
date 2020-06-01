/* Maior */

#include <stdio.h>

int main() {
	int a, b, c;
	
	printf("\n\n Digite tres numeros: ");
	scanf("%d%d%d", &a, &b, &c);
	
	if (a>b && a>c) printf("\n Maior: %d", a);
	else
		if(b>a && b>c) printf("\n Maior: %d", b);
		else printf("\n Maior: %d", c);
	
	return 0;
}
