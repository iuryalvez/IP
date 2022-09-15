#include <stdio.h>
#define MAX 100

int main () {
    unsigned long int D[MAX][MAX];
    unsigned long int m, n;
    unsigned long int i, j;
    double c1, c2, t;
    unsigned long int maior, menor;
    maior = 0;
    menor = 100000;
    scanf("%ld %ld", &m, &n);
    if (m < 1 || n > 1000) return 0;
    t = m*n;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%ld", &D[i][j]);
        }
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (D[i][j] > maior) maior = D[i][j];
            if (D[i][j] < menor) menor = D[i][j];
        }
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (D[i][j] == maior) c1++;
            if (D[i][j] == menor) c2++;
        }
    }
    c1 = (c1/t)*100;
    c2 = (c2/t)*100;
    printf("%ld %.2lf%%\n", menor, c2);
    printf("%ld %.2lf%%\n", maior, c1);
    return 0;
}