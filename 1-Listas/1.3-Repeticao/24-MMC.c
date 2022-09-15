#include <stdio.h>

int main () {

    int x, y, z;
    int c;
    int mmc;

    scanf("%d %d %d", &x, &y, &z);

    mmc = 1;
    c = 2;

    while (x*y*z != 1) {

        printf("%d %d %d :", x, y, z);

        while (x % c != 0 && y % c != 0 && z % c != 0) c++;
        
        printf("%d\n", c);
        
        mmc *= c;
        
        if (x % c == 0) x /= c;
        
        if (y % c == 0) y /= c;
        
        if (z % c == 0) z /= c;
    
    }
        printf("MMC: %d", mmc);

    return 0;
}