#include <stdio.h>

#define MAX 2001

int main () {

    int l;
    int i;
    double D[MAX], d1, d2, d3, temp;
    double x[MAX], y[MAX], z[MAX];

    scanf("%d", &l);
    if (l < 2 || l > 1000) return 0;

    for (i = 0; i < l; i++) {
        scanf("%lf %lf %lf", &x[i], &y[i], &z[i]);
    }
    for (i = 0; i < l-1; i++) {
        if (i < l-1) {
            d1 = x[i] - x[i+1];
            d2 = y[i] - y[i+1];
            d3 = z[i] - z[i+1];
        }
        if (d1 < 0) d1 *= -1; 
        if (d2 < 0) d2 *= -1; 
        if (d3 < 0) d3 *= -1; 
        
        if (d1 < d2) {
            temp = d1;
            d1 = d2;
            d2 = temp;
        }
        if (d1 < d3) {
            temp = d1;
            d1 = d3;
            d3 = temp;
        }
        D[i] = d1;
    }
    for (i = 0; i < l-1; i++) printf("%.2lf\n", D[i]);

    return 0;
}