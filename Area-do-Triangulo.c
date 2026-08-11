#include <stdio.h>
 
int main() {
	double AREA, BASE, ALTURA;
	
	printf("Insira o valor da base:\n");
	scanf("%lf", &BASE);
	
	printf("Insira o valor da altura:\n");
	scanf("%lf", &ALTURA);
	
	AREA = (BASE*ALTURA)/2;
	
	printf("A Area do Trianulo = %.2lf", AREA);
	return 0;
}
