#include <stdio.h>
#include <stdlib.h>

void scaneia_matrix_mn(int **M, int nl, int nc) {
    int i, j;
    for (i = 0; i < nl; i++) {
        for (j = 0; j < nc; j++) {
            scanf("%d", &M[i][j]);
        }
    }
}

int ** aloca_matrix_mn(int nl, int nc) {
    int i;
    int **M;
    M = (int **) calloc(nl, sizeof(int*));
    for (i = 0; i < nl; i++) {
        M[i] = (int *) calloc (nc, sizeof(int));
    }
    scaneia_matrix_mn(M, nl, nc);
    return M;
}

void print_matrix_mn(int **M, int nl, int nc) {
    int i, j;
    for (i = 0; i < nl; i++) {
        for (j = 0; j < nc; j++) {
            printf("%d", M[i][j]);
            if (j != nc-1) printf(" ");
        } 
        printf("\n");
    }
}

void libera_matrix_mn( int ** m, int nl) {
    int i;
    for (i = 0; i < nl; i++) free (m[i]);
    free (m);
}

int main () {

    int l, c;
    int i, j;
    int maior, menor;
    int mi, mj, mni, mnj;
    int temp;
    int **M;

    scanf("%d %d", &l, &c);
    if (l < 1 || l > 1000) return 0;
    if (c < 1 || c > 1000) return 0;
    M = aloca_matrix_mn(l,c);
    maior = -9999;
    menor = 99999;
    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) {
            if (M[i][j] > maior) {
                maior = M[i][j];
                mi = i;
                mj = j;
            }
            if (M[i][j] < menor) {
                menor = M[i][j];
                mni = i;
                mnj = j;
            } 
        }
    }
    temp = M[mi][mj];
    M[mi][mj] = M[mni][mnj];
    M[mni][mnj] = temp;

    print_matrix_mn(M,l,c);
    libera_matrix_mn(M,l);
    return 0;
}

