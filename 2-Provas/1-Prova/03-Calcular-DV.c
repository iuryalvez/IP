#include <stdio.h>

int main () {

    int ns, cod_uf, DV, d1ns, d2ns, d3ns, d4ns, d5ns, d6ns, d7ns, d8ns, d1uf, d2uf, dv1, dv2, bcd1, bcd2;

    scanf("%d%d", &ns, &cod_uf);

    if (cod_uf < 1 || cod_uf > 28) {
        printf("CODIGO DA UF INVALIDO!");
        return 0;
    }

    d1ns = ns / 10000000;
    d2ns = (ns % 10000000) / 1000000;
    d3ns = (ns % 1000000) / 100000;
    d4ns = (ns % 100000) / 10000;
    d5ns = (ns % 10000) / 1000;
    d6ns = (ns % 1000) / 100;
    d7ns = (ns % 100) / 10;
    d8ns = ns % 10;  

    bcd1 = d1ns*2 + d2ns*3 + d3ns*4 + d4ns*5 + d5ns*6 + d6ns*7 + d7ns*8 + d8ns*9; 
    dv1 = bcd1 % 11; 
    if (dv1 == 10) dv1 = 0;

    d1uf = cod_uf / 10;
    d2uf = cod_uf % 10;

    bcd2 = 7*d1uf + d2uf*8 + dv1*9;
    dv2 = bcd2 % 11; 
    if (dv2 == 10) dv2 = 0; 

    DV = 10*dv1 + dv2;

    if (cod_uf < 10 && cod_uf > 1 && DV > 10) printf("%i0%i/%i", ns, cod_uf, DV);
    else if (cod_uf < 10 && cod_uf > 1 && DV < 10) printf("%i0%i/0%i", ns, cod_uf, DV);
    else if (cod_uf >= 10 && cod_uf < 28 && DV < 10) printf("%i%i/0%i", ns, cod_uf, DV);
    else printf("%i%i/%i", ns, cod_uf, DV);

    return 0;
}