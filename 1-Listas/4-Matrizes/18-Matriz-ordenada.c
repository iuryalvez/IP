#include <stdio.h>
#define MAX 100

int main () {
    int M[MAX][MAX];
    int dim;
    int i, j, k;
    int temp;
    scanf("%d", &dim);
    for (i = 0; i < dim; i++) {
        for (j = 0; j < dim; j++) {
            scanf("%d", &M[i][j]);
        }
    } 
    for (i = 0; i < dim; i++) {
        for (j = 0; j < dim; j++) {
            for (k = 0; k < dim && k != j; k++) {
                if (M[j][i] < M[k][i]) {
                    temp = M[j][i];
                    M[j][i] = M[k][i];
                    M[k][i] = temp; 
                    // printf("M[%d][%d]: %d\n", j, i, M[j][i]);
                }
            }
        }
    }
    for (i = 0; i < dim; i++) {
        for (j = 0; j < dim; j++) {
            printf("%d", M[i][j]);
            if (j != dim-1) printf(" ");
        }
        printf("\n");
    } 
    return 0;
}
/* 5
5 5 5 5 5
4 4 4 4 4
3 3 3 3 3
2 2 2 2 2 
1 1 1 1 1
*/