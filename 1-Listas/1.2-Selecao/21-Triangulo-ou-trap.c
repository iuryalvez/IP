#include <stdio.h>

int main () {

    float A, B, C, Perimetro, Area;

    scanf ("%f %f %f", &A, &B, &C);

    Perimetro = A + B + C;
    Area = (A+B) * C / 2.0;

    if ((B-C) < A && A < (B+C) && (A-C) < B && B < (A+C) && (A-B) < C && C < (A+B)) {
        printf("Perimetro = %.1f\n", Perimetro);
    } else printf("Area = %.1f\n", Area);

    return 0;
}