#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int mat, dia, mes, ano;
    char *nome[200];
} aluno;

void ordena_alunos(aluno *a, int n);

int main () {
    aluno *a = NULL;
    int n;
    int i;
    scanf("%d", &n);
    a = (aluno *) malloc(n*sizeof(aluno)); 
    if (n < 1 || n > 30) return 0;
    for (i = 0; i < n; i++) {
        scanf("%d %d %d %d %[^\n]", &a[i].mat, &a[i].dia, &a[i].mes, &a[i].ano, a[i].nome);
        // printf("Matric: %d Nome: %s Data Nasc: %d/%d/%d\n", a[i].mat, a[i].nome, a[i].dia, a[i].mes, a[i].ano);
    }
    ordena_alunos(a,n);
    for (i = 0; i < n; i++) {
        printf("Matric.: %d Nome: %s Data Nasc: %d/%d/%d\n", a[i].mat, a[i].nome, a[i].dia, a[i].mes, a[i].ano);
    }
    free(a);
    return 0;
}

void ordena_alunos(aluno *a, int n) {
    int i, j;
    aluno t;
    for (i = 0; i < n; i++) {
        for (j = i+1; j < n; j++) {
            if (a[i].ano < a[j].ano) {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
            else if (a[i].ano == a[j].ano) {
                if (a[i].mes < a[j].mes) {
                    t = a[i];
                    a[i] = a[j];
                    a[j] = t;
                }
                else if (a[i].mes == a[j].mes) {
                    if (a[i].dia < a[j].dia) {
                        t = a[i];
                        a[i] = a[j];
                        a[j] = t;
                    }
                }
            }
        }
    }
}