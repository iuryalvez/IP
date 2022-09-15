#include <stdio.h>

int main () {

    int x;
    int contador, d;

    scanf("%d", &x);

    if (x < 0) { 
    printf("Numero invalido!\n"); 
    return 0; 
    }

    contador = 0;

    for (d = 1; d <= x; d++) {
        if (x % d == 0) contador ++;
    }
    if (contador == 2) printf("PRIMO\n", x);
    else printf("NAO PRIMO\n", x);

    return 0;
}