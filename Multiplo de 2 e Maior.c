#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int a, b;
	
	printf("Digite dois valores:   ");
	scanf("%d %d", &a, &b);
	
	if(a > 0 && b > 0){
		
		if(a % 2 == 0 && b % 2 == 0){
			printf("Sao multiplos por 2\n");
		}
		else{
			printf("Os dois sao positivos, mas nao sao multiplos por 2\n");
		}
	}
	else if(a > 0 && b > 0){
		if(a > b){
			printf("O maior eh: %d\n", a);
		}
		else if(b > a){
			printf("O maior eh: %d\n", b);
		}
		else if(a == b){
			printf("Os dois sao iguais");
		}
	}
	
	return 0;
}
