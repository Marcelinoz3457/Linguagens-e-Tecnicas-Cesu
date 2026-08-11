#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define pi 3.141592


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	float area, R;
	
	printf("Insira o valor do Raio do Circulo: ");
	scanf("%f", &R);
	
	area = pi *(R*R);
	
	printf("A Area do Circulo do raio é igual %f = %f", R, area);
	
	return 0;
}
