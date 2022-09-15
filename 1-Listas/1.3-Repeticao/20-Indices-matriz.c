#include <stdio.h> 

int main () {

    int m, n;
    int l, c;

    scanf("%d %d", &m, &n);

    for (l = 1; l <= m; l++) {
        
        for (c = 1; c <= n; c++) {
            if (l != c && l > c) printf("(%i,%i)", l, c);
            if (l-c > 1 && c != n) printf("-");
        }
        printf("\n");
    }
    
    return 0;
}