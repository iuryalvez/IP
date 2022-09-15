#include <stdio.h>
#include <math.h>

int main () {

    double a, b, c, delta, x1, x2, xr;

    scanf("%lf %lf %lf", &a, &b, &c);

    delta = pow(b,2) - (4*a*c);

    if (delta == 0 || a == 0) {
        
        if (a != 0) x1 = -b/(2*a);
        else x1 = -c/b; 
        printf("RAIZ UNICA\nX1 = %.2lf", x1);
    
    } else if (delta < 0) {
        printf("RAIZES IMAGINARIAS\n"); 
    } else {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a); 
            
            if (x1 > x2) {
                xr = x1;
                x1 = x2;
                x2 = xr;
            }
        printf("RAIZES DISTINTAS\nX1 = %.2lf\nX2 = %.2lf\n", x1, x2);
    }    
    return 0;
}