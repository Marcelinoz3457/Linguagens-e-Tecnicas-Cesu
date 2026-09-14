/*
 * Trabalho de Algoritmos - Linguagem C
 * Implementacao dos 10 exercicios propostos, com um menu no main()
 * que permite ao usuario escolher qual exercicio deseja executar.
 * Uso de printf/scanf e estrutura if/else if/else para o menu.
 */

#include <stdio.h>
#include <math.h>   // usada na questao 10 (fabs) - fabs de double

// ---------- Prototipos das funcoes de cada exercicio ----------
int exercicio1();
int exercicio2();
int exercicio3();
int exercicio4();
int exercicio5();
int exercicio6();
int exercicio7();
int exercicio8();
int exercicio9();
int exercicio10();

int main() {
    int opcao;

    // Loop do menu: continua exibindo ate o usuario escolher sair (0)
    do {
        // --- Tela de opcoes ---
        printf("\n===================================================\n");
        printf("        MENU - LISTA 2\n");
        printf("===================================================\n");
        printf(" 1  - Calcular ano de nascimento\n");
        printf(" 2  - Converter velocidade km/h para m/s\n");
        printf(" 3  - Converter reais para dolares\n");
        printf(" 4  - Converter Celsius para Fahrenheit\n");
        printf(" 5  - Converter graus para radianos\n");
        printf(" 6  - Antecessor e sucessor de um numero\n");
        printf(" 7  - Divisao do premio entre 3 ganhadores\n");
        printf(" 8  - Converter segundos para horas:minutos:segundos\n");
        printf(" 9  - Calculo de consumo de combustivel (URI 1017)\n");
        printf(" 10 - Maior entre tres valores (URI 1013)\n");
        printf(" 0  - Sair\n");
        printf("---------------------------------------------------\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &opcao);

        // --- Estrutura if / else if / else para chamar o exercicio escolhido ---
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
        } else if (opcao == 9) {
            exercicio9();
        } else if (opcao == 10) {
            exercicio10();
        } else if (opcao == 0) {
            printf("\nEncerrando o programa...\n");
        } else {
            printf("\nOpcao invalida! Tente novamente.\n");
        }

    } while (opcao != 0);

    return 0;
}

/*
 * 1) Faca um programa que calcule o ano de nascimento de uma pessoa
 *    a partir de sua idade e do ano atual.
 */
int exercicio1() {
    int idade, anoAtual, anoNascimento;

    printf("\n--- Exercicio 1: Ano de nascimento ---\n");
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    // O ano de nascimento e a subtracao do ano atual pela idade
    anoNascimento = anoAtual - idade;

    printf("Voce nasceu (aproximadamente) no ano: %d\n", anoNascimento);

    return 1;
}

/*
 * 2) Leia uma velocidade em km/h e apresente convertida em m/s.
 *    Formula: M = K / 3.6, sendo K a velocidade em km/h e M em m/s.
 */
int exercicio2() {
    double K, M;

    printf("\n--- Exercicio 2: km/h para m/s ---\n");
    printf("Digite a velocidade em km/h: ");
    scanf("%lf", &K);

    M = K / 3.6;

    printf("A velocidade em m/s e: %.2lf m/s\n", M);

    return 1;
}

/*
 * 3) Faca um programa que leia um valor em reais e a cotacao do dolar.
 *    Em seguida, imprima o valor correspondente em dolares.
 */
int exercicio3() {
    double reais, cotacaoDolar, valorDolar;

    printf("\n--- Exercicio 3: Reais para dolares ---\n");
    printf("Digite o valor em reais: ");
    scanf("%lf", &reais);
    printf("Digite a cotacao do dolar: ");
    scanf("%lf", &cotacaoDolar);

    // Para converter reais em dolares, divide-se pela cotacao
    valorDolar = reais / cotacaoDolar;

    printf("O valor correspondente em dolares e: $ %.2lf\n", valorDolar);

    return 1;
}

/*
 * 4) Leia um valor que represente uma temperatura em graus Celsius e
 *    apresente-o convertido em graus Fahrenheit.
 *    Formula: F = C * (9.0/5.0) + 32.0
 */
int exercicio4() {
    double C, F;

    printf("\n--- Exercicio 4: Celsius para Fahrenheit ---\n");
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%lf", &C);

    F = C * (9.0 / 5.0) + 32.0;

    printf("A temperatura em Fahrenheit e: %.2lf F\n", F);

    return 1;
}

/*
 * 5) Leia um angulo em graus e apresente-o convertido em radianos.
 *    Formula: R = G * p / 180, sendo G o angulo em graus,
 *    R em radianos e p = 3.141592.
 */
int exercicio5() {
    double G, R;
    const double p = 3.141592;

    printf("\n--- Exercicio 5: Graus para radianos ---\n");
    printf("Digite o angulo em graus: ");
    scanf("%lf", &G);

    R = G * p / 180;

    printf("O angulo em radianos e: %.6lf rad\n", R);

    return 1;
}

/*
 * 6) Faca um programa que leia um numero inteiro e retorne
 *    seu antecessor e seu sucessor.
 */
int exercicio6() {
    int n;

    printf("\n--- Exercicio 6: Antecessor e sucessor ---\n");
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    printf("Antecessor: %d\n", n - 1);
    printf("Sucessor: %d\n", n + 1);

    return 1;
}

/*
 * 7) A importancia de R$780.000,00 sera dividida entre tres ganhadores
 *    de um concurso: o primeiro recebera 46% do total, o segundo 32%
 *    do total, e o terceiro o restante. Calcule e imprima a quantia
 *    recebida por cada um dos ganhadores.
 */
int exercicio7() {
    double total = 780000.00;
    double primeiro, segundo, terceiro;

    printf("\n--- Exercicio 7: Divisao do premio ---\n");

    primeiro = total * 0.46;
    segundo = total * 0.32;
    terceiro = total - (primeiro + segundo); // o restante

    printf("O premio total de R$ %.2lf sera dividido assim:\n", total);
    printf("Primeiro ganhador (46%%): R$ %.2lf\n", primeiro);
    printf("Segundo ganhador (32%%): R$ %.2lf\n", segundo);
    printf("Terceiro ganhador (restante): R$ %.2lf\n", terceiro);

    return 1;
}

/*
 * 8) (URI 1019) Leia um valor inteiro, que e o tempo de duracao em
 *    segundos de um determinado evento em uma fabrica, e informe-o
 *    expresso no formato horas:minutos:segundos.
 */
int exercicio8() {
    int totalSegundos, horas, minutos, segundos;

    printf("\n--- Exercicio 8: Segundos para horas:minutos:segundos ---\n");
    printf("Digite o tempo total em segundos: ");
    scanf("%d", &totalSegundos);

    horas = totalSegundos / 3600;
    minutos = (totalSegundos % 3600) / 60;
    segundos = totalSegundos % 60;

    printf("%d:%d:%d\n", horas, minutos, segundos);

    return 1;
}

/*
 * 9) (URI 1017) Joaozinho quer calcular e mostrar a quantidade de
 *    litros de combustivel gastos em uma viagem, ao utilizar um
 *    automovel que faz 12 KM/L. Deve-se fornecer o tempo gasto na
 *    viagem (em horas) e a velocidade media durante a mesma (em
 *    km/h). Assim, pode-se obter a distancia percorrida e, em
 *    seguida, calcular quantos litros seriam necessarios. Mostrar o
 *    valor com 3 casas decimais apos o ponto.
 */
int exercicio9() {
    double horas, velocidadeMedia, distancia, litros;
    const double consumoPorLitro = 12.0; // km por litro

    printf("\n--- Exercicio 9: Consumo de combustivel (URI 1017) ---\n");
    printf("Digite o tempo gasto na viagem (em horas): ");
    scanf("%lf", &horas);
    printf("Digite a velocidade media (em km/h): ");
    scanf("%lf", &velocidadeMedia);

    distancia = horas * velocidadeMedia;
    litros = distancia / consumoPorLitro;

    printf("%.3lf litros\n", litros);

    return 1;
}

/*
 * 10) (URI 1013) Faca um programa que leia tres valores e apresente
 *     o maior dos tres valores lidos, seguido da mensagem "eh o
 *     maior". Utilize a formula:
 *     MaiorAB = (a + b + abs(a - b)) / 2
 *     Obs.: a formula apenas calcula o maior entre os dois primeiros
 *     (A e B). Um segundo passo, portanto, e necessario para chegar
 *     no resultado esperado (comparar o resultado com o terceiro
 *     valor, C, usando a mesma formula).
 */
int exercicio10() {
    double a, b, c, maiorAB, maiorFinal;

    printf("\n--- Exercicio 10: Maior entre tres valores (URI 1013) ---\n");
    printf("Digite o valor de A: ");
    scanf("%lf", &a);
    printf("Digite o valor de B: ");
    scanf("%lf", &b);
    printf("Digite o valor de C: ");
    scanf("%lf", &c);

    // Passo 1: maior entre A e B
    maiorAB = (a + b + fabs(a - b)) / 2;

    // Passo 2: maior entre o resultado anterior e C
    maiorFinal = (maiorAB + c + fabs(maiorAB - c)) / 2;

    printf("%.2lf eh o maior\n", maiorFinal);

    return 1;
}
