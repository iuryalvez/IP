#include <stdio.h>
 
int main () {
    
    double num;
    int n, cont, ant, ord;
    
    ant = 0;
    ord = 0;
    
    while (1) {
        scanf("%d", &n);
        
        if (n == 0) break;
        
        for(cont = 1; cont <= n; cont++) {
            scanf("%lf", &num);
            if (num > ant) ant = num;
            else ord++;
        }

        if (ord > 0) printf("DESORDENADA\n");
        else printf("ORDENADA\n");
        ant = 0;
        ord = 0;
    }
 
    return 0;
}