#include <stdio.h>

int main () {

    float n1, n2, n3, temp;
    int i;

    scanf("%i%f%f%f", &i, &n1, &n2, &n3);

// realocação de valores para satisfazer a condição

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
    } if (i == 1) printf("%.2f %.2f %.2f\n", n1, n2, n3);
    else if (i == 2) printf("%.2f %.2f %.2f\n", n3, n2, n1);
    else if (i == 3) printf("%.2f %.2f %.2f\n", n2, n3, n1);

    return 0;
}