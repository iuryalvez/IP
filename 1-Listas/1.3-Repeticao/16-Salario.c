#include <stdio.h>

int main () {

    int mat;
    double h;
    double val;
    double sal;

    mat = 1;

    while (mat != 0) {
    
        scanf("%i %lf %lf", &mat, &h, &val);
        getchar();

        sal = val * h;

        if (mat != 0) printf("%i %.2lf\n", mat, sal);

    }

    return 0;
}