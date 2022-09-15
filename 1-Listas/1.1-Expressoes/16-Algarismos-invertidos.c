#include <stdio.h>

int main () {

    int x, a1, a2, a3, ai;

    scanf("%i", &x);

    a1 = x / 100;
    a2 = (x % 100) / 10;
    a3 = x % 10;
    ai = a3*100 + a2*10 + a1;

    printf("%i\n", ai);
    
    return 0;
}