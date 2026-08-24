#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int a, b, c;
	
	printf("Insira um valor:  ");
	scanf("%d", &a);
	
	printf("Insira um valor:  ");
	scanf("%d", &b);
	
	printf("Insira um valor:  ");
	scanf("%d", &c);
	
	if(a >= b && a >= c){
		printf("O maior valor é:  %d\n", a);
	}
	else if(b >= a && b >= c){
		printf("O maior valor é:  %d\n", b);
	}
	else if(c >= a && c >= b){
		printf("O maior valor é:  %d\n", c);
	}
	
	return 0;
}
