#include <stdio.h>
#include <math.h>

int main () {

    float valor, valor1, valor2, valor3;

    scanf("%f", &valor);

    valor1 = roundf(valor * 10) / 10;
    valor2 = roundf(valor * 100) / 100;
    valor3 = roundf(valor * 1000) / 1000;

    printf("%.6f\n", valor1);
    printf("%.6f\n", valor2);
    printf("%.6f\n", valor3);

    return 0;
}
