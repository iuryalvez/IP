#include <stdio.h>
#define MAX 100

int main () {

    int A[MAX][MAX];
    int n;
    int i, j, c;
    scanf("%d", &n);
    for (i = 0; i < n; i ++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    c = n-1;
    for (i = 0; i < n; i++) {
        for (j = n-1; j >= 0; j--) {
            if (j == c) {
                printf("%d\n", A[i][j]);
                c--;
                break;
            }
        }
    }


    return 0;
}