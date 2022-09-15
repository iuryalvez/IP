#include <stdio.h>

/**
 * @brief 
 * 
 * @param p_byte 
 */
void print_bits(unsigned char *p_byte) {
    
    unsigned char B = *p_byte;
    int i;
    int peso = 128;
    
    for (i = 0; i < 8; i++) {
        printf("%d", B/peso);
        B %= peso;
        peso /= 2;
    } 
}

/**
 * @brief Imprime os bits dos n bytes enderecados por byte.
 * 
 * @param end_byte endereco do primeiro byte a ser impresso
 * @param n quantidade de bytes a serem impressos
 */
void print_bytes(const void *end_byte, int n) {
    int i;
    char *p = (char *) end_byte;

    for (i = 0 ; i < n; i++) {
        print_bits(p);
        printf(" ");
        p++; 
    }
    printf("\n");
}


int main () {
    
    double n;
    unsigned char uc;
    unsigned short us;
    unsigned int ui;
    float ff;

    scanf("%lf", &n);

    uc = n;
    us = n;
    ui = n;
    ff = n;

    print_bytes(&uc, 1);
    print_bytes(&us, 2);
    print_bytes(&ui, 4);
    print_bytes(&ff, 4);
    print_bytes(&n, 8);

    return 0;
}
