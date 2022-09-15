#include <stdio.h>

/**
 * Funcao que calcula o fatorial de um numero n
 * 
 * @param n um numero inteiro positivo
 * @return o fatorial de n 
 */
unsigned long int fat(unsigned int n);

int main () {
    
    int n;

    scanf("%d", &n);
    printf("%d! = %lu\n", n, fat(n) ); 

    return 0;
}

unsigned long int fat(unsigned int n) {
    
    unsigned long int f, temp;
    temp = 1;
    
    for (f = 1; f <= n; f++) {
       temp *= f;
    }
    return temp;
}