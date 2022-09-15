#include <stdio.h>
#define MAX 10000

void countingSort(int v[], int n) {
    int v1[MAX];
    int i;

    int x = v[0];
    for (i = 1; i < n; i++) {
        if (v[i] > x)
        x = v[i];
    }

    int vord[MAX];
    for (i = 0; i <= x; ++i) {
        vord[i] = 0;
    }
    for (i = 0; i < n; i++) {
        vord[v[i]]++;
    }
    for (i = 1; i <= x; i++) {
        vord[i] += vord[i-1];
    }

    for (i = n-1; i >= 0; i--) {
        v1[vord[v[i]] - 1] = v[i];
        vord[v[i]]--;
    }
    for (i = 0; i < n; i++) {
        v[i] = v1[i];
    }
}

void print_v(int v[], int n) {
    int i;
    for (i = 0; i < n; ++i) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main() {
    int v[MAX];
    int n;
    int i;

    while (1) {
        scanf("%d", &n);
        if (n == 0) break;
        for (i = 0; i < n; i++) {
            scanf("%d", &v[i]);
        }
        countingSort(v, n);
        print_v(v, n);
    }

    return 0;
}
