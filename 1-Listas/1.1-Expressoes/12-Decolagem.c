#include <stdio.h>
#include <math.h>

int main () {

    double m, a, t, x, velocidadeMS, y, z;

    scanf("%lf%lf%lf", &m, &a, &t);

    velocidadeMS = a * t;
    x = a * 3.6 * t;
    y = (a * pow(t,2)) / 2.0;
    z = (m * 1000 * pow(velocidadeMS,2)) / 2.0;

    printf("VELOCIDADE = %.2lf\n", x);
    printf("ESPACO PERCORRIDO = %.2lf\n", y);
    printf("TRABALHO REALIZADO = %.2lf\n", z);

    return 0;
}