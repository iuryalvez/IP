#include <stdio.h>

void imp_bytes(const void *ult_byte, int c);

int main () {
    
    double c;
    unsigned char uc;
    unsigned short us;
    unsigned int ui;
    float ff;

    scanf("%lf", &c);

    uc = c;
    us = c;
    ui = c;
    ff = c;

    imp_bytes(&uc, sizeof(unsigned char));
    imp_bytes(&us, sizeof(unsigned short));
    imp_bytes(&ui, sizeof(unsigned int));
    imp_bytes(&ff, sizeof(float));
    imp_bytes(&c, sizeof(double));

    return 0;
}

void imp_bytes (const void *ult_byte, int c) {
    int i;
    unsigned char n;
    char *pnt = (char *)ult_byte;
    i = c;
    while (i--) {
        n = *pnt;
        printf("%u", n);
        printf(",");
        pnt++;
    }
    printf("\n");
}