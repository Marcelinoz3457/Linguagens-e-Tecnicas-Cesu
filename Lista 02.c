#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	/*
	//exercício 6
	int n;
	
	printf("Entre com o valor N:  ");
	scanf("%d", &n);
	
	printf("o numero %d, seu antecessor %d e seu sucessor %d", n, n-1, n+1);
	*/
	
	//exercício 10
	int a, b, c, maiorTemp, maior;
	
	printf("Digite o valor de a:  ");
	scanf("%d", &a);
	
	printf("Digite o valor de b:  ");
	scanf("%d", &b);
	
	printf("Digite o valor de c:  ");
	scanf("%d", &c);
	
	maiorTemp = (a + b + abs(a - b)) / 2;
	maior = (maiorTemp + c + abs(maiorTemp - c)) / 2;
	
	printf("O maior entre |%d|%d|%d| o maior: %d",a, b, c, maior);
	
	return 0;
}
