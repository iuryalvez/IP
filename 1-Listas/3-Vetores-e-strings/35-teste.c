#include <stdio.h>
#include <string.h>

#define MAX 10000

int * unir (int A1[], int q1, int A2[], int q2, int AU[], int qU);

void print_uniao (int AU[], int qU);

void interseccionar (int AU[], int qU, int AI[], int *qI);

void print_intersecao (int AI[], int qI);

int main () {
    int q1, q2, qU, qI=0, qU2;
    int i;
    int A1[MAX], A2[MAX], AU[MAX], AI[MAX], AU2[MAX];
    
    while (1) {
        scanf("%i", &q1);
        if (q1 > 0 && q1 < 100) break;
    }
    while (1) {
        scanf("%i", &q2);
        if (q2 > 0 && q2 < 100) break;
    }
    // foi feita a leitura do tamanho de cada conjunto
    for (i = 0; i < q1; i++) {
        scanf("%i", &A1[i]);
    }
    for (i = 0; i < q2; i++) {
        scanf("%i", &A2[i]);
    }
    // foi feita a leitura dos elementos
    qU=q1+q2; // quantidade de elementos da uniao deles, sem retirar os repetidos
    
    AU2[MAX] = unir(A1,q1,A2,q2,AU,qU);
    qU2 = strlen(AU2);
    print_uniao(AU2,qU);
    interseccionar(AU,qU,AI,&qI);
    print_intersecao(AI,qI);

    return 0;
}

int * unir (int A1[], int q1, int A2[], int q2, int AU[], int qU) {
    int i;
    int j = 0; 
    int k = 0;
    // i,j,k sao contadores para controlar a alocagem de elementos em AU
    for (i = 0; i < qU; i++) {
        if (j < q1 && k < q2) {
            AU[i] = A1[j];
            AU[i+1] = A2[k];
            j++;
            k++;
            i++;
        }
        else if (j < q1) {
            AU[i] = A1[j];
            j++;
        }
        else if (k < q2) {
            AU[i] = A2[k];
            k++;
        }
    }
    // foi feita a completa uniao dos conjuntos, agora AU possui todos mesmo repetidos
}
void print_uniao (int AU[], int qU) {
    int i;
    printf("("); 
    for (i = 0; i < qU; i++) {
        if (i != qU-1) printf("%i,", AU[i]);
        else printf("%i)\n", AU[i]);
    }
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
        else printf("%i)\n", AI[i]);
    }
}