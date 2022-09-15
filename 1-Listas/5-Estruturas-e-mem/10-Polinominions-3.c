#include <stdio.h>

struct polinomio {
    float c;
    int e;
};

typedef struct polinomio polinomio;

void le_polinomio (polinomio p[], int n){
    int i;
    for(i = 0; i < n; i++){
		scanf("%f %d%*c", &p[i].c, &p[i].e);
    }
}

void soma_polinomio(polinomio p1[], polinomio p2[], int n1, int n2, int *n3, polinomio pr[]){
    int i,j,cont;
    int indicador,pos;
    for(i = 0; i < n1; i++){
        indicador = 0;
        for(j = 0; j < n2; j++){
            if(p1[i].e == p2[j].e){
                indicador = 1;
                pos=j;
            }
        }
        if(indicador ==1){
            pr[i].c = p1[i].c+p2[pos].c;
            pr[i].e = p1[i].e; // tanto faz de qual expoente o pr vai receber, pos p1 e p2 serao iguais
        }
        else{
            pr[i].c = p1[i].c;
            pr[i].e = p1[i].e; 
        }
    }
    cont=i;
    for(i = 0; i < n2; i++){
        indicador = 0;
        for(j = 0; j < n1; j++){
            if (p1[j].e == p2[i].e) {
                indicador = 1;
            }
        }
        if (indicador == 0) {
            pr[cont].c = p2[i].c;
            pr[cont].e = p2[i].e; 
            cont++;
        }
    }
    *n3=cont;
}

void subtrai(polinomio p1[], polinomio p2[], int n1, int n2, int *n3, polinomio pr[]){
    int i,j;
    int indicador,pos,cont;
    for(i = 0; i < n1; i++){
        indicador = 0;
        for(j = 0; j < n2; j++){
            if(p1[i].e == p2[j].e){
                indicador = 1;
                pos=j;
            }
        }
        if(indicador ==1){
            pr[i].c = p1[i].c-p2[pos].c;
            pr[i].e = p1[i].e; // tanto faz de qual expoente o pr vai receber, pos p1 e p2 serao iguais
        }
        else{
            pr[i].c = p1[i].c;
            pr[i].e = p1[i].e; 
        }
    }
    cont=i;
    for(i = 0; i < n2; i++){
        indicador = 0;
        for(j = 0; j < n1; j++){
            if(p1[j].e == p2[i].e){
                indicador = 1;
                pos = j;
            }
        }
        if(indicador ==0){
            // // pr[cont].c = (-1)* p1[i].c-p2[j].c; não vai fazer subtração alguma quando são diferentes, apenas o jogo de sinais ↓
            pr[cont].c = (-1) * p2[i].c;
            pr[cont].e = p2[i].e; //tanto faz de qual expoente o pr vai receber, pos p1 e p2 serao iguais
            cont++;
        }
    }
    *n3=cont;
}

void ordena(polinomio p[], int tam){
    int i,j;
    polinomio temp;
    for(i=0;i<tam-1;i++){
        for(j=i+1;j<tam;j++){
            if(p[i].e < p[j].e){
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
                i = 0;
            }
        }    
    }
}

void print(polinomio p[],int tam){
    int i;
    for(i=0;i<tam;i++){
        if(p[i].c>0 && p[i].e!=0){
            printf("+%.2fX^",p[i].c);
            printf("%d",p[i].e);
        }
        if(p[i].c<0 && p[i].e!=0){
            printf("%.2fX^",p[i].c);
            printf("%d",p[i].e);
        }
        if(p[i].c>0 && p[i].e==0)printf("+%.2f",p[i].c);
        if(p[i].c<0 && p[i].e==0)printf("%.2f",p[i].c);
    }
    printf("\n");
}

int main () {
    char op;
    int testes, i;
    int n,n2,n3;
   
    polinomio p1[50], p2[50], pr[100];

    scanf ("%d%*c", &testes);
    for(i=0; i<testes; i++) {
        scanf("%c%*c", &op);
        scanf ("%d%*c", &n);
        le_polinomio(p1,n);
        scanf("%d%*c",&n2);
        le_polinomio(p2,n2);
        // print(p1,n);
        // print(p2,n2);
        if(op=='+'){
            soma_polinomio(p1,p2,n,n2,&n3,pr);
        }
        if(op=='-'){
            subtrai(p1,p2,n,n2,&n3,pr);
        }
        ordena(pr,n3);
        print(pr,n3);
    }
    return 0;
}