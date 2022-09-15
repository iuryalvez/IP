#include <stdio.h>

int main () {

    int c, d, u, valor, valor2;

    scanf("%d%d%d", &c, &d, &u);

    if (c >= 10 || d >= 10 || u >= 10) {
        printf("DIGITO INVALIDO\n");
    }
    else {
        c = c * 100;
        d = d * 10;
        valor = c + d + u; 
        valor2 = valor * valor;
        printf("%d, %d\n", valor, valor2);
    }
    return 0;
}