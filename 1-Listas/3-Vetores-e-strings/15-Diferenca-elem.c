#include <stdio.h> 

#define MAX 1000

int main () {

    int t, tv, dif;
    int i, j, k;
    int n[MAX];

    scanf("%d", &t);
    // if (t < 1 || t > 10) return 0;

    for (i = 0; i < t; i++) { // numero de repetições dada pelo user
        scanf("%d", &tv);
        // if (tv < 2 || tv > 1000) return 0;
        
        for (j = 0; j < tv; j++) { // escanear os elementos de cada vetor
            scanf("%d", &n[j]);
            // if (n[j] < -1000 || n[j] > 1000) return 0;
        }
        
        // int l = MAX;
        dif = 10000;
        for (j = 0; j < tv; j++) { // a menor distancia entre dois elementos
            for (k = 0; k < tv && k != j; k++) {
                // dif = n[j]-n[k];
                // if (dif < 0) dif *= -1;
                // if (l > dif) l = dif;
                if (n[j]-n[k]>=0 && n[j]-n[k]<dif) dif=n[j]-n[k];
                else if (n[k]-n[j]>=0 && n[k]-n[j]<dif) dif=n[k]-n[j];
            }
        }
        printf("%d %d\n", dif, tv*tv);
    }

    return 0;
}