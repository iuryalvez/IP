#include <stdio.h>

int main () {

    int n, cont;
    int x, y, y2;
    int sd, sdx, sdx2;

    scanf("%i", &n);

    for (x = 1; ; x++) {
        
        sd = 0;      
        
        for (y = 1; y <= x/2; y++) {
            if (x % y == 0) sd += y;
        }
        
        sdx = sd;
        sd = 0;
        
        for (y2 = 1; y2 <= sdx/2; y2++) {
            if (sdx % y2 == 0) sd += y2;
        }
        
        sdx2 = sd;

        if (x == sdx2 && x != sdx && x < sdx) {
            cont++;
        }
            printf("(%i,%i,%i)\n", x, sdx, sdx2);
        
        if (cont == n) break;
    }

    return 0;
}