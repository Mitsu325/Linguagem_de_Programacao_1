/* Atividade 19 - Números Triangulares */

#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int n, i, nt=0;
	
	printf("\n ----------*Programa verifica número triangular*----------");
	
	printf("\n\n Digite n: ");
	scanf("%u", &n);
	
	while(n)
		nt += n--; /* t=t+n >> n=n-1 */
	
	printf("\n\n O resultado é %u\n\n", nt);
	
	system("pause");
	return 0;
}
