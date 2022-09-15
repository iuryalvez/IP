#include <stdio.h>

int main () {

    int horas, minutos, segundos;

    scanf("%i\n%i\n%i", &horas, &minutos, &segundos);

    minutos = horas * 60 + minutos;
    segundos = minutos * 60 + segundos;

    printf("O TEMPO EM SEGUNDOS E = %i\n", segundos);

    return 0;
}