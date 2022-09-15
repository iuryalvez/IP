#include <stdio.h>

int main () {

    int l, c;
    int i, j;

    scanf("%d %d", &l, &c);
    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) {
            if (i % 2 == 0) {
                if (j % 2 == 0) printf("1");
                else printf("0");
            }
            else {
                if (j % 2 == 0) printf("0");
                else printf("1");
            }
        }
        printf("\n");
    }
    return 0;
}