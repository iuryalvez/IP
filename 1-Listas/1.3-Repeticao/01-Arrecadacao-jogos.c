#include <stdio.h>

#define POPULAR (p/100 * publico)
#define GERAL (g/20 * publico)
#define ARQUIBANCADA (a/10 * publico)
#define CADEIRA (c/5 * publico)
#define RENDA (POPULAR + GERAL + ARQUIBANCADA + CADEIRA)

int main () {

    int n_jogos;
    int jogos;
    int publico;
    double p, g, a, c;

    scanf("%i", &jogos);
    n_jogos = 1;
    while (jogos > 0) {
        scanf("%i %lf %lf %lf %lf", &publico, &p, &g, &a, &c);
        printf("A RENDA DO JOGO N. %i E = %.2lf\n", n_jogos++, RENDA);
        jogos--;
    }

    return 0;
}