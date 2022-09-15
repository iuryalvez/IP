#include <stdio.h>

#define TAXA_A 1.03
#define TAXA_B 1.015

int main () {

    unsigned long int a, b;
    int anos;

    scanf("%lu %lu", &a, &b);

    while (a < b) {
        a *= TAXA_A;
        b *= TAXA_B;
        anos ++;
    }
    printf("ANOS = %d\n", anos);

    return 0; 
}