#include <stdio.h>
#include <string.h>

#define MAX 10000

int main () {

    int n, t;
    int i, j, k=0;
    char A[MAX], B[MAX], M[MAX];

    scanf("%d%*c", &n);
    if (n < 0 || n > 100) return 0;
    for (i = 0; i < n; i++) {
        scanf("%[^\n]%*c", M);
        t = strlen(M);
        // printf("%s\n", M);
        // printf("%i\n", t);
        for (j = 0; M[j] != ' '; j++) {
            A[j] = M[j];
        }
        // printf("%s\n", A);
        for (; j+1 < t; j++) {
            B[k] = M[j+1];
            k++;
        }
        // printf("%s\n", B);
        k = 0;
        for (j = 0; j < t/2; j++) {
            while (A[j] != B[j]) {
                if (A[j] == 'z') A[j] = 'a';
                else A[j] = A[j]+1;
                k++;
            }
        }
        printf("%d\n", k);
        k = 0;
    }
    return 0;
}