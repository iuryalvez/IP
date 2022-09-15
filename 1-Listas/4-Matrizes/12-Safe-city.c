#include <stdio.h> 
#define MAX 102

int main () {
    int n, cont;
    int Q[MAX][MAX];
    int l, c;
    scanf("%d", &n);
    if (n < 1 || n > 100) return 0;
    for (l = 0; l < n+1; l++) {
        for (c = 0; c < n+1; c++) {
            scanf("%d", &Q[l][c]);
        }
    }
    for (l = 0; l < n; l++) {
        for (c = 0; c < n; c++) {
            cont = 0;
            if (Q[l][c] == 1) cont++;
            if (Q[l][c+1] == 1) cont++;
            if (Q[l+1][c] == 1) cont++;
            if (Q[l+1][c+1] == 1) cont++;
            if (cont >= 2) printf("S");
            else printf("U");
        }
        printf("\n");
    }
    return 0;
}