#include <stdio.h>

int main () { 

    float Fahrenheit;
    float chuvapolegadas;

    scanf("%f\n%f", &Fahrenheit, &chuvapolegadas);

    float x = 5 * (Fahrenheit - 32) / 9;
    float y = chuvapolegadas * 25.4;

    printf("O VALOR EM CELSIUS = %.2f\n", x); 
    printf("A QUANTIDADE DE CHUVA E = %.2f\n", y); 

    return 0;
}