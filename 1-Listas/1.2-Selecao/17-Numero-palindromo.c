#include <stdio.h> 

int main () {

    int valor, a1, a2, a3, a4, a5, new_valor;

    scanf("%i", &valor);
    
    if (valor < 0 || valor > 99999) {
        printf("NUMERO INVALIDO\n");
    } else if (valor >= 10000 && valor <= 99999) {
        a1 = valor / 10000;
        a2 = (valor % 10000) / 1000;
        a3 = (valor % 1000) / 100;
        a4 = (valor % 100) / 10;
        a5 = valor % 10;
        new_valor = a5*10000 + a4*1000 + a3*100 + a2*10 + a1;
            if (new_valor == valor) printf("PALINDROMO\n");
            else printf("NAO PALINDROMO\n");
    } else if (valor >= 1000 && valor < 10000) {
        a1 = valor / 1000;
        a2 = (valor % 1000) / 100;
        a3 = (valor % 100) / 10;
        a4 = valor % 10;
        new_valor = a4*1000 + a3*100 + a2*10 + a1;
            if (new_valor == valor) printf("PALINDROMO\n");
            else printf("NAO PALINDROMO\n");
    } else if (valor >= 100 && valor < 1000) {
        a1 = valor / 100;
        a2 = (valor % 100) / 10;
        a3 = valor % 10;
        new_valor = a3*100 + a2*10 + a3;
            if (new_valor == valor) printf("PALINDROMO");
            else printf("NAO PALINDROMO");
    } else if (valor >= 10 && valor < 100) {
        a1 = valor / 10;
        a2 = valor % 10;
        new_valor = a2*10 + a1;
            if (new_valor == valor) printf("PALINDROMO");
            else printf("NAO PALINDROMO"); 
    } else if (valor >= 0 && valor <= 9) printf("PALINDROMO");
    return 0;
}