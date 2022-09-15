#include <stdio.h>

int main () {

    int decimal, b0, b1, b2, b3, b4, b5, b6, b7;

    scanf("%i", &decimal);

    b0 = decimal % 2;
    b1 = (decimal / 2) % 2;
    b2 = (decimal / 4) % 2;
    b3 = (decimal / 8) % 2;
    b4 = (decimal / 16) % 2;
    b5 = (decimal / 32) % 2;
    b6 = (decimal / 64) % 2;
    b7 = (decimal / 128) % 2;

    if (decimal > 255) {
        printf("Numero invalido!\n"); }

    else if (decimal < 0) {
        printf("Numero invalido!\n"); }
    
    else if (decimal >=0 && decimal <= 255) {
        printf("%i%i%i%i%i%i%i%i\n", b7, b6, b5, b4, b3, b2, b1, b0); }
    
    return 0;
}