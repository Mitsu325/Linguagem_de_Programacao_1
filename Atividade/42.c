/* Atividade 42 */

#include<stdio.h>

void meuPuts(char s[]) {
	int i = 0;
	
	while(*(s+i) != '\0') {
		printf("%c", *(s+i));
		i++;
	}
	
	printf("\n");
}

int main() {
	int n = 40;
	int s[n];
	
	printf("\n Digite: ");
	gets(s);
	
	meuPuts(s);
	
	return 0;
}
