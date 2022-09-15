#include <stdio.h>

/**
 * @brief funcao que calcula o valor de pi usando a serie proposta por john wallis
 * 
 * @param n quantidade de termos da serie
 * @return double o valor aproximado de pi
 */
double compute_pi (int n);

int main () {

    int n;
    //while (1) {
    scanf("%i", &n); 
    
    printf("%.12lf\n", compute_pi(n));
    //}
    return 0;
}

double compute_pi (int n) {

    double cont, pi;

    pi = 1;
    
    for (cont = 1; cont <= n; cont ++) {
        if (n % 2 == 0) {
            if (cont > n/2) break;
            pi *= (2*cont) / (2*cont-1) * (2*cont) / (2*cont+1);
            //printf("PAR* c: %lf pi :%lf\n", cont, pi);
        }
        else {
            if (cont > n/2) {
                pi *= (2*cont) / (2*cont-1);
                //printf("IMPAR 1 A MAIS* c: %lf pi: %lf\n", cont, pi);
                break;
            }
            pi *= (2*cont) / (2*cont-1) * (2*cont) / (2*cont+1);
            //printf("IMPAR* c: %lf pi :%lf\n", cont, pi);
        }
    }  
    
    pi *= 2;
    
    return pi;
}