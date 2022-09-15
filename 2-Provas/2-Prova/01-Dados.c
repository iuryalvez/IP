#include <stdio.h>

int main () {

    int n; // n;
    int d1; // x;
    int d2; // y;
    int k; // possibilidades;

    k = 0;

    scanf("%i", &n);

    if (n > 12) {
        printf("Combinacao impossivel\n");
        return 0;
    }

    for (d1 = 1; d1 <= 6; d1 ++) {
        
        for (d2 = 1; d2 <= 6; d2++) {

            if (d1 + d2 == n && d1 != d2) {
                printf("D1: %i, D2: %i\n", d1, d2);
                k++;
            }
        }
    }

    if (k > 0) printf("Ha %i possibilidades\n", k);
    else printf("Combinacao impossivel\n");
    
    return 0;
}