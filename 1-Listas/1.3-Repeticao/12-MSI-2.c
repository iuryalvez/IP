#include <stdio.h>

int main () {

    int n;
    int contador;
    int x, x1;
    int t, msi;
    
    t = 1;
    msi = 0;

    scanf("%i", &n);
    
    if (n <= 0) return 0;

    scanf("%i", &x1);

    if (n == 1) {
        printf("O comprimento do segmento de numeros iguais e: %i\n", t);
        return 0;
    }

    for (contador = 1; contador < n; contador ++) {
        
        scanf("%i", &x);
        
        if (x == x1) t++;
        else t = 1;
        if (t > msi) msi = t;

        x1 = x;

    }

    printf("O comprimento do segmento de numeros iguais e: %i\n", msi);

    return 0;
}