#include <stdio.h>

#define N_MAX 1000

int main () {

    int cont;
    int cp; // cconta par
    int elementos[N_MAX];
    int n;

    scanf("%i", &n);
    
    cp = 0;
    
    if (n < 1 || n > N_MAX) {
        printf("Tamanho Invalido\n", cp);
        return 0;
    }

    for (cont = 0; cont < n; cont++) {
        scanf("%d", &elementos[cont]);
    } 

    for (cont = 0; cont < n; cont++) {
        if (elementos[cont] % 2 == 0) {
            printf("%i ", elementos[cont]);
            cp++;
        }
    }
    
    printf("%i\n", cp);
    
    return 0;
}