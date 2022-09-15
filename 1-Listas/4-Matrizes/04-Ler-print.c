#include <stdio.h> 
#define MAX 10

int main () {

    int A[MAX][MAX];
    int m, n;
    int i, j;

    scanf("%d", &m);
    while (m <= 0 || m > MAX) scanf("%d", &m);    
    scanf("%d", &n);
    while (n <= 0 || n > MAX) scanf("%d", &n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }    
    for (i = 0; i < m; i++) {
        printf("linha %d: ", i+1);
        for (j = 0; j < n; j++) {
            printf("%d", A[i][j]);
            if (j != n-1) printf(",");
        }
        printf("\n");
    }    
    return 0;
}