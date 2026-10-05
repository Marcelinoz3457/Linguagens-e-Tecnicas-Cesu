#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compara(int a, int b) {
    if (a > b)
        return b;
    else
        return a;
}

int main(int argc, char *argv[]) {

    int valores[10];
    int maior, menor;
    int i;

    printf("Digite 10 valores:\n");

    for (i = 0; i < 10; i++) {
        scanf("%d", &valores[i]);
    }

    printf("\nValores ao contrario:\n");

    for (i = 9; i >= 0; i--) {
        printf("|%d|", valores[i]);
    }

    return 0;
}
