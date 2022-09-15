#include<stdio.h>

struct fracao{
    double num;
    double denom;
    double resul;
};

int main(){
    double cont=0;
    int i,j,k,t,n;
    struct fracao f[51];

    scanf("%d", &t);

    for(k=1;k<=t;k++){
        cont = 0;
        scanf("%d", &n);
        for(i=1;i<=n;i++){
            scanf("%lf/%lf", &f[i].num, &f[i].denom);
            f[i].resul = f[i].num/f[i].denom;
        }
        printf("Caso de teste %d\n", k);

        for(i=1;i<=n;i++){
            for(j=i+1;j<=n;j++){
                if(f[i].resul == f[j].resul){
                    printf("%.0lf/%.0lf equivalente a %.0lf/%.0lf\n", f[i].num, f[i].denom, f[j].num, f[j].denom);
                    cont++;
                }
            }
        }
        if(cont == 0) printf("Nao ha fracoes equivalentes na sequencia\n");
    }
    return 0;
}