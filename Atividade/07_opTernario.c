/*Atividade 7 - Operador Ternário*/
#include<stdio.h>

int main() {
	int n;
	
	printf("\n\n\t-------*Programa informa se n %c par ou %cmpar*-------\n", 130, 161);
	printf("\n\tDigite o n%cmero: ", 163);
	scanf("%d", &n);
	
	printf("\n\tO n%cmero %c %s\n", 163, 130, n%2 ? "impar" : "par");
	
	system("pause");
	return 0;
}
