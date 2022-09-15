#include <stdio.h> 
#include <math.h>
#define MAX 100000

int main () {

    int n, d, dt;
    int i, j, t;
    int temp;
    char a[MAX];
    int dig[MAX];

    while (1) {
        temp = -1;
        t = 0;
        scanf("%d %d\n", &n, &d);
        if (n == 0 || d == 0) break;
        for (i = 0; i < n; i++) {
            scanf("%[^\n]", a);
        } 
        for (i = 0; a[i] != a[n]; i++) {
            dig[i] = a[i]-48;
        }
        dt = d;
        for (i = 0; i < d; i++) {
            for (j = t; j <= n-dt; j++) {
                if (dig[j] > temp) {
                    temp = dig[j];
                    t = j+1;
                }
            }
            printf("%d", temp);
            temp = -1;
            dt--;
        }
        printf("\n");
    }
    return 0;
}
