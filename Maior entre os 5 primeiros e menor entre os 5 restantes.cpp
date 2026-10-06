#include <stdio.h>

int main() {
    int valores[10];
    int i, maior, menor;

    printf("Digite 10 valores:\n");

    for (i = 0; i < 10; i++) {
        scanf("%d", &valores[i]);
    }

    maior = valores[0];

    for (i = 1; i < 5; i++) {
        if (valores[i] > maior) {
            maior = valores[i];
        }
    }

    menor = valores[5];

    for (i = 6; i < 10; i++) {
        if (valores[i] < menor) {
            menor = valores[i];
        }
    }

    printf("\nMaior entre os 5 primeiros: %d\n", maior);
    printf("Menor entre os 5 restantes: %d\n", menor);

    return 0;
}
