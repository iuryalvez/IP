#include <stdio.h>

#define MAX 1000

int main () {

    int v[MAX], n, n2; 
    int i, j, temp;
    int menor, maior;

    scanf("%d", &n);
    
    menor = n-1;
    maior = 0;
    
    if(n < 1 || n > 1000) return 0;
    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    for (i = 0; i < n; i++) {
        if (i != n-1) printf("%d ", v[i]);
        else printf("%d\n", v[i]);
    }

    j = n-1;
    n2 = n;
    if (n % 2 == 1) n-=1;
        
    for (i = 0; i < n/2; i++) {
        temp = v[j];
        v[j] = v[i];
        v[i] = temp;
        j--;
    }
    if (n2 % 2 == 1) n += 1;
    for (i = 0; i < n; i++) {
        if (i != n-1) printf("%d ", v[i]);
        else printf("%d\n", v[i]);
        if (v[i] > v[maior]) maior = i;
        if (v[i] < v[menor]) menor = i;
    }
    printf("%d\n%d", v[maior], v[menor]);

    return 0;
}