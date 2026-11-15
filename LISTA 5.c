
#include <stdio.h>
#include <math.h>

// Prototipos das funcoes
void exercicio1(void);
void exercicio2(void);
void exercicio3(void);
void exercicio4(void);
void exercicio5(void);
void exercicio6(void);
void exercicio7(void);

int maiorAB(int a, int b);

int main(void) {
    int opcao;

    do {
        printf("\n========================================\n");
        printf("       LISTA - VETORES E FUNCOES\n");
        printf("========================================\n");
        printf("1 - Inverter e ordenar 100 numeros\n");
        printf("2 - Notacao cientifica\n");
        printf("3 - Converter decimal para binario\n");
        printf("4 - Encontrar o maior de 10 numeros\n");
        printf("5 - Verificar pares e impares\n");
        printf("6 - Distancia entre pontos cartesianos\n");
        printf("7 - Verificar numeros consecutivos\n");
        printf("0 - Sair\n");
        printf("========================================\n");
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
                printf("\nPrograma encerrado!\n");
                break;
            default:
                printf("\nOpcao invalida!\n");
        }

    } while (opcao != 0);

    return 0;
}

// EXERCICIO 1
// Ler 100 numeros, mostrar na ordem inversa
// e ordenar do maior para o menor.

void exercicio1(void) {
    int vetor[100];
    int i, j, aux;

    for (i = 0; i < 100; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nOrdem inversa:\n");

    for (i = 99; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }

    // Ordenacao decrescente
    for (i = 0; i < 99; i++) {
        for (j = i + 1; j < 100; j++) {
            if (vetor[i] < vetor[j]) {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

    printf("\n\nOrdem decrescente:\n");

    for (i = 0; i < 100; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n");
}

// EXERCICIO 2
// Converter um numero positivo para
// notacao cientifica.

void exercicio2(void) {
    double numero, a;
    int expoente = 0;

    printf("Digite um numero positivo: ");
    scanf("%lf", &numero);

    if (numero <= 0) {
        printf("Digite um numero positivo!\n");
        return;
    }

    a = numero;

    while (a >= 10) {
        a = a / 10;
        expoente++;
    }

    while (a < 1) {
        a = a * 10;
        expoente--;
    }

    printf("Notacao cientifica: %.6f x 10^%d\n",
           a, expoente);
}

// EXERCICIO 3
// Converter um numero decimal positivo
// de ate 64 para binario.

void exercicio3(void) {
    int numero, binario[7];
    int i = 0, j;

    printf("Digite um numero de 1 a 64: ");
    scanf("%d", &numero);

    if (numero < 1 || numero > 64) {
        printf("Numero invalido!\n");
        return;
    }

    while (numero > 0) {
        binario[i] = numero % 2;
        numero = numero / 2;
        i++;
    }

    printf("Numero em binario: ");

    for (j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }

    printf("\n");
}

// EXERCICIO 4
// Encontrar o maior de 10 numeros
// utilizando a formula MaiorAB.

int maiorAB(int a, int b) {
    return (a + b + abs(a - b)) / 2;
}

void exercicio4(void) {
    int numeros[10];
    int i, maior;

    for (i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    maior = numeros[0];

    for (i = 1; i < 10; i++) {
        maior = maiorAB(maior, numeros[i]);
    }

    printf("\n%d eh o maior\n", maior);
}

// EXERCICIO 5
// Ler 100 numeros e verificar
// a paridade de cada um.

void exercicio5(void) {
    int vetor[100];
    int i;

    for (i = 0; i < 100; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nResultado:\n");

    for (i = 0; i < 100; i++) {
        if (vetor[i] % 2 == 0) {
            printf("%d - PAR\n", vetor[i]);
        } else {
            printf("%d - IMPAR\n", vetor[i]);
        }
    }
}

// EXERCICIO 6
// Calcular a distancia entre pontos
// utilizando quatro vetores.

void exercicio6(void) {
    double x1[10], y1[10], x2[10], y2[10];
    double distancia;
    int i;

    for (i = 0; i < 10; i++) {
        printf("\nPar de pontos %d\n", i + 1);

        printf("Digite x1: ");
        scanf("%lf", &x1[i]);

        printf("Digite y1: ");
        scanf("%lf", &y1[i]);

        printf("Digite x2: ");
        scanf("%lf", &x2[i]);

        printf("Digite y2: ");
        scanf("%lf", &y2[i]);
    }

    printf("\nDistancias calculadas:\n");

    for (i = 0; i < 10; i++) {
        distancia = sqrt(
            pow(x2[i] - x1[i], 2) +
            pow(y2[i] - y1[i], 2)
        );

        printf("Pontos %d: distancia = %.2f\n",
               i + 1, distancia);
    }
}

// EXERCICIO 7
// Identificar numeros consecutivos
// em um vetor de 100 inteiros.

void exercicio7(void) {
    int vetor[100];
    int i, encontrou = 0;

    for (i = 0; i < 100; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nNumeros em ordem consecutiva:\n");

    for (i = 0; i < 99; i++) {
        if (vetor[i + 1] == vetor[i] + 1) {
            printf("%d e %d\n",
                   vetor[i], vetor[i + 1]);
            encontrou = 1;
        }
    }

    if (encontrou == 0) {
        printf("Nenhum numero consecutivo encontrado.\n");
    }
}
