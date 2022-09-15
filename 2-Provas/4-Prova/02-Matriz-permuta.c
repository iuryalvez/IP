#include <stdio.h>
#include <stdlib.h>

/**
 * Essa função recebe um valor "n" e retorna um ponteiro
 * para uma matriz quadrada de inteiros com dimensão nxn.
 * A memória é alocada dinamicamente com uma estrutura
 * bidimensional.
 *
 * @param n Dimensão da matriz
 * @return int** Ponteiro para a matriz
 */
 int ** cria_matrix( int n );

 /**
 * Essa função recebe um ponteiro para uma matriz alocada
 * dinamicamente e libera a memória ocupada por ela.
 *
 * @param m Ponteiro para a matriz
 */
void destroi_matrix( int ** m, int n );

/**
 * Essa função recebe um ponteiro para uma matriz alocada
 * dinamicamente, sua dimensão n e retorna 1 caso essa
 * matriz seja uma matriz de permutação ou 0 caso contrário.
 * Além disso, essa função também calcula a soma de todos os
 * elementos da matriz e a retorna via referência pelo
 * ponteiro "soma".
 *
 * @param m Ponteiro para a matriz
 * @param n Dimensão da matriz
 * @param soma Ponteiro para inteiro que retornará a soma dos
 * elementos da matriz
 * @return int 1 caso a matriz seja de permutação
 * e 0 caso contrário
 */
int ePermutacao( int ** m, int n, int * soma );

int main () {
    int n, soma=0, t;
    scanf("%d", &n);
    t = ePermutacao(cria_matrix(n), n, &soma);
    if (t == 1) {
        printf("%d\nPERMUTACAO\n%d\n", n, soma);
    }
    else {
        printf("%d\nNAO E PERMUTACAO\n%d\n", n, soma);
    }
    return 0;
}

int ** cria_matrix( int n ) {
    int i, j;
    int **M;
    M = (int **) calloc(n, sizeof(int*));
    for (i = 0; i < n; i++) {
        M[i] = (int *) calloc (n, sizeof(int));
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &M[i][j]);
        }
    }
    return M;
}


int ePermutacao( int ** m, int n, int * soma ) {
    int i, j; 
    // cc e cl devem ser iguais a n-1 para ser permutacao
    int cc, cl, cl1, cc1;
    int cont=0;
    for (i = 0; i < n; i++) {
        cc = 0, cl = 0, cl1 = 0, cc1 = 0;
        for (j = 0; j < n; j++) {
            if (m[i][j] == 0) cl++;
            if (m[j][i] == 0) cc++;
            if (m[i][j] == 1) cl1++;
            if (m[j][i] == 1) cc1++;
            *soma+=m[i][j];
        }
        if (cl == n-1 && cc == n-1 && cc1 == 1 && cl1 == 1) cont++;
    }
    destroi_matrix(m, n);
    if (cont == n) return 1;
    else return 0;
}

void destroi_matrix( int ** m, int n ) {
    int i;
    for (i = 0; i < n; i++) free (m[i]);
    free (m);
}