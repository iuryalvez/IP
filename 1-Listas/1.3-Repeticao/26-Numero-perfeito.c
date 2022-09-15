#include <stdio.h>

int main () {

    int n, cont1, cont2, contdi, cdi1, cdi2;

    while (scanf("%d", &n) != EOF) {

        if (n <= 1) return 0;

        printf("%d =", n);

        cont2 = 0;
        cdi1 = 0;
        cdi2 = 1;

        if (n % 2 == 1) {
            for (contdi = 1; contdi < n; contdi++) {
                if (n % contdi == 0) cdi1++;
            }
            if (cdi1 == 1) {
                printf(" %d = %d (NUMERO NAO E PERFEITO)\n", cdi1, cdi1);
                return 0;
            }
        }

        for (cont1 = 1; cont1 < n; cont1++) {
        
            if (cont1 > n/2) break;
            else if (cont1 == n/2 && n % cont1 == 0) {
                printf(" %d ", cont1);
                cont2 += cont1;
            }
            else if (n % cont1 == 0 && n % 2 == 0) { 
                printf(" %d +", cont1);
                cont2 += cont1;      
            }
            else if (n % cont1 == 0 && n % 2 == 1 && cdi2 < cdi1) {
                printf(" %d +", cont1); 
                cont2 += cont1;
                cdi2++;
            }
            else if (n % cont1 == 0 && n % 2 == 1 && cdi2 == cdi1) {
                printf(" %d ", cont1);
                cont2 += cont1;
            }
        }
    
        if (cont2 == n) printf("= %d (NUMERO PERFEITO)\n", cont2);
        else printf("= %d (NUMERO NAO E PERFEITO)\n", cont2);
    }    
    return 0;
}