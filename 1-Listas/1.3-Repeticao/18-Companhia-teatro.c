#include <stdio.h>

#define DF 200
#define DI 0.05
#define QTD_COMUM 120

int main () {

    float v_ing, v_ini, v_fin;
    float cont, mC;
    float lucro, mL;
    int qtd_i, mI;

    scanf("%f %f %f", &v_ing, &v_ini, &v_fin);

    mL = 0;
    lucro = 0;
    qtd_i = 0;

    if (v_ini > v_fin) {
        printf("INTERVALO INVALIDO.\n");
        return 0;
    }

    for (cont = v_ini; cont <= v_fin; cont++) {

        if (cont < v_ing) {
            qtd_i = QTD_COMUM + (v_ing - cont) * 50; 
            lucro = qtd_i*cont - DF - qtd_i*DI; 
        }
        else if (cont == v_ing) {
            qtd_i = QTD_COMUM;
            lucro = qtd_i*cont - DF - qtd_i*DI;
        }
        else {
            qtd_i = QTD_COMUM - (cont - v_ing) * 60;
            lucro = qtd_i*cont - DF - qtd_i*DI;
        }
    
        if (mL < lucro) {
            mL = lucro;
            mC = cont;
            mI = qtd_i;
        }

        printf("V: %.2f, N: %i, L: %.2f\n", cont, qtd_i, lucro);
    
    }

    if (mL <= 0) { 
        mC = 0;
        mI = 0; 
    }

    printf("Melhor valor final: %.2f\n", mC);
    printf("Lucro: %.2f\n", mL);
    printf("Numero de ingressos: %i\n", mI);

    return 0;
}