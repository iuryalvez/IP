#include <stdio.h>

#define TAXA_3H 10.0
#define TAXA_1H 5.0

int main () {

    int horas1, horas2;
    float valor;

    scanf("%i", &horas1);

    if (horas1 >= 3) {
        horas2 = horas1 - (horas1 % 3);
        valor = (horas2 / 3 * TAXA_3H) + (horas1 % 3 * TAXA_1H);
        printf("O VALOR A PAGAR E = %.2f\n", valor);
    } else {
        valor = horas1 * TAXA_1H;
        printf("O VALOR A PAGAR E = %.2f\n", valor);
    }
    return 0;
}