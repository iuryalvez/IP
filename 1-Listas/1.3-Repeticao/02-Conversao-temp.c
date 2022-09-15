#include <stdio.h>

#define CELSIUS ((5*(valorF - 32))/9)

int main () {

    double valorF;
    int vezes;

    scanf("%i", &vezes);

    while (vezes > 0) {
        scanf("%lf", &valorF);
        printf("%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS\n", valorF, CELSIUS);
        vezes--;
    }

    return 0;
}