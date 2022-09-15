#include <stdio.h>

int main () {

    int v[10000]; // vetor de inteiros; 
    int cont = 0; // contador de frequência
    int n; // número de elementos;
    int maior;
    int i, j; // auxiliares

    

    while (1) {
        scanf("%d", &n);
        if (n == 0) break;
        // lendo o vetor
        for (i = 0; i < n; i++) {
            scanf("%d", &v[i]);
            if (i == 0) maior = v[i]; // dando valor válido para o maior
            if (v[i] > maior) maior = v[i]; // atualizando o maior se for possível
        }
        // printando as frequências de números menores ou iguais a i
        for (i = 0; i <= maior; i++) {
            for (j = 0; j < n; j++) {
                if (v[j] <= i) cont++; // se o número na posição j for menor que i, meu contador soma mais um
            }
            printf("(%d) %d\n", i, cont); 
            cont = 0; // voltando meu contador para 0;
        }
    } 

    return 0;
}
