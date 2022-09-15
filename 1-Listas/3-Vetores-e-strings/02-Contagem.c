#include <stdio.h>

#define LIM 1000

int contagem (int x, int y, int *v);

int main () {

    int x, y, v[LIM];
    int c;

    while (1) {
        scanf("%i", &x);
        if (x >= 1 && x <= 1000) break;
    }

    for (c = 0; c < x; c++) {
        scanf("%i", &v[c]);
    }
    scanf("%i", &y);

    printf("%i\n", contagem(x, y, v));
    
    return 0;
}

int contagem (int x, int y, int *v) {
    int c;
    int c2 = 0;
    for (c = 0; c < x; c++) {
        if (v[c] >= y) c2++;
    }
    return c2;
}