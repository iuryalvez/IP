#include <stdio.h>
#define MAX 100

int main () {
    int D[MAX][MAX];
    int l, a;
    int b, v;
    int m, n;
    scanf("%d %d %d %d", &l, &a, &b, &v);
    for (m = 0; m < l; m++) {
        for (n = 0; n < a; n++) {
            D[m][n] = v;
        }
    }
    for (m = b; m < l-b; m++) {
        for (n = b; n < a-b; n++) {
            D[m][n] = 0;
        }
    }
    printf("P2\n%d %d\n255\n", a, l);
    for (m = 0; m < l; m++) {
        for (n = 0; n < a; n++) {
            printf("%d ", D[m][n]);
            // if (n != l-1) printf(" ");
        }
        printf("\n");
    }
    return 0;
}