#include <stdio.h>

#define n 5

void print_vet (int *v) {
    int i;
    for (i=0;i<n;i++) {
        printf("%d\n", v[i]);
    }
}

void swap (int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void ord_vet (int *v) {
    
    int i, menor, j;
    
    for (i = 0; i < n-1; i++) {
        menor = i;
        for(j = i+1; j < n; j++) if (v[j] < v[i]) menor = j;
        swap(&v[i], &v[menor]);
    }
} 

int main () {

    int v[n] = {5,1,29,10,131};

    print_vet(v); // o asterisco já está em v, não precisamos usar "&"

    ord_vet(v);

    print_vet(v);

    return 0;
}