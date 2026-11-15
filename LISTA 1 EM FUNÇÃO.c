
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// EXERCICIO 1 - ORDEM INVERSA
void exercicio1() {
    int n1, n2;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &n1, &n2);

    printf("Ordem inversa: %d %d\n", n2, n1);
}

// EXERCICIO 2 - NOTACAO CIENTIFICA
void exercicio2() {
    double numero;
    int expoente = 0;

    printf("Digite um numero positivo: ");
    scanf("%lf", &numero);

    if (numero <= 0) {
        printf("Digite um numero maior que zero.\n");
        return;
    }

    while (numero >= 10) {
        numero = numero / 10;
        expoente++;
    }

    while (numero < 1) {
        numero = numero * 10;
        expoente--;
    }

    printf("Notacao cientifica: %.6lf x 10^%d\n",
           numero, expoente);
}

// EXERCICIO 3 - NUMERO BINARIO
void exercicio3() {
    int n;
    int binario[7];
    int i;

    printf("Digite um numero entre 0 e 64: ");
    scanf("%d", &n);

    if (n < 0 || n > 64) {
        printf("Numero invalido!\n");
        return;
    }

    for (i = 0; i < 7; i++) {
        binario[i] = n % 2;
        n = n / 2;
    }

    printf("Binario: ");

    for (i = 6; i >= 0; i--) {
        printf("%d", binario[i]);
    }

    printf("\n");
}

// EXERCICIO 4 - CALCULO DE SALARIO
void exercicio4() {
    double salario, vendas, total;

    printf("Digite o salario fixo: ");
    scanf("%lf", &salario);

    printf("Digite o total de vendas: ");
    scanf("%lf", &vendas);

    total = salario + (vendas * 0.15);

    printf("TOTAL = R$ %.2lf\n", total);
}

// EXERCICIO 5 - SOMA, MEDIA E PRODUTO
void exercicio5() {
    double v1, v2, v3, v4;
    double soma, media, produto;

    printf("Digite quatro valores: ");
    scanf("%lf %lf %lf %lf", &v1, &v2, &v3, &v4);

    soma = v1 + v2 + v3 + v4;
    media = soma / 4;
    produto = v1 * v2 * v3 * v4;

    printf("Soma = %.2lf\n", soma);
    printf("Media = %.2lf\n", media);
    printf("Produto = %.2lf\n", produto);
}

// EXERCICIO 6 - IDADE EM DIAS
void exercicio6() {
    int dias, anos, meses, restantes;

    printf("Digite a idade em dias: ");
    scanf("%d", &dias);

    anos = dias / 365;
    dias = dias % 365;

    meses = dias / 30;
    restantes = dias % 30;

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", restantes);
}

// EXERCICIO 7 - VOLUME DA ESFERA
void exercicio7() {
    double raio, volume;
    double pi = 3.14159;

    printf("Digite o raio da esfera: ");
    scanf("%lf", &raio);

    volume = (4.0 / 3.0) * pi * raio * raio * raio;

    printf("VOLUME = %.3lf\n", volume);
}

// EXERCICIO 8 - DISTANCIA ENTRE PONTOS
void exercicio8() {
    double x1, y1, x2, y2;
    double distancia;

    printf("Digite x1 e y1: ");
    scanf("%lf %lf", &x1, &y1);

    printf("Digite x2 e y2: ");
    scanf("%lf %lf", &x2, &y2);

    distancia = sqrt(pow(x2 - x1, 2) +
                     pow(y2 - y1, 2));

    printf("Distancia = %.4lf\n", distancia);
}

// FUNCAO PARA PAUSAR O PROGRAMA
void pausar() {
    printf("\nPressione ENTER para continuar...");

    while (getchar() != '\n');
    getchar();

    system("cls");
}

// FUNCAO DO MENU PRINCIPAL
void menu() {
    int opcao;

    while (1) {
        printf("\n===== MENU - LISTA 01 =====\n");
        printf("1 - Ordem inversa\n");
        printf("2 - Notacao cientifica\n");
        printf("3 - Binario\n");
        printf("4 - Calculo de salario\n");
        printf("5 - Soma, media e produto\n");
        printf("6 - Idade em dias\n");
        printf("7 - Volume da esfera\n");
        printf("8 - Distancia entre dois pontos\n");
        printf("0 - Sair\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        printf("\n");

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

            case 8:
                exercicio8();
                break;

            case 0:
                printf("Ate mais!\n");
                return;

            default:
                printf("Opcao invalida!\n");
                break;
        }

        pausar();
    }
}

// FUNCAO PRINCIPAL
int main() {
    menu();

    return 0;
}
