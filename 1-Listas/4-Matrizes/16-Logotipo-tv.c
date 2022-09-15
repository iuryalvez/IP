#include <stdio.h>
#define MAX 10


int main () {

    int L[MAX][MAX];
    int T[MAX][MAX];
    int dl, dt;
    int i, j, aux, aux2;
    int cont;
    scanf("%d", &dl);
    for (i = 0; i < dl; i++) {
        for (j = 0; j < dl; j++) {
            scanf("%d", &L[i][j]);
        }
    }
    scanf("%d", &dt);
    for (i = 0; i < dt; i++) {
        for (j = 0; j < dt; j++) {
            scanf("%d", &T[i][j]);
        }
    }
    for (i = 0; i <= dt-dl; i++) {
        for (j = 0; j <= dt-dl; j++) {
            aux = 0;
            cont = 0;
            if (T[i][j] == L[aux][aux]) {
                for ( ; aux < dl; aux++) {
                    for (aux2 = 0; aux2 < dl; aux2++) {
                        if (T[i+aux][j+aux2] == L[aux][aux2]) cont++; 
                        else break;
                    }
                }
                // printf("cont: %d\n", cont);
                if (cont == dl*dl) {
                    printf("sim\n");
                    return 0;
                }
            }
        }
    }
    printf("nao\n");
    return 0;
}