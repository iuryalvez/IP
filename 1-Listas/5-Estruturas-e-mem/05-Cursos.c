#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int cdc;
    float vpc;
    char ndc[100]; //nome do curso
} curso;

typedef struct {
    char nda[500];
    int cdc;
    int numdc; //numero de creditos
} aluno;

typedef struct {
    char nda[500];
    char ndc[100]; //nome do curso
    int numdc; //numero de creditos
    float vpc;
    float mns; //mensalidade
} info;

int main () {

    int n, m;
    int i, j;
    curso *c = NULL;
    aluno *a = NULL;
    info *d = NULL;

    scanf("%d", &n);
    if (n < 4 || n > 30) return 0;

    c = (curso *) malloc(n*sizeof(curso));
    for (i = 0; i < n; i++) {
        scanf("%d %f%*c", &c[i].cdc, &c[i].vpc); 
        scanf("%[^\n]%*c", c[i].ndc);
    }
    scanf("%d%*c", &m);
    if (m < 1 || m > 1000) return (0);

    a = (aluno *) malloc(m*sizeof(aluno));
    d = (info *) malloc(m*sizeof(info));

    for (i = 0; i < m; i++) {
        scanf("%[^\n]", a[i].nda);
        scanf("%d %d%*c", &a[i].cdc, &a[i].numdc); 
        for (j = 0; j < n; j++) {
            if (a[i].cdc == c[j].cdc) {
                strcpy(d[i].nda,a[i].nda);
                strcpy(d[i].ndc,c[j].ndc);
                d[i].numdc = a[i].numdc;
                d[i].vpc = c[j].vpc;
                d[i].mns = a[i].numdc*c[j].vpc;
                break;
            }
        }
    }
    for (i = 0; i < m; i++) {
        printf("Aluno(a): %s Curso: %s Num. Creditos: %d Valor Credito: %.2f Mensalidade: %.2f\n", 
        d[i].nda, d[i].ndc, d[i].numdc, d[i].vpc, d[i].mns);
    }
    
    free(c);
    free(a);
    free (d);
    
    return 0;
}