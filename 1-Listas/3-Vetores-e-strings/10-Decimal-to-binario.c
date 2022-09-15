#include <stdio.h> 

#define MAX 32768

int main () {

    int n, num[32], t, i;

    while ((scanf("%d", &n)) != EOF) {
        if (n > MAX) break;
        t = 0;
        while (n != 0) {
            if ((float)n/2 != (int)n/2) {
                num[t] = 1;
                t++;
                n-=1;
            }
            else {
                num[t] = 0;
                t++;
            }
            n/=2;
        }
        for (i = t-1; i >= 0; i--) {
            printf("%i", num[i]);
        }
        printf("\n");
    }
    return 0;
}