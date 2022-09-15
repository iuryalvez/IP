#include <stdio.h>

#define MAX 100

int main () {
    int A[MAX][MAX];
    int n;
    int i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (j == i) printf("%d\n", A[i][j]);
        }
    }
    return 0;
}
