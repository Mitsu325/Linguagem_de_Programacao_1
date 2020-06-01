/* Recursividade - somatória */

unsigned int soma(unsigned int n) {
	if (n == 0) return 0;
	return (n + soma(n-1));
}

int main() {
	unsigned int n;
	
	printf("\n\n Digite n: ");
	scanf("%u", &n);
	
	printf("\n Somatoria: %u", soma(n));
	
	return 0;
}
