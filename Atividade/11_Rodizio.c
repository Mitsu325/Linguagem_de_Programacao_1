/* Atividade 11 - Rod�zio */

#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int placa, digito;
	
	printf("\n ----------*Programa informa o dia de rod�zio*----------");
	
	printf("\n\n Digite a placa: ");
	scanf("%d", &placa);
	
	digito = placa % 10;
	
	switch(digito) {
		case 1: 
		case 2: printf("\n Segunda\n");
			break;
		case 3: 
		case 4: printf("\n Ter�a\n");
			break;
		case 5: 
		case 6: printf("\n Quarta\n");
			break;
		case 7: 
		case 8: printf("\n Quinta\n");
			break;
		case 9: 
		case 0: printf("\n Sexta\n");
			break;
		default: printf("\n Placa inv�lida!! \n");
	}
	
	system("pause");
	return 0;
}
