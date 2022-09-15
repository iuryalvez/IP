#include <stdio.h>

#define MAX 5000

int main () {

    int n;
    int i, j, cont, cont2;
    int v[MAX];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    cont2 = 0; 
    for (i = 0; i < n; i++) {
        cont = 0;
        for (j = 0; j < n; j++) {
            if (v[i] != v[j] && j != i) cont++;
            // printf("i:%i j:%i\n", i, j);
        }
        if (cont == n-1) cont2++;
    }
    printf("%i\n", cont2);
    return 0;
}