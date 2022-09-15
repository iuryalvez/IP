#include <stdio.h>

#define DIM 2

int main () {

    float M[DIM][DIM];
    float temp;
    int m, n;
    for (m = 0; m < DIM; m++) {
        for (n = 0; n < DIM; n++) {
            scanf("%f", &M[m][n]);
        }
    }
    for (m = 0; m < DIM; m++) {
        for (n = 0; n < DIM; n++) {
            if (m == 0 && n == 0) {
                temp = (M[m][n]*M[m][n])+(M[m][n+1]*M[m+1][n]);
                printf("%.3f ", temp);
            }
            else if (m == 0 && n == 1) {
                temp = (M[m][n-1]*M[m][n])+(M[m][n]*M[m+1][n]);
                printf("%.3f", temp);
            }
            else if (m == 1 && n == 0) {
                temp = (M[m][n]*M[m-1][n])+(M[m][n+1]*M[m][n]);    
                printf("%.3f ", temp);
            }
            else if (m == 1 && n == 1) {
                temp = (M[m][n-1]*M[m-1][n])+(M[m][n]*M[m][n]);
                printf("%.3f", temp);
            }
        }
        printf("\n");
    }
    return 0;
}