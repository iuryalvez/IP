#include <stdio.h>

#define LIM 10000

int main () {

    int v[LIM], c, n;

    scanf("%i", &n);

    for (c = 0; c < n; c++) {
        scanf("%i", &v[c]);
    }

    for (c = 0; c < n; c++) {
        if (c == n-1) printf("%i", v[c]);
        else printf("%i ", v[c]);
    }

    return 0;
}