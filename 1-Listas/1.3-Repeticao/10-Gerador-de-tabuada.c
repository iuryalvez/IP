#include <stdio.h>

int main () {

    float a1, a2, a3, K, s; 
    float res;
    float contador;

    scanf("%f %f %f %f", &a1, &a2, &K, &s);

    printf("Tabuada de soma:\n");    
    for (contador = 0; contador < K; contador ++) {
        
        a3 = a2 + s*contador;
        res = a1 + a3;

        printf("%.2f + %.2f = %.2f\n", a1, a3, res);

    }
        
    printf("Tabuada de subtracao:\n");
    for (contador = 0; contador < K; contador ++) {
        
        a3 = a2 + s*contador;
        res = a1 - a3;

        printf("%.2f - %.2f = %.2f\n", a1, a3, res);

    }
    
    printf("Tabuada de multiplicacao:\n");
    for (contador = 0; contador < K; contador ++) {
        
        a3 = a2 + s*contador;
        res = a1 * a3;

        printf("%.2f x %.2f = %.2f\n", a1, a3, res);

    }
    
    printf("Tabuada de divisao:\n");
    for (contador = 0; contador < K; contador ++) {
        
        a3 = a2 + s*contador;
        res = a1 / a3;

        printf("%.2f / %.2f = %.2f\n", a1, a3, res);

    }

    return 0;
}