#include <stdio.h>

#define MAX 1000

int main () {

    int n, v[MAX];
    int i, j, temp; 

    scanf("%i", &n);

    if (n < 1 || n > 1000) return 0;

    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (v[i] < v[j]) {
                temp = v[j];
                v[j] = v[i];
                v[i] = temp;
            }
            // printf("[i]:%i [j]:%i\n", v[i], v[j]);
        }
    }

    for (j = 0; j < n; j++) {
        printf("%i\n", v[j]);
    }
    
    return 0;
}