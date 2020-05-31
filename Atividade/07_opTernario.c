/*Atividade 7 - Operador Ternário*/
#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	
	printf("\n\n -------*Programa informa se n é par ou ímpar*-------\n");
	printf("\n  Digite o número: ");
	scanf("%d", &n);
	
	printf("\n  O número é %s\n", n%2 ? "impar" : "par");
	
	system("pause");
	return 0;
}
