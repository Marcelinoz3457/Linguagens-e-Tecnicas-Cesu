#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

// Cada exercicio vira uma funcao.
// Uma funcao e so um "pedacinho de codigo" com um nome,
// que a gente pode chamar quando quiser, sem copiar e colar tudo de novo.
// Cada funcao retorna 1 quando terminou certinho.

int exercicio1() {
    int n1, n2;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &n1, &n2);

    printf("Ordem inversa: %d %d\n", n2, n1);

    return 1;
}

int exercicio2() {
    double numero;
    int expoente = 0;

    printf("Digite um numero positivo: ");
    scanf("%lf", &numero);

    if (numero >= 10) {
        numero = numero / 10;
        expoente = 1;
    }
    if (numero >= 10) {
        numero = numero / 10;
        expoente = 2;
    }
    if (numero >= 10) {
        numero = numero / 10;
        expoente = 3;
    }
    if (numero >= 10) {
        numero = numero / 10;
        expoente = 4;
    }
    if (numero >= 10) {
        numero = numero / 10;
        expoente = 5;
    }

    printf("Notacao cientifica: %.6lf x 10^%d\n", numero, expoente);

    return 1;
}

int exercicio3() {
    int n;
    int b1, b2, b3, b4, b5, b6, b7;

    printf("Digite um numero entre 0 e 64: ");
    scanf("%d", &n);

    b1 = n % 2; n = n / 2;
    b2 = n % 2; n = n / 2;
    b3 = n % 2; n = n / 2;
    b4 = n % 2; n = n / 2;
    b5 = n % 2; n = n / 2;
    b6 = n % 2; n = n / 2;
    b7 = n % 2;

    printf("Binario: %d%d%d%d%d%d%d\n", b7, b6, b5, b4, b3, b2, b1);

    return 1;
}

int exercicio4() {
    double salario, vendas, total;

    printf("Digite o salario fixo: ");
    scanf("%lf", &salario);

    printf("Digite o total de vendas: ");
    scanf("%lf", &vendas);

    total = salario + (vendas * 0.15);

    printf("TOTAL = R$ %.2lf\n", total);

    return 1;
}

int exercicio5() {
    double valor1, valor2, valor3, valor4;
    double soma, media, produto;

    printf("Digite quatro valores: ");
    scanf("%lf %lf %lf %lf", &valor1, &valor2, &valor3, &valor4);

    soma = valor1 + valor2 + valor3 + valor4;
    media = soma / 4;
    produto = valor1 * valor2 * valor3 * valor4;

    printf("Soma = %.2lf\n", soma);
    printf("Media = %.2lf\n", media);
    printf("Produto = %.2lf\n", produto);

    return 1;
}

int exercicio6() {
    int dias, anos, meses, diasRestantes;

    printf("Digite a idade em dias: ");
    scanf("%d", &dias);

    anos = dias / 365;
    dias = dias % 365;
    meses = dias / 30;
    diasRestantes = dias % 30;

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", diasRestantes);

    return 1;
}

int exercicio7() {
    double raio, volume;
    double pi = 3.14159;

    printf("Digite o raio da esfera: ");
    scanf("%lf", &raio);

    volume = (4.0 / 3.0) * pi * raio * raio * raio;

    printf("VOLUME = %.3lf\n", volume);

    return 1;
}

int exercicio8() {
    double x1, y1, x2, y2;
    double distancia;

    printf("Digite x1 e y1: ");
    scanf("%lf %lf", &x1, &y1);

    printf("Digite x2 e y2: ");
    scanf("%lf %lf", &x2, &y2);

    distancia = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    printf("Distancia = %.4lf\n", distancia);

    return 1;
}

// A funcao main e onde o programa comeca a rodar de verdade.
int main() {

    int opcao, status;

    // O "while" repete tudo aqui dentro ate a pessoa digitar 0.
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

        // switch/case decide o que fazer dependendo do numero digitado.
        switch (opcao) {
            case 1:
                status = exercicio1();
                break;
            case 2:
                status = exercicio2();
                break;
            case 3:
                status = exercicio3();
                break;
            case 4:
                status = exercicio4();
                break;
            case 5:
                status = exercicio5();
                break;
            case 6:
                status = exercicio6();
                break;
            case 7:
                status = exercicio7();
                break;
            case 8:
                status = exercicio8();
                break;
            case 0:
                status = 1;
                printf("Ate mais!\n");
                break;
            default:
                status = 0;
                printf("Opcao invalida, tente de novo.\n");
                break;
        }

        if (opcao == 0) {
            break; // "break" sai do while, ou seja, encerra o programa
        }

        if (status == 0 && opcao != 0) {
            printf("\n(A operacao nao foi concluida com sucesso.)\n");
        }

        // Espera o usuario ver o resultado antes de limpar a tela
        // e mostrar o menu de novo.
        printf("\nPressione ENTER para continuar...");
        while (getchar() != '\n'); // limpa o "enter" que ficou no buffer do scanf
        getchar();                 // espera o ENTER de verdade do usuario

        system("cls"); // limpa a tela DEPOIS que o resultado foi visto
    }

    return 0;
}
