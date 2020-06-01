/* Recursividade - par ou ímpar */

void sub(unsigned int n) {
	if (n == 0) printf("\n par");
	else
		if (n == 1) printf("\n impar"); 
		else sub(n-2);
}

int main() {
	unsigned int n;
	
	printf("\n\n Digite n: ");
	scanf("%u", &n);
	
	sub(n);
	
	return 0;
}
