#include <stdio.h>

/**
 * @brief Retorna o n-esimo termo da sequencia de fibonacci
 * 
 * @param t1 primeiro termo da sequencia
 * @param t2 segundo termo da sequencia
 * @param n a posicao do termo desejado da sequencia
 * @return int return valor do n-esimo termo da sequencia
 */
int fibonacci (int t1, int t2, int n); 

int main () {

    int t1, t2, n;

    scanf("%i %i %i", &t1, &t2, &n);

    printf("%i\n", fibonacci(t1, t2, n));

    return 0;
}

int fibonacci (int t1, int t2, int n) {
    
    int temp = t2;

    while (1 < n) {

        t1 += t2;
        t2 = t1;
        t1 = temp;
        temp = t2;
        n--;
    
    }

    return t1;
}