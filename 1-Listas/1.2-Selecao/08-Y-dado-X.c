#include <stdio.h>

int main () {

    int x, y;

    scanf("%i", &x);

    if (x < 1) {
        y = x;
        printf("Y = %i\n", y);
    }
    if (x == 1) {
        y = 0;
        printf("Y = %i\n", y);
    }
    if (x > 1) {
        y = x * x;
        printf("Y = %i\n", y);
    }

    return 0;
}