#include <stdio.h>
#define MAX 10000

int main () {

    int n, v[MAX];
    int i, j;
    int c1, c2, c3, temp;

    scanf("%d", &n);
    if (n < 1 || n > 1000000) return 0;
    c3 = MAX;
    for (i = 0; i < n; i++) scanf("%d", &v[i]);
    for (i = 0; i < n; i++) {
        if (v[i] < 0 || v[i] > 100) break;
        c1 = 0;
        for (j = 0; j < n; j++) {
            if (v[i] == v[j]) {
                c1++;
            }
        }
        if (c1 > c2) {
            temp = c1;
            c1 = c2;
            c2 = temp;
            c3 = i;
        }
        else if (c1 == c2) {
            if (v[i] < v[c3]) c3 = i;
        }
    }
    printf("%d\n%d\n", v[c3], c2);
    return 0;
}