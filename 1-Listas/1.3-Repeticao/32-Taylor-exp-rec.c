#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fatorial( int n ){
    if ( n <= 1 ) return 1;
    else return n*fatorial(n-1);
}

double taylor_ex (int n_term, double value){
    if (n_term < 1) return 1;
    else return taylor_ex(n_term-1, value) + pow(value, n_term)/fatorial(n_term);
}

int main(){
    double x, k, y;
    scanf("%lf %lf", &x, &k);
    y = taylor_ex(k, x);
    printf("e^%.2lf = %.6lf\n", x, y);
    return 0;
}