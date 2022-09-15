#include <stdio.h>
#include <math.h>

int main () {

    float l1, l2, l3;

    scanf("%f\n%f\n%f", &l1, &l2, &l3);

    float T = (l1+l2+l3)/2;
    float AT = sqrtf(T * (T-l1) * (T-l2) * (T-l3));

    printf("A AREA DO TRIANGULO E = %.2f\n", AT);

    return 0;
}