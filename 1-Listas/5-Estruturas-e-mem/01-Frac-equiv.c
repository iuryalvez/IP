#include <stdio.h>
#include <stdlib.h>

#define L 30
#define C 50

struct Calc {
    double num;
    double den;
    double res;
};

int main () {

    int n, m, c=1;
    int i, j, cnt;
    struct Calc calc[C];
    
    scanf("%d", &n);
    if (n > L) return 0;
    while (n--) {
        scanf("%d", &m);
        if (m > C) return 0;
        for (i = 0; i < m; i++) {
            scanf("%lf/%lf", &calc[i].num, &calc[i].den);
            calc[i].res = calc[i].num / calc[i].den;
        }
        printf("Caso de teste %d\n", c);
        cnt = 0;
        for (i = 0; i < m; i++) {
            for (j = i+1; j < m; j++) {
                if (calc[i].res == calc[j].res) {
                    printf("%.0lf/%.0lf equivalente a %.0lf/%.0lf\n", calc[i].num, calc[i].den, calc[j].num, calc[j].den);
                    cnt++;
                }
            }
        }
        if (cnt == 0) printf("Nao ha fracoes equivalentes na sequencia\n");
        c++;
    }

    return 0;
}