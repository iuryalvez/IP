#include <stdio.h>

int main () {

    int n, cont;

    while (scanf("%i", &n) != EOF) {

        if (n <= 0) printf("Fatoracao nao e possivel para o numero %i!\n", n);
        else {
            printf("%i = ", n);
            for (cont = 2; cont <= n; ) {
                if (nprimo(cont) == 2 && n % cont == 0) {
                    printf("%i", cont);
                    if (cont != n) printf(" x ");
                    else printf("\n");
                    n /= cont;
                    cont = 2;
                } else cont++;
            }
        }
    }
    return 0;
}

int nprimo (int cont) {    
    int d, contador;
    contador = 0;
        for (d = 1; d <= cont; d++) {  
            if (cont % d == 0) contador++;
        }
    return contador;  
}