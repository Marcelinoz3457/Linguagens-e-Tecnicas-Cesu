
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// FUNCAO PARA CALCULAR O INSS
float calcularINSS(float salario) {
    float desconto;

    if (salario <= 1412.00) {
        desconto = salario * 0.075;
    }
    else if (salario <= 2666.68) {
        desconto = salario * 0.09;
    }
    else if (salario <= 4000.03) {
        desconto = salario * 0.12;
    }
    else {
        desconto = salario * 0.14;
    }

    return desconto;
}

// FUNCAO PARA CALCULAR O IRPF
float calcularIRPF(float salario) {
    float imposto;

    if (salario <= 2259.20) {
        imposto = 0;
    }
    else if (salario <= 2826.65) {
        imposto = salario * 0.075 - 169.44;
    }
    else if (salario <= 3751.05) {
        imposto = salario * 0.15 - 381.44;
    }
    else if (salario <= 4664.68) {
        imposto = salario * 0.225 - 662.77;
    }
    else {
        imposto = salario * 0.275 - 896.00;
    }

    return imposto;
}

// EXERCICIO 1 - VALIDADOR DE CPF
void exercicio1() {
    char cpf[20];
    int numeros[11];
    int i, soma, resto, peso;
    int digito1, digito2;
    int tamanho = 0;
    int iguais = 1;

    printf("Digite o CPF com 11 numeros: ");
    scanf("%19s", cpf);

    while (cpf[tamanho] != '\0') {
        tamanho++;
    }

    if (tamanho != 11) {
        printf("CPF invalido! Digite 11 numeros.\n");
        return;
    }

    for (i = 0; i < 11; i++) {
        if (cpf[i] < '0' || cpf[i] > '9') {
            printf("CPF invalido! Use apenas numeros.\n");
            return;
        }

        numeros[i] = cpf[i] - '0';

        if (numeros[i] != numeros[0]) {
            iguais = 0;
        }
    }

    if (iguais == 1) {
        printf("CPF invalido!\n");
        return;
    }

    soma = 0;
    peso = 10;

    for (i = 0; i < 9; i++) {
        soma = soma + numeros[i] * peso;
        peso--;
    }

    resto = (soma * 10) % 11;

    if (resto == 10) {
        digito1 = 0;
    }
    else {
        digito1 = resto;
    }

    soma = 0;
    peso = 11;

    for (i = 0; i < 10; i++) {
        soma = soma + numeros[i] * peso;
        peso--;
    }

    resto = (soma * 10) % 11;

    if (resto == 10) {
        digito2 = 0;
    }
    else {
        digito2 = resto;
    }

    if (digito1 == numeros[9] &&
        digito2 == numeros[10]) {
        printf("CPF VALIDO!\n");
    }
    else {
        printf("CPF INVALIDO!\n");
    }
}

// EXERCICIO 2 - CONVERSOR DE TEMPERATURA
void exercicio2() {
    float temperatura, resultado;
    char escala;

    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);

    printf("Digite C para Celsius ou F para Fahrenheit: ");
    scanf(" %c", &escala);

    if (escala == 'C' || escala == 'c') {
        resultado = temperatura * 9.0 / 5.0 + 32;

        printf("%.2f C = %.2f F\n",
               temperatura, resultado);
    }
    else if (escala == 'F' || escala == 'f') {
        resultado = (temperatura - 32) * 5.0 / 9.0;

        printf("%.2f F = %.2f C\n",
               temperatura, resultado);
    }
    else {
        printf("Escala invalida!\n");
    }
}

// EXERCICIO 3 - MEDIA ESCOLAR
void exercicio3() {
    char nome[50];
    float n1, n2, n3, media, falta;

    printf("Digite o nome do aluno: ");
    scanf("%49s", nome);

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3;

    printf("\nAluno: %s\n", nome);
    printf("Media: %.2f\n", media);

    if (media >= 7 && media <= 10) {
        printf("Situacao: APROVADO\n");
    }
    else if (media >= 4 && media < 7) {
        falta = 10 - media;

        printf("Situacao: EXAME\n");
        printf("Faltam %.2f pontos para nota 10.\n",
               falta);
    }
    else {
        printf("Situacao: REPROVADO\n");
    }
}

// EXERCICIO 5 - CAIXA ELETRONICO
void exercicio5() {
    int valor, resto;
    int n100, n50, n10, n5, n2, n1;

    printf("Digite o valor do saque: R$ ");
    scanf("%d", &valor);

    if (valor <= 0) {
        printf("Valor invalido!\n");
        return;
    }

    resto = valor;

    n100 = resto / 100;
    resto = resto % 100;

    n50 = resto / 50;
    resto = resto % 50;

    n10 = resto / 10;
    resto = resto % 10;

    n5 = resto / 5;
    resto = resto % 5;

    n2 = resto / 2;
    resto = resto % 2;

    n1 = resto;

    printf("\n===== RESUMO DO SAQUE =====\n");
    printf("Valor: R$ %d\n", valor);
    printf("Notas de 100: %d\n", n100);
    printf("Notas de 50: %d\n", n50);
    printf("Notas de 10: %d\n", n10);
    printf("Notas de 5: %d\n", n5);
    printf("Notas de 2: %d\n", n2);
    printf("Notas de 1: %d\n", n1);
}

// EXERCICIO 6 - TRAJETORIA DE PROJETIL
void exercicio6() {
    float v0, angulo, rad;
    float g = 9.8;
    float k = 0.5;
    float vx, vy, x, y, t, dt;
    float ax, ay;

    printf("Digite a velocidade inicial (m/s): ");
    scanf("%f", &v0);

    printf("Digite o angulo de lancamento: ");
    scanf("%f", &angulo);

    if (v0 <= 0 || angulo <= 0 || angulo >= 180) {
        printf("Dados de lancamento invalidos!\n");
        return;
    }

    rad = angulo * 3.14159265 / 180;

    vx = v0 * cos(rad);
    vy = v0 * sin(rad);

    x = 0;
    y = 0;
    t = 0;
    dt = 0.01;

    while (1) {
        ax = -k * vx;
        ay = -g - k * vy;

        vx = vx + ax * dt;
        vy = vy + ay * dt;

        x = x + vx * dt;
        y = y + vy * dt;

        t = t + dt;

        if (y <= 0 && t > 0.02) {
            break;
        }
    }

    printf("\n===== RESULTADO =====\n");
    printf("Alcance: %.2f metros\n", x);
    printf("Tempo de voo: %.2f segundos\n", t);
}

// EXERCICIO 7 - CALCULO DO INSS
void exercicio7() {
    float salario, inss;

    printf("Digite o salario bruto: R$ ");
    scanf("%f", &salario);

    if (salario < 0) {
        printf("Salario invalido!\n");
        return;
    }

    inss = calcularINSS(salario);

    printf("Desconto do INSS: R$ %.2f\n", inss);
}

// EXERCICIO 8 - CALCULO DO IRPF
void exercicio8() {
    float salario, imposto;

    printf("Digite o salario base: R$ ");
    scanf("%f", &salario);

    if (salario < 0) {
        printf("Salario invalido!\n");
        return;
    }

    imposto = calcularIRPF(salario);

    printf("Desconto do IRPF: R$ %.2f\n", imposto);
}

// EXERCICIO 9 - CONTRA-CHEQUE
void exercicio9() {
    float valorHora, horas;
    float bruto, inss, base, irpf, liquido;

    printf("Digite o valor da hora: R$ ");
    scanf("%f", &valorHora);

    printf("Digite as horas trabalhadas: ");
    scanf("%f", &horas);

    if (valorHora < 0 || horas < 0) {
        printf("Valores invalidos!\n");
        return;
    }

    bruto = valorHora * horas;

    inss = calcularINSS(bruto);
    base = bruto - inss;
    irpf = calcularIRPF(base);

    liquido = bruto - inss - irpf;

    printf("\n===== CONTRA-CHEQUE =====\n");
    printf("Salario bruto: R$ %.2f\n", bruto);
    printf("Desconto INSS: R$ %.2f\n", inss);
    printf("Desconto IRPF: R$ %.2f\n", irpf);
    printf("-------------------------\n");
    printf("Salario liquido: R$ %.2f\n", liquido);
}

// FUNCAO PARA PAUSAR
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
        printf("\n========== MENU - LISTA 3 ==========\n");
        printf("1 - Validador de CPF\n");
        printf("2 - Conversor de temperatura\n");
        printf("3 - Media escolar\n");
        printf("5 - Caixa eletronico\n");
        printf("6 - Trajetoria de projetil\n");
        printf("7 - Calculo de INSS\n");
        printf("8 - Calculo de IRPF\n");
        printf("9 - Contra-cheque\n");
        printf("0 - Sair\n");

        printf("Escolha uma opcao: ");
        if (scanf("%d", &opcao) != 1) {
            printf("Opcao invalida!\n");

            while (getchar() != '\n');
            opcao = -1;
            continue;
        }

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

            case 9:
                exercicio9();
                break;

            case 0:
                printf("Encerrando o programa...\n");
                break;

            default:
                printf("Opcao invalida!\n");
                break;
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
