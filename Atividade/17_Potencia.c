/* Atividade 17 - Pot�ncia */

#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
		
	int n, i;
	float x, pot=1; 
	
	printf("\n ----------*Programa calcula pot�ncia*----------");
	
	do {
		printf("\n\n Digite um n�mero e o expoente: ");
		scanf("%f%d", &x, &n);
	}while(n < 0);
	
	for (i=0; i<n; i++)
		pot *= x;
	
	printf("\n Pot�ncia de %.2f elevado a %d: %.2f.\n\n", x, n, pot);
	
	system("pause");
	return 0;
}
