#include <stdio.h>
#include <math.h>

/* 
errado para: 
3.14 6
1 4
*/

long fat(int n) {
    if(n < 2) return 1;
    else return n * fat(n-1);
}

int main(){
    double x, z = 0.0;
    int n, i, j;
    scanf("%lf %d", &x, &n);
    printf("cos(%.2lf) ", x);
    for(i = 0; i <= n; i++ ){
        z = z + (( pow(-1.0 , i)*pow(x, (2.0*i)) ) / (fat(2*i)));
    }
    printf("= %.6lf\n", z);
}