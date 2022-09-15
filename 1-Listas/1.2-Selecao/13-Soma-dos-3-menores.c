#include <stdio.h>

int main () {

    int n1, n2, n3, n4, sum, maior;

    scanf("%i %i %i %i", &n1, &n2, &n3, &n4);

    maior = n1;
    if (n2 > maior) maior = n2;
    if (n3 > maior) maior = n3;
    if (n4 > maior) maior = n4;

    sum = (n1 + n2 + n3 + n4) - maior;

    printf("%i", sum);
    
    return 0;
}