#include <stdio.h>
#include <math.h>

int main () {

    double x, N;
    double res, fat;
    int cont1, cont2;

    res = 0;

    scanf("%lf %lf", &x, &N);

    for (cont1 = 0; cont1 <= N; cont1++) {  

        fat = 1;
        for (cont2 = 1; cont2 <= cont1; cont2++) {
            fat *= cont2;
            //printf("fat: %lf\n", fat);
        }
        res += (pow(x,cont1)) / fat;
        //printf("res : %lf\n", res);
    }

    printf("e^%.2lf = %.6lf\n", x, res);

    return 0;
}