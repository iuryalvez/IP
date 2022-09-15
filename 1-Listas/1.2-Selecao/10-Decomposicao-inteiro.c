#include <stdio.h>

int main () {

    int valor, a1, a2, a3, a4;

    scanf("%d", &valor);

    if (valor <= 0 || valor > 10000) {
        printf("Numero invalido!\n");
        return 0; }
        
    a1 = valor / 1000;
    a2 = (valor % 1000) / 100;
    a3 = (valor % 100) / 10;
    a4 = valor % 10;

    if (a1 > 0) {
        if (a1 > 1) {
        printf("(quarta ordem) %d = ", valor);
        printf("%d unidades de milhar ", a1);
        } else if (a1 == 1) {
            printf("(quarta ordem) %d = ", valor);
            printf("1 unidade de milhar "); 
            }
        if (a2 > 1) {printf("+ %d centenas ", a2);
        } else if (a2 == 1) {
            printf("+ 1 centena "); }
        if (a3 > 1) {
            printf("+ %d dezenas ", a3);
        } else if (a3 == 1) {
            printf("+ 1 dezena "); }
        if (a4 > 1) {
            printf("+ %d unidades = ", a4);
        } else if (a4 == 1) {
            printf("+ 1 unidade = ");
        } else if (a4 == 0) {
            printf("= "); 
        } printf("%d", a1*1000); 
        if (a2 > 0) {
            printf(" + %d", a2*100);
        } if (a3 > 0) {
            printf(" + %d", a3*10);
        } if (a4 > 0) {
            printf(" + %d", a4);
        }
    } else if (a2 > 0) {
        if (a2 > 1) {
        printf("(terceira ordem) %d = ", valor);
        printf("%d centenas ", a2); 
        } else if (a2 == 1) {
            printf("(terceira ordem) %d = ", valor);
            printf("1 centena ");
        }
        if (a3 > 1) {
            printf("+ %d dezenas ", a3);
        } else if (a3 == 1) {
            printf("+ 1 dezena "); }
        if (a4 > 1) {
            printf("+ %d unidades = ", a4);
        } else if (a4 == 1) {
            printf("+ 1 unidade = ");
        } else if (a4 == 0) {
            printf("= ");
        } printf("%d", a2*100);
        if (a3 > 0) {
            printf(" + %d", a3*10);
        } if (a4 > 0) {
            printf(" + %d", a4);
        }
    } else if (a3 > 0) {
        if (a3 > 1) { 
        printf("(segunda ordem) %d = ", valor);
        printf("%d dezenas ", a3);
        } else if (a3 == 1) {
            printf("(segunda ordem) %d = ", valor);
            printf("1 dezena "); }
        if (a4 > 1) {
            printf("+ %d unidades = ", a4);
        } else if (a4 == 1) {
            printf("+ 1 unidade = ");
        } else if (a4 == 0) {
            printf("= ");
        } printf("%d", a3*10);
        if (a4 > 0) {
            printf(" + %d", a4);
        }   
    } else if (a4 > 0) {
        if (a4 > 1) {
        printf("(primeira ordem) %d = ", valor);
        printf("%d unidades = ", a4);
        } else if (a4 == 1) {
            printf("(primeira ordem) %d = ", valor);
            printf("1 unidade = ");
        } printf("%d", a4);
    }
    return 0;
}