#include <stdio.h>

int main () {

    int n1, n2, n3, temp;
    char a, b, c;
    
    scanf("%i %i %i\n%c %c %c", &n1, &n2, &n3, &a, &b, &c);
    
    if (n1 > n2) {
        temp = n1;
        n1 = n2;
        n2 = temp;
    } if (n1 > n3) {
        temp = n1;
        n1 = n3;
        n3 = temp;
    } if (n2 > n3) {
        temp = n2;
        n2 = n3;
        n3 = temp;
    }

    if (a == 'A') printf("%i ", n1);
    if (a == 'B') printf("%i ", n2);
    if (a == 'C') printf("%i ", n3);
    if (b == 'A') printf("%i ", n1);
    if (b == 'B') printf("%i ", n2);
    if (b == 'C') printf("%i ", n3);
    if (c == 'A') printf("%i\n", n1);
    if (c == 'B') printf("%i\n", n2);
    if (c == 'C') printf("%i\n", n3);

    return 0;
}