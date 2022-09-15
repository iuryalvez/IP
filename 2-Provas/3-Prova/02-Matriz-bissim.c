#include <stdio.h>

#define NC 10
#define NL 10

int main () {

    int M[NL][NC];
    int n;
    int l, c;
    int cont = 0;

    scanf("%d", &n);
    if (n < 1 || n > 10) {
        printf("dimensao invalida\n");
        return 0;
    }
    for (l = 0; l < n; l++) {
        for (c = 0; c < n; c++) {
            scanf("%d", &M[l][c]);
        }
    }
    for (l = 0; l < n; l++) { // analia os numeros na vertical e horizontal. | e __.
        for (c = 0; c < n; c++) {
           if (M[l][c] != M[c][l]) cont++;
        // printf("d1 normal: %d invertido: %d\n", M[l][c], M[c][l]);
        }
    }
    for (l = 0; l < n; l++) {
        for (c = 0; c < n; c++) {
            if (M[l][c] != M[n-1-l][n-1-c]) cont++;
        //  printf("d2 normal: %d invertido: %d\n", M[l][c], M[n-1-l][n-1-c]); 
        }
    }
    
    if (cont > 0) printf("nao bissimetrica\n");
    else printf("bissimetrica\n");
    return 0;
}
/*
4
1 2 2 4
2 3 3 2
2 3 3 2
4 2 2 4

4
1 2 2 4
2 1 3 2
2 1 1 2
4 2 2 4

3
1 2 3
2 5 2
3 2 1
*/
