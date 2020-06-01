/*Mercadorias*/

#include<stdio.h>

float precoTotal() {
	float preco, total = 0;
	printf("\n\n Digite os precos das mercadorias: ");
	do {
		scanf("%f", &preco);
		total += preco;
	} while(preco);
	
	return total;
}

float descontos(float preco) {
	if(preco < 50)
		return (preco * 0.95);
	if(preco < 100)
		return (preco * 0.90);
	if(preco < 200)
		return (preco * 0.85);
	else
		return (preco * 0.80);
}

int main() {
	float preco = precoTotal();
	
	float precoFinal = descontos(preco);
	
	printf("\n R$%.2f", precoFinal);
	
	return 0;
}
