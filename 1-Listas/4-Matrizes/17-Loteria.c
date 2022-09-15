#include <stdio.h>

int main () {

    int M[50000][6];
    int n;
    int i, j, c;
    int sort[6];
    int cont;
    int c4, c5, c6;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < 6; j++) {
            scanf("%d", &M[i][j]);
        }
    }
    
    for (i = 0; i < 6; i++) {
        scanf("%d", &sort[i]);
    }
    
    c4 = 0, c5 = 0; c6 = 0;
    for (i = 0; i < n; i++) {
        c = 0;
        cont = 0;
        for (j = 0; j < 6; j++) {
            for (c = 0; c < 6; c++) {
                if (sort[c] == M[i][j]) {
                cont++;
                }
            }
        }
        // printf("cont: %d\n", cont);
        if (cont == 4) c4++;
        if (cont == 5) c5++;
        if (cont == 6) c6++;
    }
    if (c6 > 0) printf("Houve %d acertador(es) da sena\n", c6);
    else printf("Nao houve acertador para sena\n");
    if (c5 > 0) printf("Houve %d acertador(es) da quina\n", c5);
    else printf("Nao houve acertador para quina\n");
    if (c4 > 0) printf("Houve %d acertador(es) da quadra\n", c4);
    else printf("Nao houve acertador para quadra\n");

    return 0;
}