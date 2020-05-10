/* Atividade 18 - Data válida */

#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int d, m, a, cont = 0;
	int diaMes[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	
	printf("\n ----------*Programa verifica data*----------");
	
	do {
		printf("\n\n Digite uma data (dia, mês e ano): ");
		scanf("%d%d%d", &d, &m, &a);
		
		if (a%4 == 0 && a%100 != 0 || a%400 == 0)
			diaMes[2] = 29;
		
		if (d > 0 && d <= diaMes[m]) {
			if (m > 0 && m < 13)
				cont = 1;
		}
		
		if (cont == 0)
			printf("\n Data inválida");
			
	} while(cont == 0);
	
	printf("\n\n %d/%d/%d é uma data válida!!\n\n", d, m, a);
	
	system("pause");
	return 0;
}
