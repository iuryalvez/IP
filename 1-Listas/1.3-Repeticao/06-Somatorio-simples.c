#include <stdio.h>

int main () {

    double valor;
    double soma;
    double contador;
    soma = 0;

    scanf("%lf", &valor);

    if (valor > 1) {
        for (contador = 1; contador <= valor; contador ++) {

            soma += 1/contador;

        } printf("%.6lf", soma);

    } else printf("Numero invalido!\n");

    return 0;
}