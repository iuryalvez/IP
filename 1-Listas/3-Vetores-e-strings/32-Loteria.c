#include <stdio.h>
#define SORT 6

int main () {

    int s[SORT];
    int k[SORT];
    int n; // menor que 50000
    int i, j, m;
    int c;
    int c6 = 0, c5 = 0, c4 = 0;

    for (i = 0; i < SORT; i++) {
        scanf("%d", &s[i]);
    }
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        c = 0;
        for (j = 0; j < SORT; j++) {
            scanf("%d", &k[j]);
            for (m = 0; m < SORT; m++) if (k[j] == s[m]) c++;
        }
        if (c == 6) c6++;
        if (c == 5) c5++;
        if (c == 4) c4++;
    }
    if (c6 > 0) printf("Houve %d acertador(es) da sena\n", c6);
    else printf("Nao houve acertador para sena\n");
    if (c5 > 0) printf("Houve %d acertador(es) da quina\n", c5);
    else printf("Nao houve acertador para quina\n");
    if (c4 > 0) printf("Houve %d acertador(es) da quadra\n", c4);
    else printf("Nao houve acertador para quadra\n");

    return 0;
}