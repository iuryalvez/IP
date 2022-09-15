#include <stdio.h>

#define RES 'R'
#define COM 'C'
#define IND 'I'

int main () {

    char perfil;
    float consumo, valor;
    int cliente;

    scanf("%i %f %c", &cliente, &consumo, &perfil);

    if (perfil == COM && consumo >= 80) {

            valor = (consumo - 80) * 0.25 + 500;
        
        printf("CONTA = %i\n", cliente);
        printf("VALOR DA CONTA = %.2f\n", valor);
        }
    else if (perfil == COM && consumo < 80) { 
            
            valor = 500;

            printf("CONTA = %i\n", cliente);
            printf("VALOR DA CONTA = %.2f\n", valor);
        }         
    else if (perfil == IND && consumo >= 100) {

            valor = (consumo - 100) * 0.04 + 800;
        
        printf("CONTA = %i\n", cliente);
        printf("VALOR DA CONTA = %.2f\n", valor);
        }
    else if (perfil == IND && consumo < 100) {
            
            valor = 800;

            printf("CONTA = %i\n", cliente);
            printf("VALOR DA CONTA = %.2f\n", valor);
        } 

    else {
        valor = (consumo * 0.05) + 5;
        printf("CONTA = %i\n", cliente);
        printf("VALOR DA CONTA = %.2f\n", valor);
    }

    return 0;
}