#include <stdio.h> 

#define DIM 2

int main () {

    float M[DIM][DIM];
    int l, c;
    float det;

    for (l = 0; l < DIM; l++) {
        for (c = 0; c < DIM; c++) {
            scanf("%f", &M[l][c]);
        }
    }
    det = M[0][0]*M[1][1]-M[0][1]*M[1][0];
    printf("%.2f\n", det);
    return 0;
}