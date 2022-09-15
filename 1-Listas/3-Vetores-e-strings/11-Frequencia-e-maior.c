#include <stdio.h>

#define MAX 10000

int main () {

    int n, i, s[MAX]; 
    int f, im, m;

    scanf("%d", &n);

    if (n < 1 || n > MAX) return 0;

    for (i = 0; i < n; i++) {
        scanf("%i", &s[i]);
    }
    m = 0;
    f = 0;
    for (i = 0; i < n; i++) {
        if (s[i] == s[n-1]) f++;
        if (s[i] > m) {
            m = s[i];
            im = i;
        }
    }
    printf("Nota %i, %i vezes\n", s[n-1], f);
    printf("Nota %i, indice %i\n", m, im);

    return 0;
}