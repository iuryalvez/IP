#include <stdio.h>

#define LIM 5000

int main () {

    int v[LIM], c, n;

    scanf("%i", &n);

    for (c = 0; c < n; c++) {
        scanf("%i", &v[c]);
    }

    for (c = n-1; c >= 0; c--) {
        if (c != 0) printf("%i ", v[c]);
        else if (c == 0) printf("%i", v[c]);
    }

    return 0;
}