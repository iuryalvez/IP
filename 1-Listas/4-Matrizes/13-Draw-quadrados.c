#include <stdio.h>
#define MAX 200

int main () {

    int M[MAX][MAX];
    int t, cf; //tamanho e cor de fundo
    int c, l, a, b, cor;
    int i, j, cont;
    t = -1;
    while (t < 0 || t > 200) scanf("%d", &t);
    cf = -1;
    while (cf < 0 || cf > 255) scanf("%d", &cf);
    for (i = 0; i < t; i++) {
        for (j = 0; j < t; j++) {
            M[i][j] = cf;
        }
    }
    while (1) {
        scanf("%d %d", &c, &l); //posicao do ponto central do quadrado
        if (c == -1 && l == -1) break;
        scanf("%d %d %d", &cor, &a, &b);
        if (cor < 0 || cor > 255 || a >= t-a ) continue;
        if (t-c-1 < a || c == 0 || l == 0 || l > t-1 || c > t-1) continue;
        cont = a*c;
        if (c == 1) cont = 4;
        switch (b) {
            case 1:
                for (i = l-a; i < l; i++) {
                    for (j = c-a; j <= c+a; j++) {
                        if (cont > 0) {
                        M[i][j] = cor;
                        M[j][i] = cor;
                        cont--;
                        }
                    }
                }
                cont = a*c;
                if (c == 1) cont = 4;
                for (i = l+a; i > l; i--) {
                    for (j = c+a; j >= c-a; j--) {
                        if (cont > 0) {
                        M[i][j] = cor;
                        M[j][i] = cor;
                        cont--;
                        }
                    }
                }
                break;
            case 2:
                for (i = l-a; i <= l+a; i++) {
                    for (j = c-a; j <= c+a; j++) {
                        M[i][j] = cor;
                    }
                }
                break;
            default: continue;
        } 
    }
    printf("P2\n%d %d\n255\n", t, t);
    for (i = 0; i < t; i++) {
        for (j = 0; j < t; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }

    return 0;
}