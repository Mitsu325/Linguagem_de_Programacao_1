/* Atividade 13a - Opera��s*/

#include <stdio.h>

int main() {
	int x, y;
	
	printf("\n x: ");
	scanf("%d", &x);
	
	y = x * (x + 1) * x++;
	
	printf("x=%d y=%d", x, y);
}
