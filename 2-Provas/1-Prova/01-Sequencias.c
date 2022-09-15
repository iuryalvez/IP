#include <stdio.h>

int main () {

    int n1, n2, n3, n4, n5, maior;

    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

    if (n1 > n2  && n1 > n3 && n1 > n4 && n1 > n5 && n2 != n3 && n2 != n4 && n2 != n5 && n3 != n4 && n3 != n5 && n4 != n5) {
            if (n1 > n2){
            maior = n1;
            n1 = n2;
            n2 = maior;
        } if (n1 > n3) {
            maior = n1;
            n1 = n3;
            n3 = maior;
        } if (n1 > n4) {
            maior = n1;
            n1 = n4;
            n4 = maior;
        } if (n1 > n5) {
            maior = n1;
            n1 = n5;
            n5 = maior;
        } if (n2 > n3) {
            maior = n2;
            n2 = n3;
            n3 = maior;
        } if (n2 > n4) {
            maior = n2;
            n2 = n3;
            n4 = maior;
        } if (n2 > n5) {
            maior = n2;
            n2 = n3;
            n5 = maior;
        } if (n3 > n4) {
            maior = n3;
            n3 = n4;
            n4 = maior;
        } if (n3 > n5) {
            maior = n3;
            n3 = n5;
            n5 = maior;
        } if (n4 > n5) {
            maior = n4;
            n4 = n5;
            n5 = maior;
        } printf("MENOR: %d, MAIOR: %d\nORDENADO DECRESCENTE", n1, n5);
    } else if (n5 > n4  && n5 > n3 && n5 > n2 && n5 > n1 && n2 != n3 && n2 != n4 && n2 != n1 && n3 != n4 && n3 != n1 && n4 != n1) {
        if (n1 > n2){
            maior = n1;
            n1 = n2;
            n2 = maior;
        } if (n1 > n3) {
            maior = n1;
            n1 = n3;
            n3 = maior;
        } if (n1 > n4) {
            maior = n1;
            n1 = n4;
            n4 = maior;
        } if (n1 > n5) {
            maior = n1;
            n1 = n5;
            n5 = maior;
        } if (n2 > n3) {
            maior = n2;
            n2 = n3;
            n3 = maior;
        } if (n2 > n4) {
            maior = n2;
            n2 = n4;
            n4 = maior;
        } if (n2 > n5) {
            maior = n2;
            n2 = n5;
            n5 = maior;
        } if (n3 > n4) {
            maior = n3;
            n3 = n4;
            n4 = maior;
        } if (n3 > n5) {
            maior = n3;
            n3 = n5;
            n5 = maior;
        } if (n4 > n5) {
            maior = n4;
            n4 = n5;
            n5 = maior;
        } printf("MENOR: %d, MAIOR: %d\nORDENADO CRESCENTE", n1, n5);
    } else { 
        if (n1 > n2){
            maior = n1;
            n1 = n2;
            n2 = maior;
        } if (n1 > n3) {
            maior = n1;
            n1 = n3;
            n3 = maior;
        } if (n1 > n4) {
            maior = n1;
            n1 = n4;
            n4 = maior;
        } if (n1 > n5) {
            maior = n1;
            n1 = n5;
            n5 = maior;
        } if (n2 > n3) {
            maior = n2;
            n2 = n3;
            n3 = maior;
        } if (n2 > n4) {
            maior = n2;
            n2 = n4;
            n4 = maior;
        } if (n2 > n5) {
            maior = n2;
            n2 = n5;
            n5 = maior;
        } if (n3 > n4) {
            maior = n3;
            n3 = n4;
            n4 = maior;
        } if (n3 > n5) {
            maior = n3;
            n3 = n5;
            n5 = maior;
        } if (n4 > n5) {
            maior = n4;
            n4 = n5;
            n5 = maior;
        } printf("MENOR: %d, MAIOR: %d\nDESORDENADO", n1, n5);
    }

    return 0;
}