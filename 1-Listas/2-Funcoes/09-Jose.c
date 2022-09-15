#include <stdio.h>

/**
 * @brief Funcao que desmembra um numero inteiro de 3 digitos 
 * 
 * @param n numero de entrada
 * @param c digito da centena
 * @param d digito da dezena
 * @param u digito da unidade
 */
void separaDigitos (int n, int *c, int *d, int *u);

/**
 * @brief Funcao que troca centena e unidade
 * 
 * @param n numero de entrada
 * @param c digito da centena
 * @param d digito da dezena
 * @param u digito da unidade
 */
void inverteDigitos (int *n, int *c, int *d, int *u);

int main () {

    int n1, n2, c, d, u;
    int cont;

    scanf("%i", &cont);

    for ( ; cont > 0; cont--) {

        scanf("%i %i", &n1, &n2);

        if (n1 % 10 == 0 || n2 % 10 == 0 || n1 > 999 || n2 > 999) return 0;

        separaDigitos(n1, &c, &d, &u);
        inverteDigitos(&n1, &c, &d, &u);
        separaDigitos(n2, &c, &d, &u);
        inverteDigitos(&n2, &c, &d, &u);

        if (n1 > n2) printf("%i\n", n1);
        else printf("%i\n", n2);
    } 

    return 0;
}

void separaDigitos (int n, int * c, int * d, int * u) {
    *c = n / 100;
    *d = (n % 100 / 10) * 10;
    *u = (n % 10) * 100;
} 

void inverteDigitos (int *n, int *c, int *d, int *u) {
    *n = *c + *d + *u;
}
