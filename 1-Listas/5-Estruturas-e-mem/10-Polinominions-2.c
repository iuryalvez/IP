#include <stdio.h>

#define M 100
#define TRUE 1
#define FALSE -1

struct polinomio {
    float c;
    int e;
};

typedef struct polinomio polinomio;

/**
 * @brief função que lê polinômios
 * 
 * @param n tamanho do polinômio
 * @param P polinômio P
 */
void ler_polinomio(int n, polinomio P[]);

/**
 * @brief função que soma dois polinômios e retorna o resultado
 * 
 * @param P1 polinômio P1
 * @param P2 polinômio P2
 * @param n1 tamanho do primeiro polinômio
 * @param n2 tamanho do segundo polinômio
 * @param n3 tamanho do terceiro polinômio (calculado na função)
 * @param PR polinômio PR, oresultante
 * @return void
 */
void soma_polinomio(polinomio P1[], polinomio P2[], int n1, int n2, int *n3, polinomio PR[]);

/**
 * @brief função que subtrai dois polinômios e retorna o resultado
 * 
 * @param P1 polinômio P1
 * @param P2 polinômio P2
 * @param n1 tamanho do primeiro polinômio
 * @param n2 tamanho do segundo polinômio
 * @param n3 tamanho do terceiro polinômio (calculado na função)
 * @param PR polinômio PR, oresultante
 * @return void
 */
void subtrai_polinomio(polinomio P1[], polinomio P2[], int n1, int n2, int *n3, polinomio PR[]);

/**
 * @brief função que ordena um polinômio
 * 
 * @param P polinômio P
 * @param tam tamanho do polinômio
 */
void ordena_polinomio(polinomio P[], int tam);

/**
 * @brief função que printa um polinômio
 * 
 * @param P polinômio a ser printado
 * @param tam tamanho do polinômio
 */
void print_polinomio(polinomio P[], int tam);

int main(){
    
    polinomio P1[50], P2[50], PR[100];
    int n, n1, n2, n3;
    char op;
    
    scanf("%d%*c", &n);
    
    while(n--){
        scanf("%c%*c", &op);
        scanf("%d%*c", &n1);
        ler_polinomio(n1,P1);
        
        scanf("%d%*c", &n2);

        ler_polinomio(n2,P2);
        
        if(op =='+') soma_polinomio(P1,P2,n1,n2,&n3,PR);
        else subtrai_polinomio(P1,P2,n1,n2,&n3,PR);
   
        ordena_polinomio(PR,n3);
   
        print_polinomio(PR,n3);
    }

    return 0;
}

void ler_polinomio(int n, polinomio P[]){
    int i;
    for(i=0;i<n;i++){
        scanf("%f", &P[i].c);
        scanf("%d%*c", &P[i].e);
    }
}

void soma_polinomio(polinomio P1[], polinomio P2[], int n1, int n2, int *n3, polinomio PR[]){
    int i, j, cont;
    int check, pos;
    //polinomio PR[M];
    for(i = 0; i < n1; i++) { // somando os coeficientes com expoentes que são iguais em P1 e P2 e os que estão em P1 mas nãoestão em P2
        check = 0; // variável booleana (TRUE OR FALSE)
        for(j = 0; j < n2; j++) { // verificando os iguais e vendo quando é diferente
            if (P1[i].e == P2[j].e) {
                check = 1; // atualizando check se for igual
                pos = j; // armazenando a posição em que são iguais
            }
        }
        if (check == 1) { // se há um igual, somá-los e colocar no PR
            PR[i].c = P1[i].c + P2[pos].c;
            PR[i].e = P1[i].e;
        }
        else { // se são diferentes, colocar o que está em P1 em PR
            PR[i].c = P1[i].c;
            PR[i].e = P1[i].e;
        }
    }
    cont = i; // armazenando o valor da última posição de PR
    for(i = 0; i < n2; i++) {
        check = 0;
        for(j = 0; j < n1; j++) {
            if (P1[j].e == P2[i].e) check = 1;
        }
        if (check == 0) {
            PR[cont].c = P2[i].c;
            PR[cont].e = P2[i].e;
            cont++; // atualizando para o próximo se houver
        }
    }
    *n3 = cont;
}

void subtrai_polinomio(polinomio P1[], polinomio P2[], int n1, int n2, int *n3, polinomio PR[]){
    int i, j, cont;
    int check, pos;
    //polinomio PR[M];
    for(i = 0; i < n1; i++) { // somando os coeficientes com expoentes que são iguais em P1 e P2 e os que estão em P1 mas não estão em P2
        check = 0; // variável booleana (TRUE OR FALSE)
        for(j = 0; j < n2; j++) { // verificando os iguais e vendo quando é diferente
            if (P1[i].e == P2[j].e) {
                check = 1; // atualizando check se for igual
                pos = j; // armazenando a posição em que são iguais
            }
        }
        if (check == 1) { // se há um igual, subtraí-los e colocar no PR
            PR[i].c = P1[i].c - P2[pos].c;
            PR[i].e = P1[i].e;
        }
        else { // se são diferentes, colocar o que está em P1 em PR
            PR[i].c = P1[i].c;
            PR[i].e = P1[i].e;
        }
    }
    cont = i; // armazenando o valor da última posição de PR
    for(i = 0; i < n2; i++) {
        check = 0;
        for(j = 0; j < n1; j++) {
            if (P1[j].e == P2[i].e) {
                check = 1;
                pos = j;
            }
        }
        if (check == 0) {
            PR[cont].c = (-1) * P2[i].c;
            PR[cont].e = P2[i].e;
            cont++; // atualizando para o próximo se houver
        }
    }
    *n3 = cont;
}

void ordena_polinomio(polinomio P[], int tam) {
    int i, j;
    polinomio temp;
    for(i = 0; i < tam-1; i++) {
        for(j = i+1; j < tam; j++) {
            if(P[i].e < P[j].e) {
                temp = P[i]; // armazenando os valores de P[i] para efetuar a troca
                P[i] = P[j]; // trocando
                P[j] = temp; // jogando os valores de P[i] em P[j]
                i = 0; // reinicializando o i
            }
        }
    }
}

void print_polinomio(polinomio P[], int tam){
    int i;
    for(i=0;i<tam;i++){
        if(P[i].c>0 && P[i].e!=0){
            printf("+%.2fX^", P[i].c);
            printf("%d", P[i].e);
        }
        if(P[i].c<0 && P[i].e!=0){
            printf("%.2fX^", P[i].c);
            printf("%d", P[i].e);
        }
        if(P[i].c>0 && P[i].e==0) printf("+%.2f", P[i].c);
        if(P[i].c<0 && P[i].e==0) printf("%.2f", P[i].c);
    }
    printf("\n");
}
