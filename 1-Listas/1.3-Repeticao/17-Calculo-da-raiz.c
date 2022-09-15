#include <stdio.h>

// questao confusa.

int main () {

    double n, e, p;
    double r;

    scanf("%lf", &n);
    scanf("%lf", &p);

    e = 1;
    r = 1;

    while (e > p) {
        
        r = (r + (n/r)) / 2;
        e = (r*r) - n;
        printf("r: %.9lf, err: %.9lf\n", r, e);

    }

    return 0;
}