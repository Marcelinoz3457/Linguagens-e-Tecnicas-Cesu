#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define pi 3.141592

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	float area, area_T, R, h, b, B;
	
	printf("Insira o valor do Raio do Circulo: ");
	scanf("%f", &R);
	
	area = pi *(R*R);
	
	printf("A Area do Circulo do raio é igual %f = %f \n", R, area);
	
	puts("");
	
	printf("Insira o valor da base menor do trapézio:");
	scanf("%f", &b);
	
	printf("Insira o valor da base maior do trapézio:");
	scanf("%f", &B);
	
	printf("Insira o valor da altura do trapézio:");
	scanf("%f", &h);
	
	area_T = ((B+b)*h)/2;
	
	printf("A Area do Trapézio é igual %.2f", area_T);
	
	return 0;
}
