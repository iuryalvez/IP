#include <stdio.h>

int main () {

    int x, n100, n50, n10, n1;

    scanf("%d", &x);

    n100 = x / 100;
    n50 = (x % 100) / 50;
    n10 = (x % 50) / 10;
    n1 = x % 10;

    printf("NOTAS DE 100 = %d\n", n100);
    printf("NOTAS DE 50 = %d\n", n50);
    printf("NOTAS DE 10 = %d\n", n10);
    printf("MOEDAS DE 1 = %d\n", n1);

    return 0;
}