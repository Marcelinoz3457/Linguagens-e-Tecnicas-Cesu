
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// EXERCICIO 1 - ANO DE NASCIMENTO
void exercicio1() {
    int idade, anoAtual, nascimento;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    nascimento = anoAtual - idade;

    printf("Ano de nascimento aproximado: %d\n", nascimento);
}

// EXERCICIO 2 - KM/H PARA M/S
void exercicio2() {
    double velocidade, resultado;

    printf("Digite a velocidade em km/h: ");
    scanf("%lf", &velocidade);

    resultado = velocidade / 3.6;

    printf("Velocidade em m/s: %.2lf\n", resultado);
}

// EXERCICIO 3 - REAIS PARA DOLARES
void exercicio3() {
    double reais, cotacao, dolares;

    printf("Digite o valor em reais: ");
    scanf("%lf", &reais);

    printf("Digite a cotacao do dolar: ");
    scanf("%lf", &cotacao);

    if (cotacao <= 0) {
        printf("Cotacao invalida!\n");
        return;
    }

    dolares = reais / cotacao;

    printf("Valor em dolares: $ %.2lf\n", dolares);
}

// EXERCICIO 4 - CELSIUS PARA FAHRENHEIT
void exercicio4() {
    double celsius, fahrenheit;

    printf("Digite a temperatura em Celsius: ");
    scanf("%lf", &celsius);

    fahrenheit = celsius * (9.0 / 5.0) + 32;

    printf("Temperatura em Fahrenheit: %.2lf\n", fahrenheit);
}

// EXERCICIO 5 - GRAUS PARA RADIANOS
void exercicio5() {
    double graus, radianos;
    double pi = 3.141592;

    printf("Digite o angulo em graus: ");
    scanf("%lf", &graus);

    radianos = graus * pi / 180;

    printf("Angulo em radianos: %.6lf\n", radianos);
}

// EXERCICIO 6 - ANTECESSOR E SUCESSOR
void exercicio6() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("Antecessor: %d\n", numero - 1);
    printf("Sucessor: %d\n", numero + 1);
}

// EXERCICIO 7 - DIVISAO DO PREMIO
void exercicio7() {
    double premio = 780000;
    double primeiro, segundo, terceiro;

    primeiro = premio * 0.46;
    segundo = premio * 0.32;
    terceiro = premio - primeiro - segundo;

    printf("Primeiro ganhador: R$ %.2lf\n", primeiro);
    printf("Segundo ganhador: R$ %.2lf\n", segundo);
    printf("Terceiro ganhador: R$ %.2lf\n", terceiro);
}

// EXERCICIO 8 - CONVERTER SEGUNDOS
void exercicio8() {
    int total, horas, minutos, segundos;

    printf("Digite o tempo em segundos: ");
    scanf("%d", &total);

    horas = total / 3600;
    minutos = (total % 3600) / 60;
    segundos = total % 60;

    printf("Tempo: %d:%d:%d\n", horas, minutos, segundos);
}

// EXERCICIO 9 - CONSUMO DE COMBUSTIVEL
void exercicio9() {
    double horas, velocidade, distancia, litros;

    printf("Digite o tempo da viagem em horas: ");
    scanf("%lf", &horas);

    printf("Digite a velocidade media em km/h: ");
    scanf("%lf", &velocidade);

    distancia = horas * velocidade;
    litros = distancia / 12.0;

    printf("Combustivel gasto: %.3lf litros\n", litros);
}

// EXERCICIO 10 - MAIOR ENTRE TRES VALORES
void exercicio10() {
    double a, b, c, maiorAB, maior;

    printf("Digite tres valores: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    maiorAB = (a + b + fabs(a - b)) / 2;
    maior = (maiorAB + c + fabs(maiorAB - c)) / 2;

    printf("%.2lf eh o maior\n", maior);
}

// FUNCAO PARA PAUSAR O PROGRAMA
void pausar() {
    printf("\nPressione ENTER para continuar...");

    while (getchar() != '\n');
    getchar();

    system("cls");
}

// FUNCAO DO MENU
void menu() {
    int opcao;

    do {
        printf("\n========== MENU - LISTA 2 ==========\n");
        printf("1 - Ano de nascimento\n");
        printf("2 - Km/h para m/s\n");
        printf("3 - Reais para dolares\n");
        printf("4 - Celsius para Fahrenheit\n");
        printf("5 - Graus para radianos\n");
        printf("6 - Antecessor e sucessor\n");
        printf("7 - Divisao do premio\n");
        printf("8 - Converter segundos\n");
        printf("9 - Consumo de combustivel\n");
        printf("10 - Maior entre tres valores\n");
        printf("0 - Sair\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        printf("\n");

        if (opcao == 1) {
            exercicio1();
        }
        else if (opcao == 2) {
            exercicio2();
        }
        else if (opcao == 3) {
            exercicio3();
        }
        else if (opcao == 4) {
            exercicio4();
        }
        else if (opcao == 5) {
            exercicio5();
        }
        else if (opcao == 6) {
            exercicio6();
        }
        else if (opcao == 7) {
            exercicio7();
        }
        else if (opcao == 8) {
            exercicio8();
        }
        else if (opcao == 9) {
            exercicio9();
        }
        else if (opcao == 10) {
            exercicio10();
        }
        else if (opcao == 0) {
            printf("Encerrando o programa...\n");
        }
        else {
            printf("Opcao invalida!\n");
        }

        if (opcao != 0) {
            pausar();
        }

    } while (opcao != 0);
}

// FUNCAO PRINCIPAL
int main() {
    menu();

    return 0;
}
