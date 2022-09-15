#include <stdio.h>

/**
 * @brief Funcao que calcula a raiz quadrada de um numero qualquer
 * 
 * @param n numero real qualquer
 * @param p precisao do calculo
 * @return double 
 */
double raiz (double n, double p);

int main () {

    double n, p;

    scanf("%lf %lf", &n, &p);

    raiz (n, p);

    return 0;
}

double raiz (double n, double p) {
    
    double pt = 1;
    double e = 1;

    while (e > p) {
        
        pt = (pt + (n/pt)) / 2;
        e = (pt*pt) - n;
        printf("r: %.9lf, err: %.9lf\n", pt, e);

    }
}
