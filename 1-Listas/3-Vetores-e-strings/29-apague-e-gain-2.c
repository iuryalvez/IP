#include <stdio.h>
#define MAX 100100
int main(){
    char pilha[MAX], num;
    int topo, n, d, apagados, i; 
        while(scanf("%d%d%*c", &n, &d) && (n+d)){
            apagados = 0;
            for(i = 0, topo = -1; i < n; i++){
                scanf("%c", &num);
                    while(topo>-1 && apagados<n-d && num>pilha[topo]){
                        topo--;
                        apagados++;
                    }
                    // printf("apagados: %d\n", apagados);
                    if(topo+1<d) pilha[++topo] = num;
            }
            pilha[++topo] = '\0';
            printf("%s\n", pilha);
        }
    return 0;
}

