#include <stdio.h>
#define MAX 9

void ordena_vetor (int *v, int n);

void swap (int *a, int *b);

int main () {

    int anoes[MAX];
    int i, j;
    int soma;
    int t;
    scanf("%d", &t);
    while (t--) {
        for (i = 0; i < MAX; i++) {
            scanf("%d", &anoes[i]);
        }
        soma = 0;
        ordena_vetor(anoes,MAX);
        for (i = 0; i < MAX; i++) {
            soma += anoes[i];
        }
        for (i = 0; i < MAX-1; i++) {
            for (j = i+1; j < MAX; j++) {
                if ((soma-(anoes[i]+anoes[j])) == 100) {
                    anoes[i] = 100;
                    anoes[j] = 100;
                    break;
                }
            }
        }
        for (i = 0; i < MAX; i++) {
            if (anoes[i] != 100) printf("%d\n", anoes[i]);
        }
    }
    return 0;
}

void ordena_vetor (int *v, int n) {
    int i, maior, j;
    for (i = n-1; i > 0; i--) {
        for(j = 0; j < i; j++) {
            if (v[j] > v[i]) {
                maior = j;
                swap(&v[i], &v[maior]);
                j = 0;
            }
        }
    }
}

void swap (int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}