/* Atividade 16 - Fatorial */

#include <stdio.h>
#include <conio.h>

int main() {
	int num, fat = 1;
	
	printf("\n ----------*Programa calcula fatorial*----------");

	do {
		printf("\n\n Digite um numero >= 0: ");
		scanf("%d", &num);
	} while(num < 0);
	
	while(num > 1) {
		fat *= num;
		num--;
	}
	
	printf("\n Fatorial = %d\n\n", fat);
	
	system("pause");
	return 0;
}
