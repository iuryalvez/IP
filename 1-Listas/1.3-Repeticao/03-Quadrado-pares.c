#include <stdio.h>

int main () {

    int n;
    int temp, temp1, temp2;

    scanf("%d", &n);

    if (n > 5 && n < 2000) {
        temp = n % 2;
        if (temp == 0) {
            while (temp < n) {
            temp1 = temp;
            temp1 += 2;
            temp2 = temp1 * temp1;
            printf("%d^2 = %d\n", temp1, temp2);
            temp = temp1;
            }
        } else return 0;
    } 
    else {
        return 0; }
    
    return 0;
}