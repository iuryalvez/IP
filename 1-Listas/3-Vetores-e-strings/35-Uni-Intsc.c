#include <stdio.h>

#define MAX 99999

void le_conjunto (int *A, int n);

void unir (int A1[], int q1, int A2[], int q2, int AU[], int qU);

void print_uniao (int AU[], int qU);

void interseccionar (int AU[], int qU, int AI[], int *qI);

void print_intersecao (int AI[], int qI);

int main () {
    int q1, q2, qU, qI=0;
    int i, j;
    int A1[MAX], A2[MAX], AU[MAX], AI[MAX];
    
    while (1) {
        scanf("%i", &q1);
        if (q1 > 0 && q1 < 100) break;
    }
    while (1) {
        scanf("%i", &q2);
        if (q2 > 0 && q2 < 100) break;
    }
    // foi feita a leitura do tamanho de cada conjunto
    le_conjunto(A1,q1);
    le_conjunto(A2,q2);
    // foi feita a leitura dos elementos
    qU=q1+q2; // quantidade de elementos da uniao deles, sem retirar os repetidos
    unir(A1,q1,A2,q2,AU,qU);
    interseccionar(AU,qU,AI,&qI);
    for (i = 0; i < qU && AU[i] != MAX; i++) {
        for (j = 0; j < qU && j != i; j++) {
            if (AU[i] == AU[j] && j != i && AU[i] != MAX) {
                AU[i] = MAX;
                // printf("AU[%i]: %i\n", i, AU[i]);
            }
        }
    }
    // atualizar o tamanho do conjunto unido depois de retirar a interseção
    print_uniao(AU,qU);
    print_intersecao(AI,qI);
    return 0;
}

void le_conjunto (int *A, int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
        for (j = 0; j < i && i != j; j++) {
            while (A[i] == A[j] && j != i) {
                scanf("%d", &A[i]);
                j = 0;
            }
        }
        // printf("%d ", A[i]);
    }   
}
void unir (int A1[], int q1, int A2[], int q2, int AU[], int qU) {
    int i;
    int j = 0; 
    // i,j sao contadores para controlar a alocagem de elementos em AU
    for (i = 0; i < q1; i++) {
        AU[i] = A1[i];
        // printf("A1[i]: %d\n", A1[i]);
    }
    for (i = q1; i < qU; i++) {
        AU[i] = A2[j];
        // printf("A2[j]: %d\n", A2[j]);
        j++;
    }
}
void print_uniao (int AU[], int qU) {
    int i;
    printf("("); 
    for (i = 0; i < qU; i++) {
        if (i == 0) printf("%i", AU[i]);
        if (i != 0 && AU[i] != MAX) printf(",%i", AU[i]);
    }
    printf(")\n");
}

void interseccionar (int AU[], int qU, int AI[], int *qI) {
    int i, j;
    for (i = 0; i < qU; i++) {
        for (j = 0; j < qU && j != i; j++) {
            if (AU[i] == AU[j]) {
                AI[*qI] = AU[i];
                // printf("AI[qI]: %d\n", AI[*qI]); // verificando se qI está atualizando
                *qI+=1;
            }
        }
    }
    // feita a intereseção dos elementos de AU
}

void print_intersecao (int AI[], int qI) {
    int i;
    printf("(");
    for (i = 0; i < qI; i++) {
        if (i != qI-1) printf("%i,", AI[i]);
        else printf("%i", AI[i]);
    }
    printf(")\n");
}