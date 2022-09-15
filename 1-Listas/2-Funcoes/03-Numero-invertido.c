#include <stdio.h>

/**
 * @brief Funcao que desmembra um numero inteiro de 3 digitos 
 * 
 * @param n numero de entrada
 * @param c digito da centena
 * @param d digito da dezena
 * @param u digito da unidade
 */
void separaDigitos (int n, int * c, int * d, int * u); // nao retorna nada (void) mas o ponteiro sim

int main () {
    int n;
    int c, d, u;
    
    scanf("%d", &n);

    if (n <= 0 || n % 100 == 0 || n % 10 == 0) return 0;

    separaDigitos(n, &c, &d, &u);

    printf("%d\n", c+d+u);

    return 0;
}

void separaDigitos (int n, int * c, int * d, int * u) {
    *c = n / 100;
    *d = (n % 100 / 10) * 10;
    *u = (n % 10) * 100;
    return;
} 