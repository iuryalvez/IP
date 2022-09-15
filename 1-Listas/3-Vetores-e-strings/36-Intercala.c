#include <stdio.h>
 
#define MAX 99999
 
/**
 * @brief faz a união de v1 e v2 para formar v3
 * 
 * @param v1 vetor 1 
 * @param q1 qtd de numeros no v1
 * @param v2 vetor 2
 * @param q2 qtd de numeros no v2
 * @param v3 união de v1 e v2
 * @param q3 q1 + q2
 * @param cont contador para eliminar a interseção de v1 e v2
 */
void intercalar (int v1[], int q1, int v2[], int q2, int v3[], int q3, int *cont);
 
/**
 * @brief ordena os numeros e printa na tela do usuário 
 * 
 * @param v3 união de v1 e v2 
 * @param q3 q1 + q2
 * @param cont elimina os numeros iguais se houver
 */
void ord_print (int v3[], int q3, int cont);
 
int main () {
    int q1, q2, q3;
    int i, cont = 0;
    int v1[MAX], v2[MAX], v3[MAX];
    scanf("%i", &q1);
    scanf("%i", &q2);
    if (q1 < 0 || q2 < 0 || q1 > 500000 || q2 > 500000) return 0;
    
    for (i = 0; i < q1; i++) {
        scanf("%i", &v1[i]);
        if (v1[i] < 0 || v1[i] > 999999) return 0;
    }
    for (i = 0; i < q2; i++) {
        scanf("%i", &v2[i]);
        if (v2[i] < 0 || v2[i] > 999999) return 0;
    }
    q3=q1+q2;
    
    intercalar(v1,q1,v2,q2,v3,q3,&cont);
    ord_print(v3,q3,cont);
    return 0;
}
 
void intercalar (int v1[], int q1, int v2[], int q2, int v3[], int q3, int *cont) {
    int i, j = 0, k = 0;
    for (i = 0; i < q3; i++) {
        if (j < q1 && k < q2 && v1[j] == v2[k]) {
            v3[i] = v1[j];
            j++;
            k++;
            *cont+=1;
        }
        else if (j < q1 && k < q2) {
            v3[i] = v1[j];
            v3[i+1] = v2[k];
            j++;
            k++;
            i++;
        }
        else if (j < q1) {
            v3[i] = v1[j];
            j++;
        }
        else if (k < q2) {
            v3[i] = v2[k];
            k++;
        }
    }
}
 
void ord_print (int *v3, int q3, int cont) {
    int i, j, temp;
    for (i = 0; i < q3; i++) {
        for (j = 0; j < q3; j++) {
            if (v3[i] < v3[j]) {
                temp = v3[i];
                v3[i] = v3[j];
                v3[j] = temp;
            }
        }
    }
    for (i=(0+cont);i<q3; i++) printf("%i\n", v3[i]);
}
