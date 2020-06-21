/* Atividade 40 */

#include<stdio.h>

void minimax(float v[], int n, float *x, float *y) {
	int i;
	*x = v[0];
	*y = v[0];
	
	for (i = 0; i < n; i++) {
		if (v[i] > *y)
			*y = v[i];
		else if (v[i] < *x)
				*x = v[i];
	}

}

int main() {
	float v[] = {45, 0, 3, -10.5, -15.5, 20};
	float a, b;
	int tam = 6;
	
	minimax(v, tam, &a, &b);
	
	printf("\n %.2f %.2f \n", a, b);
	
	return 0;
}
