/*Atividade 8 - Conceito Final*/
#include<stdio.h>

int main() {
	int falta;
	float media;
	
	printf("\n\n\t-------*Programa informa o conceito final*-------\n");
	
	printf("\n\tDigite a quantidade de faltas: ");
	scanf("%d", &falta);
	printf("\n\tDigite a m%cdia: ", 130);
	scanf("%f", &media);
	
	if (falta > 5)
		printf("\n\tConceito F\n");
	else {
		if (media < 6) 
			printf("\n\tConceito C\n");
		else {
			if (media < 7.5)
				printf("\n\tConceito B\n");
			else {
				if (media < 9)
					printf("\n\tConceito A\n");
				else
					printf("\n\tConceito E \n");
			}
		}
	}	
	
	system("pause");
	return 0;	
		
}
