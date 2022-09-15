#include <stdio.h>

int main () {

    float pricecar, percentD, percentI;

    scanf("%f\n%f\n%f", &pricecar, &percentD, &percentI);

    float priceT = pricecar * percentD/100 + pricecar * percentI/100 + pricecar;

    printf("O VALOR DO CARRO E = %.2f\n", priceT);

    return 0;
}