#include <stdio.h>

#define MAX 11

int main () {

    int v[MAX];
    int n;
    int i, j, mult;
    int b1, b2;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        mult = 1;
        b1=0, b2=0;
        for (j = 0; j < 11; j++) {
            if (j != 10) scanf("%d ", &v[j]);
            else scanf("%d", &v[j]);
        }
        for (j = 0; j < 9; j++) {
            b1 += v[j]*mult;
            mult++;
        }
        b1 %= 11;
        if (b1 == 10) b1 = 0;
        mult = 9;
        for (j = 0; j < 9; j++) {
            b2 += v[j]*mult;
            mult--;
        }
        b2 %= 11;
        if (b2 == 10) b2 = 0;
        // printf("b1:%i b2:%i\n", b1, b2);
        if (v[9] == b1 && v[10] == b2) printf("CPF valido\n");
        else printf("CPF invalido\n");
    }
    return 0;
}