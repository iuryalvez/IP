#include <stdio.h>
#define MAX 1000

int main () {

    int n;
    int i;
    int v[MAX];

    scanf("%d", &n);
    if (n > 1000) return 0;

    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    for (i = 0; i < n; i++) {
        if (i == 0) printf("%d\n", v[i]);
        else if (v[i] != v[i-1]) printf("%d\n", v[i]);
    }
    
    return 0;
}