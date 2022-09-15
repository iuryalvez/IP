#include <stdio.h>

int main () {

    double pontoAtual[3];
    double pontoAnt[3];
    double vetor12[3]; // vetor que liga o ponto 1 e o ponto 2
    double maior;
    int n, i;

    scanf("%d", &n);
    if (n < 2) return 0;
    for (i = 0; i < 3; i++) scanf("%lf", &pontoAnt[i]); // lendo o primeiro ponto 
    n -= 1; // já lemos um ponto
    while (n--) {
        for (i = 0; i < 3; i++) scanf("%lf", &pontoAtual[i]); // lendo o ponto atual
        for (i = 0; i < 3; i++) { // dando valores para o vetor que liga o ponto 1 e o ponto 2
            vetor12[i] = pontoAtual[i] - pontoAnt[i]; // fazendo uma coordenada receber o seu devido valor
            if (vetor12[i] < 0) vetor12[i] *= -1; // fazendo o módulo
            if (i == 0) maior = vetor12[i]; // dando valor para um maior válido
            if (vetor12[i] > maior) maior = vetor12[i]; // atualização do maior se houver
        }
        for(i = 0; i < 3; i++) pontoAnt[i] = pontoAtual[i]; // atualizando o ponto anterior
        printf("%.2lf\n", maior);
    }

    return 0;
}