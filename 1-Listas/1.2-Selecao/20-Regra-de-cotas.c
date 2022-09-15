#include <stdio.h>

#define ESCOLA_PARTICULAR 1
#define ESCOLA_PUBLICA 2

#define PRETO 1
#define PARDO 2
#define INDIGENA 3
#define BRANCO 4

#define SALARIOMIN 937.0

#define MSG_NAO_COTISTA "ALUNO NAO COTISTA"
#define MSG_COTISTA "ALUNO COTISTA"

int main () {

    double renda;
    int familia, ensino, etnia;

    scanf("%lf %i %i %i", &renda, &familia, &ensino, &etnia);

    if (ensino == ESCOLA_PUBLICA && renda/familia <= 1.5*SALARIOMIN && etnia == BRANCO) {
        printf(MSG_COTISTA" (L1)\n");
    }
    if (ensino == ESCOLA_PUBLICA && renda/familia <= 1.5*SALARIOMIN && etnia != BRANCO) {
        printf(MSG_COTISTA" (L2)\n");
    }
    if (ensino == ESCOLA_PUBLICA && renda/familia > 1.5*SALARIOMIN && etnia == BRANCO) {
        printf(MSG_COTISTA" (L3)\n");
    }
    if (ensino == ESCOLA_PUBLICA && renda/familia > 1.5*SALARIOMIN && etnia != BRANCO) {
        printf(MSG_COTISTA" (L4)\n");
    }
    if (ensino == ESCOLA_PARTICULAR) {
        printf(MSG_NAO_COTISTA"\n");
    }
    return 0;
}