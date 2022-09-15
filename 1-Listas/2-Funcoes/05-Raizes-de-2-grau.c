#include <stdio.h>
#include <math.h>

// verificar test 4 no xerife.

#define RAIZ_UNICA 1
#define RAIZES_DISTINTAS 2
#define RAIZES_IMAGINARIAS 0

/**
 * @brief Funcao que calcula as raizes da equacao de segundo grau
 * 
 * @param a coeficiente a
 * @param b coeficiente b
 * @param c coeficiente c
 * @param x1 raiz 1
 * @param x2 raiz 2
 * @return int retorna se tem 1, 2 ou 0 raizes
 */
int raizesEq2Grau (double a, double b, double c, double *x1, double *x2);

int main () {

    double a, b, c, x1, x2;
    int r, xr;

    scanf("%lf %lf %lf", &a, &b, &c);

    r = raizesEq2Grau (a, b, c, &x1, &x2);
    
    switch (r) {
        case RAIZES_DISTINTAS:
            if (x1 > x2) {
                xr = x1;
                x1 = x2;
                x2 = xr;
            }
            printf("RAIZES DISTINTAS\nX1 = %.2lf\nX2 = %.2lf\n", x1, x2);
            break; 
        case RAIZ_UNICA:
            printf("RAIZ UNICA\nX1 = %.2lf\n", x1);
            break;
        case RAIZES_IMAGINARIAS:
            printf("RAIZES IMAGINARIAS\n");
            break; 
    }
    return 0;
}

int raizesEq2Grau (double a, double b, double c, double *x1, double *x2) {

    double delta;

    delta = pow(b,2) - (4*a*c);

    if (delta == 0 || a == 0) {
        
        if (a != 0) *x1 = -b/(2*a);
        else {
            *x1 = -c/b;
            if (b == 0 || c == 0) *x1 = 0; 
        } 
        return RAIZ_UNICA;
    } 
    else if (delta < 0) return RAIZES_IMAGINARIAS;
    else {
        *x1 = (-b + sqrt(delta)) / (2*a);
        *x2 = (-b - sqrt(delta)) / (2*a); 
    
        return RAIZES_DISTINTAS;
    }    
    return 0;
}