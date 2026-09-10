#include <stdio.h>
#include <math.h>

// Cada exercicio vira uma funcao.
// Uma funcao e so um "pedacinho de codigo" com um nome,
// que a gente pode chamar quando quiser, sem copiar e colar tudo de novo.

void exercicio1() {
    int n1, n2;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &n1, &n2);

    printf("Ordem inversa: %d %d\n", n2, n1);
}

void exercicio2() {
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
}

void exercicio3() {
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
}

void exercicio4() {
    double salario, vendas, total;

    printf("Digite o salario fixo: ");
    scanf("%lf", &salario);

    printf("Digite o total de vendas: ");
    scanf("%lf", &vendas);

    total = salario + (vendas * 0.15);

    printf("TOTAL = R$ %.2lf\n", total);
}

void exercicio5() {
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
}

void exercicio6() {
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
}

void exercicio7() {
    double raio, volume;
    double pi = 3.14159;

    printf("Digite o raio da esfera: ");
    scanf("%lf", &raio);

    volume = (4.0 / 3.0) * pi * raio * raio * raio;

    printf("VOLUME = %.3lf\n", volume);
}

void exercicio8() {
    double x1, y1, x2, y2;
    double distancia;

    printf("Digite x1 e y1: ");
    scanf("%lf %lf", &x1, &y1);

    printf("Digite x2 e y2: ");
    scanf("%lf %lf", &x2, &y2);

    distancia = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    printf("Distancia = %.4lf\n", distancia);
}

// A funcao main e onde o programa comeca a rodar de verdade.
int main() {

    int opcao;

    // O "while" repete tudo aqui dentro ate a pessoa digitar 0.
    while (1) {

        printf("\n===== MENU =====\n");
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

        
        // depende do numero que a pessoa digitou.
        if (opcao == 1) {
            exercicio1();
        } else if (opcao == 2) {
            exercicio2();
        } else if (opcao == 3) {
            exercicio3();
        } else if (opcao == 4) {
            exercicio4();
        } else if (opcao == 5) {
            exercicio5();
        } else if (opcao == 6) {
            exercicio6();
        } else if (opcao == 7) {
            exercicio7();
        } else if (opcao == 8) {
            exercicio8();
        } else if (opcao == 0) {
            printf("Ate mais!\n");
            break; // "break" sai do while, ou seja, encerra o programa
        } else {
            printf("Opcao invalida, tente de novo.\n");
        }
    }

    return 0;
}
