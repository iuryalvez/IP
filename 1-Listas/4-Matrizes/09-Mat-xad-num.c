#include <stdio.h> 

int main () {

    int nl, nc;
    int m, n;
    int c;

    scanf("%d %d", &nl, &nc);
    c = 1;
    for (m = 0; m < nl; m++) {
        for (n = 0; n < nc; n++) {
            if (m % 2 == 0) {
                if (n % 2 == 0) printf("0");
                else {
                    printf("%d", c);
                    c++;
                }
            }
            else {
                if (n % 2 == 0) {
                    printf("%d", c);
                    c++;
                }
                else printf("0");
            }
            if (n != nc-1) printf(" ");
        }
        printf("\n");
    }
    return 0;
}