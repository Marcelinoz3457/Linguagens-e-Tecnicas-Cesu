#include <stdio.h>

int main() {
/*
    int n, resultado;
    int bit64, bit32, bit16, bit8, bit4, bit2, bit1;

    printf("Entre com o valor de N: ");
    scanf("%d", &n);

    resultado = n;

    bit64 = resultado % 2;
    resultado = resultado / 2;

    bit32 = resultado % 2;
    resultado = resultado / 2;

    bit16 = resultado % 2;
    resultado = resultado / 2;

    bit8 = resultado % 2;
    resultado = resultado / 2;

    bit4 = resultado % 2;
    resultado = resultado / 2;

    bit2 = resultado % 2;
    resultado = resultado / 2;

    bit1 = resultado % 2;

    printf("O numero %d em binario = %d%d%d%d%d%d%d", n, bit1, bit2, bit4, bit8, bit16, bit32, bit64);
    
    */
    int x1, x2, y1, y2;
    float dist;

    printf("Entre com os valores para p1(x1,y1):\n");
    scanf("%d", &x1);
    scanf("%d", &y1);

    printf("Entre com os valores para p2(x2,y2):\n");
    scanf("%d", &x2);
    scanf("%d", &y2);

    dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("Leitura: (%d,%d) (%d,%d)\n", x1, y1, x2, y2);
    printf("Distancia entre os pontos: %.2f\n", dist); // serve para descobrir as cordenadas de um plano cartesiano

    return 0;
}
