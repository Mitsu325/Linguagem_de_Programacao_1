/* Atividade 37 */

#include<stdio.h>
#include<string.h>

int main() {
	char carac[30], inv[30];
	int i, len, n = 0;
	
	do {
		printf("\n Digite: ");
		gets(carac);

		len = strlen(carac);
	} while(!len);
	
	
	for (i = (len-1); i >= 0; i--) {
		inv[n] = carac[i];
		n++;
	}
	
	printf("\n %s", inv);
	
	return 0;
}
