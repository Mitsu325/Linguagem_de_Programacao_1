/* Atividade 19 - N�meros Triangulares */

#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int n, i, nt=0;
	
	printf("\n ----------*Programa verifica n�mero triangular*----------");
	
	do{
		printf("\n\n Digite um n�mero natural: ");
		scanf("%u", &n);
	} while(n < 0);

	for(i=0; i<n; i++)
		nt += (i+1);
	
	printf("\n\n O N-�simo n�mero triangular de %u � %u\n\n", n, nt);
	
	system("pause");
	return 0;
}
