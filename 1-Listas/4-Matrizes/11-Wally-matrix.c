#include <stdio.h>

#define DIM 100

#define WALLY 1111
#define WALLY_UP 4
#define WALLY_LEFT 0
#define WALLY_RIGHT 0
#define WALLY_DOWN 8

int main () {

    int A[DIM][DIM];
    int l, c;
    int m, n;
    int it, id, ir, il;

    scanf("%d %d", &m, &n);

    for (l = 0; l < m; l++) {
        for (c = 0; c < n; c++) {
            scanf("%d", &A[l][c]);
        }
    }
    for (l = 0; l < m; l++) {
        for (c = 0; c < n; c++) {
            if (A[l][c] == WALLY) {
                it = l-1;
                id = l+1;
                il = c-1;
                ir = c+1;
                if (it < 0) it = m - 1;
                if (id >= m) id = 0;
                if (il < 0) il = n - 1;
                if (ir >= n) ir = 0;
                if (A[it][c]==WALLY_UP && A[l][il]==WALLY_LEFT && A[l][ir]==WALLY_RIGHT && A[id][c]==WALLY_DOWN) {
                    printf("%d %d", l, c);
                    return 0;
                }
            }
        }
    }
    printf("WALLY NAO ESTA NA MATRIZ\n");

    return 0;
}