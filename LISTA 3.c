#include <stdio.h>
#include <math.h>

/* ==================================================================
   EXERCICIO 07: Funcao que calcula o desconto do INSS
   ================================================================== */
float calcularINSS(float salarioBruto) {
    float desconto;

    if (salarioBruto <= 1412.00) {
        desconto = salarioBruto * 0.075;
    } else if (salarioBruto <= 2666.68) {
        desconto = salarioBruto * 0.09;
    } else if (salarioBruto <= 4000.03) {
        desconto = salarioBruto * 0.12;
    } else {
        desconto = salarioBruto * 0.14;
    }

    return desconto;
}

/* ==================================================================
   EXERCICIO 08: Funcao que calcula o desconto do IRPF
   ================================================================== */
float calcularIRPF(float salarioBase) {
    float imposto;

    if (salarioBase <= 2259.20) {
        imposto = 0;
    } else if (salarioBase <= 2826.65) {
        imposto = (salarioBase * 0.075) - 169.44;
    } else if (salarioBase <= 3751.05) {
        imposto = (salarioBase * 0.15) - 381.44;
    } else if (salarioBase <= 4664.68) {
        imposto = (salarioBase * 0.225) - 662.77;
    } else {
        imposto = (salarioBase * 0.275) - 896.00;
    }

    return imposto;
}

/* ==================================================================
   EXERCICIO 01: Validador de CPF
   ================================================================== */
int exercicio01() {
    char cpf[20];
    int numeros[11];
    int i, tamanho, soma, resto, peso, digito1, digito2, valido;

    printf("\n--- Exercicio 01: Validador de CPF ---\n");
    printf("Digite o CPF (somente os 11 numeros, sem pontos ou traco): ");
    scanf("%s", cpf);

    tamanho = 0;
    while (cpf[tamanho] != '\0') {
        tamanho++;
    }

    if (tamanho != 11) {
        printf("CPF Invalido! Voce deve digitar exatamente 11 numeros.\n");
        return 0;
    }

    valido = 1;
    i = 0;
    while (i < 11) {
        if (cpf[i] < '0' || cpf[i] > '9') {
            valido = 0;
        }
        numeros[i] = cpf[i] - '0';
        i++;
    }

    if (valido == 0) {
        printf("CPF Invalido! Digite apenas numeros.\n");
        return 0;
    }

    soma = 0;
    peso = 10;
    i = 0;
    while (i < 9) {
        soma = soma + (numeros[i] * peso);
        peso--;
        i++;
    }
    resto = (soma * 10) % 11;
    if (resto == 10) {
        digito1 = 0;
    } else {
        digito1 = resto;
    }

    soma = 0;
    peso = 11;
    i = 0;
    while (i < 10) {
        soma = soma + (numeros[i] * peso);
        peso--;
        i++;
    }
    resto = (soma * 10) % 11;
    if (resto == 10) {
        digito2 = 0;
    } else {
        digito2 = resto;
    }

    if (digito1 == numeros[9] && digito2 == numeros[10]) {
        printf("\nResultado: CPF Valido!\n");
    } else {
        printf("\nResultado: CPF Invalido!\n");
    }

    return 1;
}

/* ==================================================================
   EXERCICIO 02: Conversor de temperatura Celsius/Fahrenheit
   ================================================================== */
int exercicio02() {
    float temperatura, resultado;
    char escala;

    printf("\n--- Exercicio 02: Conversor de Temperatura ---\n");
    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);

    printf("Essa temperatura esta em Celsius ou Fahrenheit? (digite C ou F): ");
    scanf(" %c", &escala);

    switch (escala) {
        case 'C':
        case 'c':
            resultado = (temperatura * 9.0 / 5.0) + 32;
            printf("\n%.2f C equivalem a %.2f F\n", temperatura, resultado);
            break;

        case 'F':
        case 'f':
            resultado = (temperatura - 32) * 5.0 / 9.0;
            printf("\n%.2f F equivalem a %.2f C\n", temperatura, resultado);
            break;

        default:
            printf("\nGrandeza invalida! Digite apenas C ou F.\n");
            break;
    }

    return 1;
}

/* ==================================================================
   EXERCICIO 03: Media escolar
   ================================================================== */
int exercicio03() {
    char nome[50];
    float n1, n2, n3, media, falta;

    printf("\n--- Exercicio 03: Media Escolar ---\n");
    printf("Digite o nome do aluno: ");
    scanf("%s", nome);

    printf("Digite a 1a nota: ");
    scanf("%f", &n1);
    printf("Digite a 2a nota: ");
    scanf("%f", &n2);
    printf("Digite a 3a nota: ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3;

    printf("\n----- RESULTADO -----\n");
    printf("Aluno: %s\n", nome);
    printf("Media final: %.2f\n", media);

    if (media >= 7.0 && media <= 10.0) {
        printf("Situacao: APROVADO\n");
        printf("(Mensagem em AZUL)\n");
    } else if (media >= 4.0 && media < 7.0) {
        falta = 10.0 - media;
        printf("Situacao: EXAME\n");
        printf("(Mensagem em VERDE)\n");
        printf("Faltam %.2f pontos para atingir a nota maxima (10.0)\n", falta);
    } else {
        printf("Situacao: REPROVADO\n");
        printf("(Mensagem em VERMELHO)\n");
    }

    return 1;
}

/* ==================================================================
   EXERCICIO 05: Caixa eletronico - menor quantidade de notas
   ================================================================== */
int exercicio05() {
    int valor, resto;
    int qtd100, qtd50, qtd10, qtd5, qtd2, qtd1;

    printf("\n--- Exercicio 05: Terminal Infinity Cash ---\n");
    printf("Digite o valor do saque: R$ ");
    scanf("%d", &valor);

    resto = valor;

    qtd100 = resto / 100;
    resto = resto % 100;

    qtd50 = resto / 50;
    resto = resto % 50;

    qtd10 = resto / 10;
    resto = resto % 10;

    qtd5 = resto / 5;
    resto = resto % 5;

    qtd2 = resto / 2;
    resto = resto % 2;

    qtd1 = resto;

    printf("\n========= RESUMO DO SAQUE =========\n");
    printf("Valor sacado: R$ %d\n\n", valor);
    printf("Notas de R$100: %d\n", qtd100);
    printf("Notas de R$50:  %d\n", qtd50);
    printf("Notas de R$10:  %d\n", qtd10);
    printf("Notas de R$5:   %d\n", qtd5);
    printf("Notas de R$2:   %d\n", qtd2);
    printf("Notas de R$1:   %d\n", qtd1);
    printf("====================================\n");

    return 1;
}

/* ==================================================================
   EXERCICIO 06: Trajetoria de projetil com resistencia do ar
   ================================================================== */
int exercicio06() {
    float v0, angulo, rad;
    float g, k;
    float vx, vy, x, y, t, dt, ax, ay;

    g = 9.8;
    k = 0.5;

    printf("\n--- Exercicio 06: Operacao ENIAC - Trajetoria ---\n");
    printf("Digite a velocidade inicial (v0) em m/s: ");
    scanf("%f", &v0);
    printf("Digite o angulo de lancamento (em graus): ");
    scanf("%f", &angulo);

    rad = angulo * (3.14159265 / 180.0);

    vx = v0 * cos(rad);
    vy = v0 * sin(rad);

    x = 0;
    y = 0;
    t = 0;
    dt = 0.01;

    while (1) {
        ax = -k * vx;
        ay = -g - (k * vy);

        vx = vx + (ax * dt);
        vy = vy + (ay * dt);

        x = x + (vx * dt);
        y = y + (vy * dt);

        t = t + dt;

        if (y <= 0 && t > 0.02) {
            break;
        }
    }

    printf("\n===== RESULTADO DA TRAJETORIA =====\n");
    printf("Alcance maximo:  %.2f metros\n", x);
    printf("Tempo de voo:    %.2f segundos\n", t);
    printf("====================================\n");

    return 1;
}

/* ==================================================================
   EXERCICIO 07: Teste isolado da funcao de INSS
   ================================================================== */
int exercicio07() {
    float salario, inss;

    printf("\n--- Exercicio 07: Calculo de INSS ---\n");
    printf("Digite o salario bruto: R$ ");
    scanf("%f", &salario);

    inss = calcularINSS(salario);

    printf("Desconto do INSS: R$ %.2f\n", inss);

    return 1;
}

/* ==================================================================
   EXERCICIO 08: Teste isolado da funcao de IRPF
   ================================================================== */
int exercicio08() {
    float salarioBase, irpf;

    printf("\n--- Exercicio 08: Calculo de IRPF ---\n");
    printf("Digite o salario-base (bruto - INSS): R$ ");
    scanf("%f", &salarioBase);

    irpf = calcularIRPF(salarioBase);

    printf("Desconto do IRPF: R$ %.2f\n", irpf);

    return 1;
}

/* ==================================================================
   EXERCICIO 09: Emissao do contra-cheque completo
   ================================================================== */
int exercicio09() {
    float valorHora, horasTrabalhadas;
    float salarioBruto, descontoINSS, salarioBase, descontoIRPF, salarioLiquido;

    printf("\n--- Exercicio 09: Emissao de Contra-cheque ---\n");
    printf("Digite o valor da hora trabalhada: R$ ");
    scanf("%f", &valorHora);

    printf("Digite a quantidade de horas trabalhadas no mes: ");
    scanf("%f", &horasTrabalhadas);

    salarioBruto = valorHora * horasTrabalhadas;

    descontoINSS = calcularINSS(salarioBruto);
    salarioBase = salarioBruto - descontoINSS;
    descontoIRPF = calcularIRPF(salarioBase);
    salarioLiquido = salarioBruto - descontoINSS - descontoIRPF;

    printf("\n======================================================\n");
    printf("    RECIBO DE PAGAMENTO DE SALARIO (CONTRA-CHEQUE)\n");
    printf("======================================================\n");
    printf(" Salario Bruto (Horas x Valor):   R$ %9.2f\n", salarioBruto);
    printf(" (-) Desconto INSS:               R$ %9.2f\n", descontoINSS);
    printf(" (-) Desconto IRPF:               R$ %9.2f\n", descontoIRPF);
    printf("------------------------------------------------------\n");
    printf(" LIQUIDO A RECEBER:               R$ %9.2f\n", salarioLiquido);
    printf("======================================================\n");

    return 1;
}

/* ==================================================================
   MENU PRINCIPAL
   ================================================================== */
int main() {
    int opcao, status;

    opcao = -1;
    while (opcao != 0) {
        printf("\n==========================================\n");
        printf("           TRABALHO - LISTA 3\n");
        printf("==========================================\n");
        printf(" 1 - Validador de CPF\n");
        printf(" 2 - Conversor de Temperatura\n");
        printf(" 3 - Media Escolar\n");
        printf(" 5 - Terminal Infinity Cash (caixa eletronico)\n");
        printf(" 6 - Operacao ENIAC (trajetoria)\n");
        printf(" 7 - Calculo de INSS\n");
        printf(" 8 - Calculo de IRPF\n");
        printf(" 9 - Emissao de Contra-cheque completo\n");
        printf(" 0 - Sair\n");
        printf("==========================================\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                status = exercicio01();
                break;
            case 2:
                status = exercicio02();
                break;
            case 3:
                status = exercicio03();
                break;
            case 5:
                status = exercicio05();
                break;
            case 6:
                status = exercicio06();
                break;
            case 7:
                status = exercicio07();
                break;
            case 8:
                status = exercicio08();
                break;
            case 9:
                status = exercicio09();
                break;
            case 0:
                status = 1;
                printf("\nEncerrando o programa...\n");
                break;
            default:
                status = 0;
                printf("\nOpcao invalida! Tente novamente.\n");
                break;
        }

        if (opcao >= 1 && opcao <= 9 && status == 0) {
            printf("\n(A operacao nao foi concluida com sucesso.)\n");
        }
    }

    return 0;
}
