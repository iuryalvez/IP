#include "poly.h"

Poly *_alocarUmPolinomio(Poly *Polinomios, int tam) {

    Polinomios = (Poly *) realloc(Polinomios, sizeof(Poly)*(1+tam)); // realocando sempre pra mais um
    if(!Polinomios) {
        printf("Erro de memoria!\n");
        return NULL;
    }
    return Polinomios;

}

char *_alocarString(int tam) {

    char *str;
    str = (char *) malloc(sizeof(char)*(tam+1));
    if (!str) {
        printf("Erro de memoria!\n");
        return NULL;
    }
    return str;

}

double *_alocarCoef(int tam) {
    
    double *coef = NULL;
    coef = (double *) calloc(sizeof(double),tam+1);
    if (!coef) {
        printf("Erro de memoria!\n");
        return NULL;
    }
    return coef;

}

void _imprimirPolinomios(Poly *Polinomios, int tam) {
    int i, j, check;
    for (i = 0; i < tam; i++) {
        check = 0;
        printf("%s: ", Polinomios[i].id);
        for (j = 0; j <= Polinomios[i].p; j++) {
            if (Polinomios[i].coef[j] != 0) {
                
                if (Polinomios[i].coef[j] < 0) {
                    printf("%.0lfx^%d", Polinomios[i].coef[j], j);
                    if (check == 0) check = 1;
                }
                
                else if (check == 0) {
                    printf("%.0lfx^%d", Polinomios[i].coef[j], j);
                }
                
                else printf("+%.0lfx^%d", Polinomios[i].coef[j], j);
            
            }
        }
        printf("\n");
    }
}

void _imprimirPolinomio(Poly P) {

    int i, check = 0;
    for (i = 0; i <= P.p; i++) {
        if (P.coef[i] != 0) {
            if (P.coef[i] < 0) {
                printf("%.0lfx^%d", P.coef[i], i);
                if (check == 0) check = 1; // verifica se foi o primeiro da linha
            }
            else if (check == 0) {
                printf("%.0lfx^%d", P.coef[i], i);
                check = 1; // verifica se foi o primeiro da linha
            }
            else printf("+%.0lfx^%d", P.coef[i], i); // se não é o primeiro da linha e é positivo, preciso colocar o sinal +
        }
    }
    printf("\n");


}

void _limparString(char *str) {
    int i;
    for (i = 0; i < strlen(str); i++) str[i] = '\0';
}

void _liberarPolinomios(Poly *Polinomios, int tam) {
    int i;
    for (i = 0; i < tam; i++) {
        if (Polinomios[i].id) free(Polinomios[i].id);
        if (Polinomios[i].coef) free(Polinomios[i].coef);
    }
    free(Polinomios);
}

Poly _encontrarPolinomio(Poly *P, int tam, char *str) {
    int i, j;
    Poly Poli;
    for (i = 0; i < tam; i++) {
        if (strcmp(P[i].id,str) == 0) { // se forem iguais, encontrei um dos meus polinômios
            Poli = P[i];
            return Poli;
        }
    }
    Poli.coef = NULL;
    return Poli;
}

Poly _sum_poly(Poly P1, Poly P2, Poly PR) {
    
    int i;

    for (i = 0; i <= P1.p; i++) {
        if (P1.coef[i] != 0) {
            if (P2.coef[i] != 0 && P2.p <= i) {
                PR.coef[i] = P1.coef[i] + P2.coef[i];
            }
            else {
                PR.coef[i] = P1.coef[i];
            }
        }
    }
    for (i = 0; i <= P2.p; i++) {
        if (P2.coef[i] != 0) {
            if (P1.coef[i] == 0 || P1.p < i) {
                PR.coef[i] = P2.coef[i];
            }
        }
    }
    return PR;
}

Poly _sub_poly(Poly P1, Poly P2, Poly PR) {
    
    int i;

    for (i = 0; i <= P1.p; i++) {
        if (P1.coef[i] != 0) {
            if (P2.coef[i] != 0 && P2.p <= i) {
                PR.coef[i] = P1.coef[i] - P2.coef[i];
            }
            else {
                PR.coef[i] = P1.coef[i];
            }
        }
    }
    for (i = 0; i <= P2.p; i++) {
        if (P2.coef[i] != 0) {
            if (P1.coef[i] == 0 || P1.p < i) {
                PR.coef[i] = P2.coef[i] * (-1);
            }
        }
    }
    return PR;
}

int _maiorCoef(Poly *P, int tam) {
    double maior;
    int i;
    for (i = 0; i < tam; i++) {
        if (i == 0) maior = P[i].p;
        else {
            if (P[i].p > maior) maior = P[i].p;
        }
    }
    return maior;
}

Poly _zerarCoeficientes(Poly P) {
    int i;
    for (i = 0; i <= P.p; i++) {
        P.coef[i] = 0;
    }
    return P;
}
