#include <stdio.h>

int main () { 

    float salariominimo;
    float quantidadedekw;

    scanf("%f\n%f", &salariominimo, &quantidadedekw);

    float custoporkw = 0.007 * salariominimo;
    float custodoconsumo = quantidadedekw * 0.007 * salariominimo;
    float custocomdesconto = custodoconsumo * 0.9;

    printf("Custo por kW: R$ %.2f\n", custoporkw);
    printf("Custo do consumo: R$ %.2f\n", custodoconsumo);
    printf("Custo com desconto: R$ %.2f\n", custocomdesconto);

    return 0;
}