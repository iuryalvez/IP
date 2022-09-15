#include <stdio.h>
#include <stdlib.h>

// void scaneia_matrix(int M[9][9]) {
//     int l, c;
//     for (l = 0; l < 9; l++) {
//         for (c = 0; c < 9; c++) {
//             scanf("%d", &M[l][c]);
//         }
//     }
// }

// void aloca_matrix(int **M, int nl) {
//     int i;
//     M = (int **) calloc(nl, sizeof(int*));
//     for (i = 0; i < nl; i++) {
//         M[i] = (int *) calloc (nl, sizeof(int));
//     }
// }

// void libera_matrix( int ** m, int nl) {
//     int i;
//     for (i = 0; i < nl; i++) free (m[i]);
//     free (m);
// }
int check_menor (int m[3][3]) {
    int i, j, n, c=0;
    for (n = 1; n <= 9; n++) {
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                if (m[i][j] == n) c++;
            }
        }
        // printf("c: %d\n", c);
        if (c > 1) return 0;
        c = 0;
    }
    return 1;
}

int valida_sudoku (int M[9][9]) {
    int i, j, k, l, c=0;
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            if (M[i][j] < 1 || M[i][j] > 9) return 0;
            for (k = j; k < 9; k++) {
                if (M[i][j] == M[i][k]) c++;
                if (M[j][i] == M[k][i]) c++;
            }
            if (c > 2) return 0;
            c = 0;
        }
    }
    int m[3][3];
    for (i = 0; i < 9; i+=3) {
        for (j = 0; j < 9; j+=3) {
            for (k = 0; k < 3; k++) {
                for (l = 0; l < 3; l++) {
                    m[k][l] = M[k+i][l+j];
                }
            }
            if (!check_menor(m)) {
                return 0;
            }
        }
    }
    return 1;
}

int main () {

    int M[9][9];
    // M = NULL;
    int val;
    int i, j;

    // aloca_matrix(M,9);
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            scanf("%d", &M[i][j]);
        }
    } 
    // scaneia_matrix(&M);

    val = valida_sudoku(M);
    if (val == 1) printf("valido\n");
    else printf("invalido\n");

    // libera_matrix(M,9);
    return 0;
}