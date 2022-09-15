#include <stdio.h>

int main () {

    float a, b, c, d;

    scanf("%f\n%f\n%f\n%f", &a, &b, &c, &d);

    float X = a * d - b * c;

    printf("O VALOR DO DETERMINANTE E = %.2f\n", X);

    return 0;
}