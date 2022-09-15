#include <stdio.h>

int main () {

    int valor, dia, mes, ano, a1, a2, a3, a4, a5, a6, a7, a8;

    scanf("%d", &valor);

    a1 = valor / 10000000;
    a2 = (valor % 10000000) / 1000000;
    a3 = (valor % 1000000) / 100000;
    a4 = (valor % 100000) / 10000;
    a5 = (valor % 10000) / 1000;
    a6 = (valor % 1000) / 100;
    a7 = (valor % 100) / 10;
    a8 = valor % 10;

    dia = a1*10 + a2;
    mes = a3*10 + a4;
    ano = a5*1000 + a6*100 + a7*10 + a8; 

    if (ano == 0) printf ("Data invalida!\n");
    else if (mes > 12 || mes == 0) printf ("Data invalida!\n");
    else if (mes == 1) {
        if (dia >= 1 && dia <= 31) {
            printf ("%d de janeiro de %d\n", dia, ano);
        } else printf("Data invalida!\n");
    } else if (mes == 2) {
        if (dia >= 1 && dia <= 28) {
            printf ("%d de fevereiro de %d\n", dia, ano);
        } else printf("Data invalida!\n");
    } else if (mes == 3) {
        if (dia >= 1 && dia <= 31) {
            printf ("%d de março de %d\n", dia, ano);
        } else printf("Data invalida!\n");
    } else if (mes == 4) {
        if (dia >= 1 && dia <= 30) {
            printf ("%d de abril de %d\n", dia, ano);
        } else printf("Data invalida!\n");
    } else if (mes == 5) {
        if (dia >= 1 && dia <= 31) {
            printf ("%d de maio de %d\n", dia, ano);
        } else printf("Data invalida!\n");
    } else if (mes == 6) {
        if (dia >= 1 && dia <= 30) {
            printf ("%d de junho de %d\n", dia, ano);
        } else printf("Data invalida!\n");
    } else if (mes == 7) {
        if (dia >= 1 && dia <= 31) {
            printf ("%d de julho de %d\n", dia, ano);
        } else printf("Data invalida!\n");
    } else if (mes == 8) {
        if (dia >= 1 && dia <= 31) {
            printf ("%d de agosto de %d\n", dia, ano);
        } else printf("Data invalida!\n");
    } else if (mes == 9) {
        if (dia >= 1 && dia <= 30) {
            printf ("%d de setembro de %d\n", dia, ano);
        } else printf("Data invalida!\n");
    } else if (mes == 10) {
        if (dia >= 1 && dia <= 31) {
            printf ("%d de outubro de %d\n", dia, ano);
        } else printf("Data invalida!\n");
    } else if (mes == 11) {
        if (dia >= 1 && dia <= 30) {
            printf ("%d de novembro de %d\n", dia, ano);
        } else printf("Data invalida!\n");
    } else if (mes == 12) {
        if (dia >= 1 && dia <= 31) {
            printf ("%d de dezembro de %d\n", dia, ano);
        } else printf("Data invalida!\n");
    } 
    return 0;
}