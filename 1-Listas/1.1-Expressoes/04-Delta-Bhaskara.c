#include <stdio.h>

int main () {
    
    float a;
    float b;
    float c;

    scanf("%f\n%f\n%f", &a, &b, &c);

    float x = b * b - (4 * a * c);

    printf("O VALOR DE DELTA E = %.2f\n", x);

    return 0;
}