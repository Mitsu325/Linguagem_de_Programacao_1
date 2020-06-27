/* Atividade 45 */

#include<stdio.h>
#include<math.h>

typedef struct {
	float x;
	float y;
} ponto;

float distPontos(ponto p, ponto q) {
	float distX, distY;
	
	distX = pow((p.x - q.x),2);
	distY = pow((p.y - q.y),2);
	
	return sqrt(distX + distY);
}

int main() {
	ponto P, Q;
	
	printf("\n 1o Ponto: ");
	scanf("%f %f", &P.x, &P.y);
	
	printf("\n 2o Ponto: ");
	scanf("%f %f", &Q.x, &Q.y);
	
	printf("\n Distancia entre os pontos: %.2f", distPontos(P, Q));
	
	return 0;
}
