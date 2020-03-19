/* Atividade 13a - Operaçõs*/

#include <stdio.h>

int main() {
	int x, y;
	
	printf("\n x e y: ");
	scanf("%d%d", &x, &y);
	
	y *= x + 1;
	
	printf("x=%d y=%d", x, y);
}
