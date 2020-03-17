/*Atividade 9 - Cegonha*/
#include<stdio.h>
#include<math.h>

int main() {
	float H, O, A, imc;
	
	printf("\n\tDigite a altura em m: ");
	scanf("%f", &H);
	printf("\n\tDigite o peso antes de engravidar em kg: ");
	scanf("%f", &O);
	printf("\n\tDigite o peso atual em kg: ");
	scanf("%f", &A);
	
	imc = O / pow(H, 2);
	
	printf("\n\t%.2f", imc);
	
	if (imc < 18.5)
		if (A < O+12.5)
			printf("\n\tGanho insuficiente\n");
		else
			if (A > O+18)
				printf("\n\tGanho exagerado\n");
			else
				printf("\n\tGanho normal\n");
	else
		if (imc < 25)
			if (A < O+11)
				printf("\n\tGanho insuficiente\n");
			else
				if (A > O+16)
					printf("\n\tGanho exagerado\n");
				else
					printf("\n\tGanho normal\n");
		else
			if (imc < 30)
				if (A < O+7)
					printf("\n\tGanho insuficiente\n");
				else
					if (A > O+11.5)
						printf("\n\tGanho exagerado\n");
					else
						printf("\n\tGanho normal\n");
			else
				if (A < O+5)
					printf("\n\tGanho insuficiente\n");
				else
					if (A > O+9)
						printf("\n\tGanho exagerado\n");
					else
						printf("\n\tGanho normal\n");
		
	
	system("\npause");
	return 0;
}
