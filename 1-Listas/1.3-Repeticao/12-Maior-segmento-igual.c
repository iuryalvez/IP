#include <stdio.h>

int main () {

    int qtd_n, i; 
    int msi; 
    int tsi; 
    int x; 
    int ant; 

    scanf("%d", &qtd_n);
    scanf("%d", &ant);

    msi = 0;
    tsi = 1;

    for (i = 1; i < qtd_n; i++) {
        scanf("%d", &x);

        if(x == ant) tsi++;
        else tsi = 1;
        
        if (tsi > msi) msi = tsi;
        ant = x;
    }

    printf("O comprimento do segmento de numeros iguais e: %d\n", msi);

    return 0;
}