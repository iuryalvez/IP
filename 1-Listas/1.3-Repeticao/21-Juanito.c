#include <stdio.h>

// Juanito = Jose

int main () {

    int cont, calc;
    int num1, num2;
    int c, d, u;

    scanf("%i", &calc);

    for (cont = 0; cont < calc; cont++) {

        scanf("%i %i", &num1, &num2);
        
        if (num1 == num2 || num1 % 100 == 0 || num2 % 100 == 0) return 0;

        u = num1 / 100;
        d = num1 % 100 / 10;
        c = num1 % 10;
        num1 = c*100 + d*10 + u;
        
        u = num2 / 100;
        d = num2 % 100 / 10;
        c = num2 % 10;
        num2 = c*100 + d*10 + u;

        if (num1 > num2) {
            printf("%i\n", num1);
        }
        else printf("%i\n", num2);
    }

    return 0;
}