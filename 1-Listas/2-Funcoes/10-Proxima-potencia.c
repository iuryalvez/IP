#include <stdio.h>
#include <math.h>

/**
* Função que calcula a potencia de p mais próximo a n.
* @param n valor inteiro
* @param p valor da potencia
* @return retorna o valor da potencia mais proxima.
*/
int next_power(int n, int p);

int main () {

    int n, p, x, y;
    //while (1) {
    scanf("%i %i", &n, &p);

    x = pow(next_power(n, p), p);
    y = next_power(n,p);

    printf("%i -> %i^%i = %i\n", n, y, p, x);
    //}
    return 0;
}

int next_power(int n, int p) {
    
    int cont = 1;
    
    while (pow(cont+1,p) < n) {
        cont++;
    }
    
    if (n - pow(cont,p) > pow(cont+1,p) - n) cont++;

    return cont;
}