/* Atividade 19 - Números Triangulares */

#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int n, i, nt=0;
	
	printf("\n ----------*Programa verifica número triangular*----------");
	
	do{
		printf("\n\n Digite um número natural: ");
		scanf("%u", &n);
	} while(n < 0);

	for(i=0; i<n; i++)
		nt += (i+1);
	
	printf("\n\n O N-ésimo número triangular de %u é %u\n\n", n, nt);
	
	system("pause");
	return 0;
}
