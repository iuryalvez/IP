#include <stdio.h>
#include <string.h>
#include <math.h>
 
int main()
{
    char string [101];
    int N, i, i1, soma = 0, tamanho, number;
    char vet;
    
    while (1) {
        scanf("%d%*c", &N);
        if ((N>=1) && (N<=1000)) {
            break;
        } else {
            continue;
        }
    } 
 
    for (i = 0; i < N; i++) {
        
        scanf("%s", string);
        tamanho = strlen(string);
        
        for (i1=0; i1 < tamanho; i1++) {
            vet = string[i1];
            if (vet == '0') {soma  = soma + 6;}
            if (vet == '1') {soma  = soma + 2;}
            if (vet == '2') {soma  = soma + 5;}
            if (vet == '3') {soma  = soma + 5;}
            if (vet == '4') {soma  = soma + 4;}
            if (vet == '5') {soma  = soma + 5;}
            if (vet == '6') {soma  = soma + 6;}
            if (vet == '7') {soma  = soma + 3;}
            if (vet == '8') {soma  = soma + 7;}
            if (vet == '9') {soma  = soma + 6;}
        }
        printf("%d leds\n", soma);
        soma = 0;
    }
    return 0;
}