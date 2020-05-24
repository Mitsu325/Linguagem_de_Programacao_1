/* Atividade 26 */

int fat(int n) {
	int fat = 1;
	
	while(n > 1) {
		fat *= n;
		n--;
	}
	
	return fat;
}

int main() {
	int resultado = fat(4);
	
	printf("%d \n", resultado);
	
	system("pause");
	return 0;
}
