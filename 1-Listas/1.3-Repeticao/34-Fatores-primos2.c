#include <stdio.h>
int main(){
    int num = 0, i, k = 0;
    
    while(num<=1){
        scanf("%d", &num);
        if (num <= 1) printf("Fatoracao nao e possivel para o numero %d!\n", num);
    }
    printf("%d = ", num);
    
    for(i=2;num>1 && i <= num; i++){
        if(num%i==0){
            if(k>0) printf(" x ");
            k++;
            printf("%d", i);
            num /= i;
        }
    }
    printf("\n");
}