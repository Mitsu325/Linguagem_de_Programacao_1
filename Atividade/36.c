/* Atividade 36 */

#include<stdio.h>
#include<string.h>

int main() {
	char frase[50];
	int i, len, cont = 1;
	
	do {
		printf("\n Digite uma frase: ");
		gets(frase);

		len = strlen(frase);
	} while(!len);
	
	
	for (i = 0; i < len; i++) {
		if (frase[i] == ' ') {
			cont++;
		}
	}
	
	printf("\n %d palavras", cont);
	
	return 0;
}
