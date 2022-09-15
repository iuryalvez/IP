#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float num, den;
    float res;
} frac;

int main () {

    frac *f = NULL;
    int n; 
    int i, j, k, l, c;
    char ctrl;
    scanf("%d", &n);
    if (n > 30 || n < 1) return 0;
    for (i = 1; i <= n; i++) {
        f = (frac *) malloc(10000*sizeof(frac)); 
        c = 0;
        j = 0;
        ctrl = 0;
        while (ctrl != '\n') {
            scanf("%f/%f", &f[j].num, &f[j].den);
            f[j].res = f[j].num/f[j].den;
            // printf("%.0f/%.0f ",f[j].num,f[j].den);
            j++;
            scanf("%c", &ctrl);
        }
        printf("Caso de teste %d\n", i);
        for (k = 0; k < j; k++) {
            for (l = k+1; l < j; l++) {
                if (f[k].res == f[l].res) {
                    printf("%.0f/%.0f equivalente a %.0f/%.0f\n", f[k].num,f[k].den,f[l].num,f[l].den);
                    c++;
                }
            }
        }
        if (c == 0) printf("Nao ha fracoes equivalentes na sequencia\n");
        free(f);
    }
    // free(f);
    return 0;
}