#include <stdio.h>

int main () {

    int valor;
    int contador;
    int temp;

    scanf("%d", &valor);

    temp = 1;

    if (valor == 0) {printf("0! = 1"); return 0;}
    for (contador = 0; contador < valor; contador ++) {
        temp *= valor;
        valor--;
    }
    printf("%d! = %d\n", valor, temp);

    return 0;
}