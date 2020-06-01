/* Recursividade - soma, série harmônica */

float somahar(unsigned int n) {
	if (n == 1) return 1;
	return (1.0/n + somahar(n-1));
}

int main() {
	unsigned int n;
	
	printf("\n\n Digite n: ");
	scanf("%u", &n);
	
	printf("\n %.2f", somahar(n));
	
	return 0;
}
