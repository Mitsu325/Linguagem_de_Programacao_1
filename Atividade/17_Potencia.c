/* Atividade 17 - Potência */

#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
		
	int n, i;
	float x, pot=1; 
	
	printf("\n ----------*Programa calcula potência*----------");
	
	do {
		printf("\n\n Digite um número e o expoente: ");
		scanf("%f%d", &x, &n);
	}while(n < 0);
	
	for (i=0; i<n; i++)
		pot *= x;
	
	printf("\n Potência de %.2f elevado a %d: %.2f.\n\n", x, n, pot);
	
	system("pause");
	return 0;
}
