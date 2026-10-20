#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// EXERCICIO 1
void exercicio1() {
    int num[100], i, j, aux;

    for (i = 0; i < 100; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    printf("\nOrdem inversa:\n");

    for (i = 99; i >= 0; i--) {
        printf("%d ", num[i]);
    }

    for (i = 0; i < 100; i++) {
        for (j = i + 1; j < 100; j++) {
            if (num[i] < num[j]) {
                aux = num[i];
                num[i] = num[j];
                num[j] = aux;
            }
        }
    }

    printf("\nMaior para o menor:\n");

    for (i = 0; i < 100; i++) {
        printf("%d ", num[i]);
    }

    printf("\n");
}

// EXERCICIO 2
void exercicio2() {
    double num;
    int expoente = 0;

    printf("Digite um numero positivo: ");
    scanf("%lf", &num);

    if (num <= 0) {
        printf("Numero invalido!\n");
        return;
    }

    while (num >= 10) {
        num = num / 10;
        expoente++;
    }

    while (num < 1) {
        num = num * 10;
        expoente--;
    }

    printf("%.2lf x 10^%d\n", num, expoente);
}

// EXERCICIO 3
void exercicio3() {
    unsigned long long n;
    int binario[64], i = 0, j;

    printf("Digite um numero positivo: ");
    scanf("%llu", &n);

    if (n == 0) {
        printf("Binario: 0\n");
        return;
    }

    while (n > 0) {
        binario[i] = n % 2;
        n = n / 2;
        i++;
    }

    printf("Binario: ");

    for (j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }

    printf("\n");
}

// EXERCICIO 4
void exercicio4() {
    int num[10], maior, i;

    for (i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    maior = num[0];

    for (i = 1; i < 10; i++) {
        maior = (maior + num[i] +
                 abs(maior - num[i])) / 2;
    }

    printf("%d eh o maior\n", maior);
}

// EXERCICIO 5
void exercicio5() {
    int num[100], i, j, primo;

    for (i = 0; i < 100; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    for (i = 0; i < 100; i++) {

        if (num[i] % 2 == 0) {
            printf("%d eh par\n", num[i]);
        } else {
            printf("%d eh impar\n", num[i]);
        }

        primo = 1;

        if (num[i] < 2) {
            primo = 0;
        }

        for (j = 2; j < num[i]; j++) {
            if (num[i] % j == 0) {
                primo = 0;
                break;
            }
        }

        if (primo == 1) {
            printf("Eh primo\n");
        } else {
            printf("Nao eh primo\n");
        }
    }
}

// EXERCICIO 6
void exercicio6() {
    float x1[10], y1[10], x2[10], y2[10];
    float distancia;
    int i;

    for (i = 0; i < 10; i++) {
        printf("\nPonto %d\n", i + 1);

        printf("Digite x1: ");
        scanf("%f", &x1[i]);

        printf("Digite y1: ");
        scanf("%f", &y1[i]);

        printf("Digite x2: ");
        scanf("%f", &x2[i]);

        printf("Digite y2: ");
        scanf("%f", &y2[i]);
    }

    for (i = 0; i < 10; i++) {
        distancia = sqrt(
            (x2[i] - x1[i]) * (x2[i] - x1[i]) +
            (y2[i] - y1[i]) * (y2[i] - y1[i])
        );

        printf("Distancia %d: %.2f\n",
               i + 1, distancia);
    }
}

// EXERCICIO 7
void exercicio7() {
    int num[100], i, encontrou = 0;

    for (i = 0; i < 100; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    printf("\nNumeros consecutivos:\n");

    for (i = 0; i < 99; i++) {
        if (num[i + 1] == num[i] + 1) {
            printf("%d e %d\n", num[i], num[i + 1]);
            encontrou = 1;
        }
    }

    if (encontrou == 0) {
        printf("Nenhum numero consecutivo.\n");
    }
}

// FUNCAO PRINCIPAL
int main() {
    int opcao;

    do {
        printf("\n===== MENU =====\n");
        printf("1 - Exercicio 1\n");
        printf("2 - Exercicio 2\n");
        printf("3 - Exercicio 3\n");
        printf("4 - Exercicio 4\n");
        printf("5 - Exercicio 5\n");
        printf("6 - Exercicio 6\n");
        printf("7 - Exercicio 7\n");
        printf("0 - Sair\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                exercicio1();
                break;

            case 2:
                exercicio2();
                break;

            case 3:
                exercicio3();
                break;

            case 4:
                exercicio4();
                break;

            case 5:
                exercicio5();
                break;

            case 6:
                exercicio6();
                break;

            case 7:
                exercicio7();
                break;

            case 0:
                printf("Encerrando...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while (opcao != 0);

    return 0;
}
