/* Valores lógicos */

#include<stdio.h>

int main() {
	int a;
	
	printf("\n\n Digite um valor: ");
	scanf("%d", &a);
	
	printf("\n %s", a == 0 ? "false" : "true");
	
	return 0;
}
