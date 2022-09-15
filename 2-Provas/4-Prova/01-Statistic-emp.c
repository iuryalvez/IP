#include <stdio.h>
#include <stdlib.h>

#define MAX 500
#define SALMIN 1200

typedef struct {
    int matricula;
    int idade;
    int numFilhos;
    char sexo;
    double salario;
} FUNCIONARIO;

int main () {

    int cont[4] = {0,0,0,0};
    int n;
    int i;
    double mid=0, mf=0;
    scanf("%d", &n);
    FUNCIONARIO *f;
    f = (FUNCIONARIO *) malloc(n*sizeof(FUNCIONARIO));
    for (i = 0; i < n; i++) {
        scanf("%d %d %d %c %lf", &f[i].matricula, &f[i].idade, &f[i].numFilhos, &f[i].sexo, &f[i].salario);
    }
    for (i = 0; i < n; i++) {
        mid += f[i].idade;
        mf += f[i].numFilhos;
    }
    mid /= (double)n;
    mf /= (double)n;
    // printf("mid:%lf mf:%lf\n", mid, mf);
    for (i = 0; i < n; i++) {
        if (f[i].idade > mid && f[i].salario > 3*SALMIN) cont[0]++;
        if (f[i].numFilhos > mf && f[i].sexo == 'F') cont[1]++;
        if (f[i].numFilhos > mf && f[i].sexo == 'M') cont[2]++;
        if (f[i].idade > 47 && f[i].salario/(f[i].numFilhos+1) < SALMIN*2) cont[3]++; 
    }
    for (i = 0; i < 4; i++) {
        printf("%d", cont[i]);
        if (i != 3) printf(" ");
        else printf("\n");
    }
    free (f);
    return 0;
}