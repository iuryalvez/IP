#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
typedef struct {
    char fruit[50];
    float price;
} MERC;
 
typedef struct {
    char fruit[50];
    int qtd;
} COMP;
 
int main () {
 
    int n;
    int q1, q2;
    int i, j, k;
    float res;
    // int ind;
    MERC *m;
    COMP *p;
    
    scanf("%d", &n);
    

    
    for (i = 0; i < n; i++) {
        scanf("%d", &q1);
        m = (MERC *) calloc(q1, sizeof(MERC)); 
        p = (COMP *) calloc(q1, sizeof(COMP));
        if (m == NULL || p == NULL) return 0;

        for (j = 0; j < q1; j++) scanf("%s %f", m[j].fruit, &m[j].price);
            
        scanf("%d", &q2);
        for (j = 0; j < q2; j++) scanf("%s %d", p[j].fruit, &p[j].qtd);
        res = 0;
        for (j = 0; j < q1; j++) {
            for (k = 0; k < q2; k++) {
                // printf("j:%d\tk:%d\nfruta-mercado:%s\npreco-mercado:%f\nfruta-parcinova:%s\nqthd-parcinova:%d\n", j, k, m[j].fruit, m[j].price, p[k].fruit, p[k].qtd);
                // ind = 0;
                // while (m[j].fruit[ind]==p[k].fruit[ind]) {
                //     if (m[j].fruit[ind] == '\0' && p[k].fruit[ind] == '\0') {
                //         ind=-1;
                //         break;
                //     }
                //     ind++;
                // }
                if (strcmp(m[j].fruit, p[k].fruit) == 0) res += m[j].price*p[k].qtd;   
            }
        }
        printf("R$ %.2f\n", res);
        free (m);
        free (p);  
    }
    return 0;
}