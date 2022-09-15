#include <stdio.h>

#define MAX 100

/**
* Essa função lê um vetor de n números inteiros que formam um conjunto válido.
* A função lê uma sequência de números até encontrar uma quantidade de
* n números únicos.
* @param vect vetor de números inteiros
* @param n quantidade de números únicos a serem lidos
* @return o vetor vect é preenchido com números não repetidos
*/
void le_conjunto(int * vect, int n);

int main () {

    int vect[MAX];
    int n;
    
    scanf("%d", &n);
    if (n < 1 || n > 100) return 0;

    le_conjunto(vect, n); //le e printa.

    return 0;
}

void le_conjunto (int * vect, int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        scanf("%d", &vect[i]);
        for (j = 0; j < i && i != j; j++) {
            while (vect [i] == vect[j] && j != i) {
                scanf("%d", &vect[i]);
                j = 0;
            }
        }
        // printf("%d ", vect[i]);
    }   
    for (i = 0; i < n; i++) {
        if (i == 0) printf("(%d,", vect[i]);
        else if (i != 0 && i != n-1) printf("%d,", vect[i]);
        else printf("%d)", vect[i]);
    }
}
