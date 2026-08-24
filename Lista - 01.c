#include <stdio.h>
#include <math.h>

int main() {

    // 1) ORDEM INVERSA
    int n1, n2;

    printf("1) Digite dois numeros inteiros: ");
    scanf("%d %d", &n1, &n2);

    printf("Ordem inversa: %d %d\n\n", n2, n1);


    // 2) NOTACAO CIENTIFICA
    double numero;
    int expoente = 0;

    printf("2) Digite um numero positivo: ");
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

    printf("Notacao cientifica: %.6lf x 10^%d\n\n", numero, expoente);


    // 3) BINARIO
    int n;
    int b1, b2, b3, b4, b5, b6, b7;

    printf("3) Digite um numero entre 0 e 64: ");
    scanf("%d", &n);

    b1 = n % 2;
    n = n / 2;

    b2 = n % 2;
    n = n / 2;

    b3 = n % 2;
    n = n / 2;

    b4 = n % 2;
    n = n / 2;

    b5 = n % 2;
    n = n / 2;

    b6 = n % 2;
    n = n / 2;

    b7 = n % 2;

    printf("Binario: %d%d%d%d%d%d%d\n\n",
           b7, b6, b5, b4, b3, b2, b1);


    // 4) SALARIO
    double salario, vendas, total;

    printf("4) Digite o salario fixo: ");
    scanf("%lf", &salario);

    printf("Digite o total de vendas: ");
    scanf("%lf", &vendas);

    total = salario + (vendas * 0.15);

    printf("TOTAL = R$ %.2lf\n\n", total);


    // 5) SOMA, MEDIA E PRODUTO
    double valor1, valor2, valor3, valor4;
    double soma, media, produto;

    printf("5) Digite quatro valores: ");
    scanf("%lf %lf %lf %lf",
          &valor1, &valor2, &valor3, &valor4);

    soma = valor1 + valor2 + valor3 + valor4;

    media = soma / 4;

    produto = valor1 * valor2 * valor3 * valor4;

    printf("Soma = %.2lf\n", soma);
    printf("Media = %.2lf\n", media);
    printf("Produto = %.2lf\n\n", produto);


    // 6) IDADE EM DIAS
    int dias, anos, meses, diasRestantes;

    printf("6) Digite a idade em dias: ");
    scanf("%d", &dias);

    anos = dias / 365;

    dias = dias % 365;

    meses = dias / 30;

    diasRestantes = dias % 30;

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n\n", diasRestantes);


    // 7) VOLUME DA ESFERA
    double raio, volume;
    double pi = 3.14159;

    printf("7) Digite o raio da esfera: ");
    scanf("%lf", &raio);

    volume = (4.0 / 3.0) * pi * raio * raio * raio;

    printf("VOLUME = %.3lf\n\n", volume);


    // 8) DISTANCIA ENTRE DOIS PONTOS
    double x1, y1, x2, y2;
    double distancia;

    printf("8) Digite x1 e y1: ");
    scanf("%lf %lf", &x1, &y1);

    printf("Digite x2 e y2: ");
    scanf("%lf %lf", &x2, &y2);

    distancia = sqrt(
        (x2 - x1) * (x2 - x1) +
        (y2 - y1) * (y2 - y1)
    );

    printf("Distancia = %.4lf\n", distancia);


    return 0;
}
