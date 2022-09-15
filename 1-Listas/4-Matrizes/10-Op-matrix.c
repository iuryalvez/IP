#include <stdio.h>
#define MAX 100

int main () {

    int M[MAX][MAX];
    int dim;
    int l, c;
    int tmp;
    int d;

    scanf("%d", &dim);
    
    d = 0;
    
    for (l = 0; l < dim; l++) {
        for (c = 0; c < dim; c++) {
            scanf("%i", &M[l][c]);
            if (l == c) d += M[l][c];
        }
    }
    // printf("d:%d\n",d);
    for (l = 0; l < dim; l++) {
        for (c = 0; c < dim; c++) {
            tmp = (d*M[l][c])+M[c][l];
            printf("%i", tmp);
            if (c != dim-1) printf(" ");
        }
        printf("\n");
    }

   return 0;
}