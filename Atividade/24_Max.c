/* Atividade 24 */

double max(double a, double b) {
	if (a > b)
		return a;
	return b;
}

int main() {
	double y;
	
	y = max(10, 20);
	
	printf(" %.2lf \n", y);
	
	system("pause");
	return 0;
}
