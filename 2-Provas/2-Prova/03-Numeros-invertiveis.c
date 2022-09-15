#include <stdio.h> 

int main () {

    int n, cont1, cont2;

    scanf("%i", &n);

    for (cont1 = 1; cont1 < n; cont1++) {

        for (cont2 = 1; cont2 < n; cont2++) {

            if (cont1 <= cont2 && (cont1*cont2) % n == 1) {
        
                printf("(%i,%i)\n", cont1, cont2);
            }
        }

    }    

    return 0;
}