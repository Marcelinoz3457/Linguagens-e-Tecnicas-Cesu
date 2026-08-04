#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int arc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int base, altura;
	float area;
	
	base=10;
	altura=20;
	
	area=(base*altura)/2;
	
	printf("A area do Triangulo Retangulo da Base = %d e Altura = %d é %f", base, altura, area);
	
	return 0;
}
