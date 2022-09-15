#include <stdio.h>

#define multiplicador 1000000

int main () {

    float n;
    int num, den;
    int cont;

    den = multiplicador;

    scanf("%f", &n);

    n *= multiplicador;
    num = (int)n;

    cont = 2;

    for ( ; cont <= den; cont++) {
        if (num % cont == 0 && den % cont == 0) {
            num /= cont;
            den /= cont;
            cont = 1;
        }
    }
    printf("%i/%i\n", num, den);

    return 0;
}