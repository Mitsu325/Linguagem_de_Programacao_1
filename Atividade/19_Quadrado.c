/* Atividade 19 - Quadrado */

#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int n, qua = 0, cont = 0, impar = 1;
	
	printf("\n ----------*Programa calcula o quadrado do n�mero*----------");
	
	printf("\n\n Digite um n�mero natural: ");
	scanf("%u", &n);

	while(cont < n) {
		qua += impar;
		impar += 2;
		cont++;
	}
	
	printf("\n\n O quadrado de %u � %u\n\n", n, qua);
	
	system("pause");
	return 0;
}
