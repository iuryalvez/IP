#include <stdio.h>

int main () {

    int a, r, n;
    int contador;
    int resultado;

    scanf("%d %d %d", &a, &r, &n);

    resultado = 0;   

    for (contador = 0; contador < n; contador ++) {

        resultado += a + contador*r;

    } printf("%d", resultado);

    return 0;
}