#include <stdio.h>

int main () {

    float raio;
    float altura;
    const float pi = 3.14159;

    scanf("%f\n%f", &raio, &altura);

    float Ac = pi * raio * raio;
    float Al = 2 * pi * raio * altura;
    float areadocilindro = 2 * Ac + Al;
    float custodocilindro = 100 * areadocilindro;

    printf("O VALOR DO CUSTO E = %.2f\n", custodocilindro);

    return 0;
}
