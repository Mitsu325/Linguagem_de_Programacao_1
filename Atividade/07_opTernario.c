/*Atividade 7 - Operador Tern�rio*/
#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	
	printf("\n\n -------*Programa informa se n � par ou �mpar*-------\n");
	printf("\n  Digite o n�mero: ");
	scanf("%d", &n);
	
	printf("\n  O n�mero � %s\n", n%2 ? "impar" : "par");
	
	system("pause");
	return 0;
}
