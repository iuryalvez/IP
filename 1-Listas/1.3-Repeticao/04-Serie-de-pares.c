#include <stdio.h> 

int main () {

    int x, y;
    int i;

    scanf("%d %d", &x, &y);

    if (x % 2 == 0) {
        i = 0;
        while (i < y) {
            printf("%d ", x);
            x += 2;
            i++;
        }
    } else printf("O PRIMEIRO NUMERO NAO E PAR\n");
    
    return 0;
}