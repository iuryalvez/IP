#include <stdio.h>
#include <stdlib.h>

#define MAX 1000

typedef struct {
    int numJogo;
    int numero[6];
} CARTELA;

typedef struct {
    int concurso;
    int sorts[6];
} SORT;

int main () {
    SORT *s;
    CARTELA c;
    // c = (CARTELA) malloc(sizeof(CARTELA));
    s = (SORT *) malloc(MAX*sizeof(SORT));
    int n;
    int i, j, k;
    int cont, cc;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &s[i].concurso);
        for (j = 0; j < 6; j++) {
            scanf("%d", &s[i].sorts[j]);
        }
    }
    scanf("%d", &c.numJogo);
    for (i = 0; i < 6; i++) {
        scanf("%d", &c.numero[i]);
    }
    cc = 0;
    for (i = 0; i < n; i++) {
        cont = 0;
        for (j = 0; j < 6; j++) {
            for (k = 0; k < 6; k++) {
                if (s[i].sorts[j] == c.numero[k]) {
                    cont++;
                }
                    
            }
        }
        if (cont == 4) {
            printf("QUADRA %d: ", s[i].concurso);
            for (j = 0; j < 6; j++) {
                for (k = 0; k < 6; k++) {
                    if (s[i].sorts[j] == c.numero[k]) {
                        printf("%d ", s[i].sorts[j]);                     
                    }
                }
            }
            printf("\n");
        }
        else if (cont == 5) {
            printf("QUINA %d: ", s[i].concurso);
            for (j = 0; j < 6; j++) {
                for (k = 0; k < 6; k++) {
                    if (s[i].sorts[j] == c.numero[k]) {
                        printf("%d ", s[i].sorts[j]);                     
                    }
                }
            }
            printf("\n");
        }
        else if (cont == 6) {
            printf("SENA %d: ", s[i].concurso);
            for (j = 0; j < 6; j++) {
                for (k = 0; k < 6; k++) {
                    if (s[i].sorts[j] == c.numero[k]) {
                        printf("%d ", s[i].sorts[j]);                     
                    }
                }
            }
            printf("\n");
        }
        else cc++;
    }
    if (cc == n) printf("NENHUMA CARTELA PREMIADA PARA O CONCURSO %d\n", c.numJogo);
    free (s);
    // free (c);
    // free (n);
    return 0;
}