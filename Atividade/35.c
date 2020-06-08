/* Atividade 35 */

#include<stdio.h>

int main() {
	float A[10][3], media=0;
	int i, j;
	
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 2; j++) {
			do {
				printf("\n Aluno %d - Nota %d: ", i+1, j+1);
				scanf("%f", &A[i][j]);				
			} while (A[i][j] > 10);
		}
		
		A[i][2] = (A[i][0] + A[i][1])/2;
		media += A[i][2];
	}
	
	media /= 10;
	
	for (i = 0; i < 10; i++) {
		printf("\n");
		printf("\n Media do Aluno %d: %.2f", i+1, A[i][2]);
		if (A[i][2] == media) {
			printf(" >> Na media");
		} else if (A[i][2] > media) {
			printf(" >> Acima da media");
		} else {
			printf("  >> Abaixo da media");
		}
	}
	
	return 0;
}
