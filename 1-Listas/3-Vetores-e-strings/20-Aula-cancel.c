#include <stdio.h>

#define MAX 50

int main () {

    int n, k;
    int i, j = 0;
    
    scanf("%d %d", &n, &k);
    if ((n < 1 || n > 1000) || (k < 1 || k > 1000)) return 0;
    
    int a[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] <= 0) j++;
    }
    if (j < k) printf("SIM\n");
    else {
        printf("NAO\n");
        for (i = n; i > 0; i--) if (a[i-1] <= 0) printf ("%d\n", i);
    }
    return 0;
}