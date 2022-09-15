#include <stdio.h>

int main () {

    float salario;

    scanf("%f", &salario);

    if (salario <= 300) {
        salario *= 1.5;
        printf("SALARIO COM REAJUSTE = %.2f\n" , salario);
    } else {
        salario *= 1.3;
        printf("SALARIO COM REAJUSTE = %.2f\n" , salario);
    }

    return 0;
}