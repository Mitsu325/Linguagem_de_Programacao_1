/*Atividade 8 - Conceito Final*/
#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int falta;
	float media;
	
	printf("\n\n-------*Programa informa o conceito final*-------\n");
	
	printf("\n  Digite a quantidade de faltas: ");
	scanf("%d", &falta);
	printf("\n  Digite a média: ");
	scanf("%f", &media);
	
	if (falta > 5)
		printf("\n  Conceito F\n");
	else {
		if (media < 6) 
			printf("\n  Conceito C\n");
		else {
			if (media < 7.5)
				printf("\n  Conceito B\n");
			else {
				if (media < 9)
					printf("\n  Conceito A\n");
				else
					printf("\n  Conceito E \n");
			}
		}
	}	
	
	system("pause");
	return 0;	
		
}
