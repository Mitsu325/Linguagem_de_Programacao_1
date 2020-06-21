/* Atividade 39 */

#include<stdio.h>

void ordena(int *x, int *y) {
	
	if (*x > *y) {
		int z = *x;
		*x = *y;
		*y = z;	
	};

}

int main() {
	int a = 20, b = 5;
	
	ordena(&a, &b);
	
	printf("\n %d %d \n", a, b);
	
	return 0;
}
