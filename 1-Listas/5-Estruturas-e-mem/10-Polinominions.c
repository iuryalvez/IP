#include <stdio.h>
#include <stdlib.h>

struct Poli {
    float coef; //coeficiente
    int expo; //expoente
    char s; //sinal
};
typedef struct Poli poli;

void le_polinomio(poli *p, int n);

void opera_polinomios(poli *pr, poli *p1, poli *p2, int n1, int n2, int *nr);

void ordena_polinomio (poli *p, int n);

void print_polinomio(poli *p, int n);

// void libera_polinomios(poli *p1, poli *p2);

void troca_sinais(poli *p, int n);

int main () {
    poli p1[150], p2[150], pr[150];
    int n, n1, n2, nr;
    char sinal;
    scanf("%d%*c", &n);
    // printf("sinal: %c\n", sinal);
    // execucao de n vezes que serao operado polinomios;
    while (n--) {
        scanf("%c", &sinal);
        // numero de termos, alocacao e leitura do polinomio 1;
        scanf("%d%*c", &n1);
        // p1 = (poli *) malloc(n1*sizeof(poli)); // se p já é um ponteiro, preciso converter malloc para ponteiro ou nao;
        // // printf("struct: %lu\n",p1);
        // if (p1 == NULL) return 0;
        le_polinomio(p1,n1);

        // numero de termos, alocacao e leitura do polinomio 2;
        scanf("%d%*c", &n2);
        // p2 = (poli *) malloc(n2*sizeof(poli)); // se p já é um ponteiro, preciso converter malloc para ponteiro ou nao;
        // // printf("struct: %lu\n",p2);
        // if (p2 == NULL) {
        //     free(p1);
        //     return 0;
        // }
        le_polinomio(p2,n2);

        if (sinal == '-') {
            troca_sinais(p2,n2);
        }
        
        opera_polinomios(pr,p1,p2,n1,n2,&nr);
        if (pr == NULL) {
            free(p1);
            free(p2);
            return 0;
        }
    
        ordena_polinomio(pr,nr);

        print_polinomio(pr,nr);

        // libera_polinomios(p1,p2);
        // free(pr);
    }
    return 0;
}

void le_polinomio(poli *p, int n) {
    int i;
    for (i = 0; i < n; i++) {
        p[i].s = getchar();
        scanf("%f", &p[i].coef);
        scanf("%d%*c", &p[i].expo); 
        if (p[i].s == '-') p[i].coef *= -1;
    }
}

void troca_sinais(poli *p, int n) {
    int i;
    for (i = 0; i < n; i++) p[i].coef *= -1;
}

void opera_polinomios(poli *pr, poli *p1, poli *p2, int n1, int n2, int *nr) {
    int i, j, k, v = 0;
    int ctrl; 
    for (i = 0; i < n1; i++) {
        ctrl = 0;
        for (j = 0; j < n2; j++) {
            if (p1[i].expo == p2[j].expo) {
                pr[v].coef = p1[i].coef + p2[j].coef;
                pr[v].expo = p1[i].expo;
                v++;
                ctrl++;
            }
        }
        if (ctrl == 0) {
            pr[v].coef = p1[i].coef;
            pr[v].expo = p1[i].expo;
            v++;
        }
    }
    for (j = 0; j < n2; j++) {
        ctrl = 0;
        for (k = 0; k < n1; k++) {
            if (p2[j].expo == p1[k].expo) {
                ctrl++;
            }
        }
        if (ctrl == 0) {
            pr[v].coef = p2[j].coef;
            pr[v].expo = p2[j].expo;
            v++;
        }
    }
    *nr = v;
}

void ordena_polinomio (poli *p, int n) {
    int i,j,t;
    poli *pt = p;
    int m;
    for (i = 0; i < n-1; i++) {
        m = p[i].expo;
        t = i;
        for (j = i+1; j < n; j++) {
            if (p[j].expo == 0) {
                pt[j] = p[n-1];
                p[n-1] = p[j];
                p[j] = pt[j];
            }
            if (p[j].expo > m) {
                m = p[j].expo;
                t = j;
            }
        }
        printf("pt[%d]: %.2f^%d\n", i, pt[i].coef, pt[i].expo);
        if (t != i) {
            pt[t] = p[i];
            p[i] = p[t];
            p[t] = pt[t];
        }
        
    }
}

void print_polinomio(poli *p, int n) {
    int i;
    for (i = 0; i < n; i++) {
        if (i > 0) {
            if (p[i].coef > 0) printf("+"); 
        }
        if (p[i].expo == 0) printf("%.2f", p[i].coef); 
        else printf("%.2fX^%d", p[i].coef,p[i].expo);
    }
    printf("\n");
}
// void libera_polinomios(poli *p1, poli *p2) {
//     free(p1);
//     free(p2);
// }