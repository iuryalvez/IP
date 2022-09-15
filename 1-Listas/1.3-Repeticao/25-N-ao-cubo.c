#include <stdio.h>

int main () {

    int n;
    int x;
    int cont1, cont2;

    x = 1;

    scanf("%d", &n);

    if (n <= 0) return 0;

    for (cont1 = 1; cont1 <= n; cont1++) {
    
        printf("%d*%d*%d = %i", cont1, cont1, cont1, x);
        
        for (cont2 = 1; cont2 <= cont1; cont2++) {
            
            if (cont2 == cont1) {
                printf("\n");
                break;
            }
            else {
                x += 2;
                printf("+%d", x);
            }
        }
        x += 2;
    }       
    return 0;
}