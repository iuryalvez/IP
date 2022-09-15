#include <stdio.h>

int main () {

    double a, b, c;
    char operador, igual;

    scanf("%lf%c%lf%c%lf", &a, &operador, &b, &igual, &c);

    if (operador == '*') {
        if ((a * b) == c) {
            printf("CORRETO");
        } else {
            c = a * b;
            printf("ERRADO! O resultado deveria ser: %lf\n", c);
        }
    } else if (operador == '/') {
        if ((a / b) == c) {
            printf("CORRETO");
        } else {
            c = a / b;
            printf("ERRADO! O resultado deveria ser: %lf\n", c);
        }
    } else if (operador == '+') {
        if ((a + b) == c) {
            printf("CORRETO");
        } else {
            c = a + b;
            printf("ERRADO! O resultado deveria ser: %lf\n", c);
        }
    } else if (operador == '-') {
        if ((a - b) == c) {
            printf("CORRETO");
        } else {
            c = a - b;
            printf("ERRADO! O resultado deveria ser: %lf\n", c);
        }
    }

    return 0;
}