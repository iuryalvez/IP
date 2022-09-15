#include <stdio.h>
#include <math.h>

int main () {

    int x, a1, a2, a3, a4, newx;

    scanf("%i", &x);

    a1 = x / 100;
    a2 = (x % 100) / 10;
    a3 = x % 10;
    a4 = (a1 + a2 * 3 + a3 * 5) % 7;
    newx = a1*1000 + a2*100 + a3*10 + a4;

    printf("O NOVO NUMERO E = %i\n", newx);
    
    return 0;
}