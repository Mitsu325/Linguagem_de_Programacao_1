/* Atividade 26 */

int fat(int n) {
	int fat = 1;
	
	while(n > 1)
		fat *= n--;
	
	return fat;
}

int main() {
	int n;
	
	printf("\n\n Digite n: ");
	scanf("%d", &n);
	
	printf("\n Fatorial de %d: %d \n", n, fat(n));
	
	return 0;
}
