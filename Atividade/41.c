/* Atividade 41 */

#include<stdio.h>

void carrega(int v[], int n) {
	int i;
	
	for (i=0; i < n; i++) {
		printf("\n Digite: ");
		scanf("%d", (v + i));
	}
}

int main() {
	int n = 5, i;
	int v[n];
	
	carrega(v, n);
	
	for (i=0; i < n; i++) {
		printf(" %d", *(v + i));
	}
	
	return 0;
}
