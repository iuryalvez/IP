#include <stdio.h>
#include <math.h>

//#define MAX 100000000

int main () {
    int n1, n2, i, num[1000], a, tam;
    int soma;
    tam = 0; 

    while (1) {
        scanf("%d %d", &n1, &n2);
        if (n1 == 0 && n2 == 0) break;
        soma = n1+n2;
        
        for (a = soma; a != 0; a /= 10) tam++;

        for (i = 0; i < tam; i++) {
            num[i] = soma;
            num[i] %= (int)pow(10,(i+1));
            num[i] /= (int)pow(10, i);      
        }

        for (i = (tam-1); i >= 0; i--) {
            if (num[i] == 0) continue;
            else printf("%d", num[i]);
        }
        printf("\n");
    }
    return 0;
}