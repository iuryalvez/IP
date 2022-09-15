#include <stdio.h>
#define DIM 6

int main () {

    int M[DIM][DIM];
    int l, c;
    int s, ms;

    for (l = 0; l < DIM; l++) {
        for (c = 0; c < DIM; c++) {
            scanf("%d", &M[l][c]);
        }
    }
    ms = -64;
    for (l = 1; l < DIM-1; l++) {
        for (c = 1; c < DIM-1; c++) {
            s = M[l][c]+M[l-1][c-1]+M[l-1][c]+M[l-1][c+1]+M[l+1][c-1]+M[l+1][c]+M[l+1][c+1];
            if (s > ms) ms = s;
        }
    }
    printf("%d\n", ms);

    return 0;
}