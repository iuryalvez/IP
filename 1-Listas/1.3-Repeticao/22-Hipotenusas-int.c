#include <stdio.h>

int main () {

    int n, c1, c2, cont;

    scanf("%i", &n);

    if (n <= 0) return 0;

    for (cont = 1; cont <= n; cont ++) {
        
        for (c1 = 1; c1 < cont; c1++) {

            for (c2 = 1; c2 < cont; c2++) {

                if ((cont*cont) == (c1*c1) + (c2*c2) && c1 <= c2) {
            
                printf("hipotenusa = %i, catetos %i e %i\n", cont, c1, c2);

                }
            }
        }
    }               

    return 0;
}