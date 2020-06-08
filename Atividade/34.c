/* Atividade 34 */

#include<stdio.h>
#define max 7

void obtem (float temp[], int tam) {
	int i;
	
	printf(" Informe as temperaturas: \n");
	
	for (i = 0; i < tam; i++){
		printf("\n Dia %d: ", i+1);
		scanf("%f", &temp[i]);
	}
}

float media(float temp[], int tam) {
	int i;
	float soma=0;
	
	for (i = 0; i < tam; i++) {
		soma += temp[i];
	}
	
	return (soma / tam);
}

int conta(float temp[], int tam, float media) {
	int i, cont = 0;
	
	for (i = 0; i < tam; i++) {
		if (temp[i] > media) {
			cont++;
		}
	}
	
	return cont;
}

int main() {
	float temp[max], m;
	
	obtem(temp, max);
	
	m = media(temp, max);
	
	printf("Estatistica: %d", conta(temp, max, m));
	
	return 0;
}

