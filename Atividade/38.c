/* Atividade 38 */

#include<stdio.h>
#include<string.h>

int strpos(char s[], char c[]) {
	int i, len;
	
	len = strlen(s);
	
	for (i = 0; i < len; i++) {
		if (s[i] == c[0]) {
			return i;
		}
	}
	
	return -1;
}

int main() {
	char s[30], c[2];
	
	printf("\n Digite string: ");
	gets(s);
	
	printf("\n Digite caracter: ");
	gets(c);
	
	printf("\n %d \n", strpos(s,c));
	
	return 0;
}
