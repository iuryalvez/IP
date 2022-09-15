#include <stdio.h>

int main () {

    int qtd_time;
    int nfinais;
    int t1, t2;

    nfinais = 1;

    scanf("%d", &qtd_time);

    if (qtd_time < 2) { 
        printf("Campeonato invalido!\n");
        return 0;
    }

    for (t1 = 1; t1 < qtd_time; t1++) {
        
        for (t2 = 2; t2 < qtd_time+1; t2++) {
    
            if (t1 != t2 && t1 < t2) {
            printf("Final %i: Time%i X Time%i\n", nfinais, t1, t2);        
            nfinais++;
     
            }
        }
    }

    return 0;
}