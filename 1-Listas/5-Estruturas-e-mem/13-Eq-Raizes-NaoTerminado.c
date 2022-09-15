#include <stdio.h>
#include <math.h>

// estrutura de um número complexo
typedef struct _complex {
    double r, i;
} Complex;

// estrutura de uma raiz de uma equação quadrada
typedef struct {
    Complex r[2];
} RaizEqu2;

// ax² + bx + c
// x = -b +- Vb² - 4ac
// x = x / 2a


RaizEqu2 calcula_raiz_equ2 (double a, double b, double c) {
    double delta;
    RaizEqu2 raiz;
    delta = b*b - 4*a*c;
    if (delta == 0) {
        raiz.r[0].r = -b / (2*a);
        raiz.r[1].i = 0;
        raiz.r[1] = raiz.r[0];
    }
    else if (delta < 0) {
        delta = sqrt(-delta);
        raiz.r[0].r = -b / (2*a);
        raiz.r[0].i = delta / (2*a);
        raiz.r[1].r = raiz.r[0].r;
        raiz.r[1].i = -raiz.r[0].i;
    }
    else {
        delta = sqrt(delta);
        raiz.r[0].r = (-b + delta) / (2*a);
        raiz.r[0].i = 0;
        raiz.r[1].r = (-b - delta) / (2*a);
        raiz.r[1].i = 0;
    }
}

int main () {



    return 0;
}
