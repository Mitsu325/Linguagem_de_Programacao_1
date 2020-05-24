/* Atividade 25 */

void rodizio(int placa) {
	int digito = placa % 10;
	
	switch(digito) {
		case 1: 
		case 2: printf("\n Segunda\n");
			break;
		case 3: 
		case 4: printf("\n Terca\n");
			break;
		case 5: 
		case 6: printf("\n Quarta\n");
			break;
		case 7: 
		case 8: printf("\n Quinta\n");
			break;
		case 9: 
		case 0: printf("\n Sexta\n");
			break;
		default: printf("\n Placa invalida!! \n");
	}
}

int main() {
	rodizio(2356);
	system("pause");
	return 0;
}
