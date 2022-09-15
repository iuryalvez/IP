#include <stdio.h> 
#define MAX 10

int main () {
    int D[MAX][MAX];
    int l, c;
    int i, j, t;
    int cont, cp;
    scanf("%d %d", &l, &c);
    if (l > 10 || c > 10 || l < 1 || c < 1) {
        printf("Dimensao invalida\n");
        return 0;
    }
    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &D[i][j]);
        }
    }
    cont = 0; 
    cp = 0;
    for (i = 0; ; i++) {
        // printf("i: %d\n", i);
        // printf("cont: %d\n", cont);
        for (j = i; j < c-cont; j++) {
            if (cp == l*c) {
                printf("\n");
                return 0;
            } 
            printf("%d", D[i][j]);
            if (cp != l*c-1) printf(" ");
            cp++;
        // printf("1cp: %d\n", cp);
        }            
        for (t = cont+1; t < l-cont; t++) {
            if (cp == l*c) {
                printf("\n");
                return 0;
            } 
            printf("%d", D[t][c-cont-1]);
            if (cp != l*c-1) printf(" ");
            cp++;
        // printf("2cp: %d\n", cp);
        }
        for (j = c-2-cont; j >= cont; j--) {
            if (cp == l*c) {
                printf("\n");
                return 0;
            } 
            printf("%d", D[l-cont-1][j]);
            if (cp != l*c-1) printf(" ");
            cp++;
        // printf("3cp: %d\n", cp);
        }
        for (t = l-2-cont; t >= cont+1; t--) {
            if (cp == l*c) {
                printf("\n");
                return 0;
            } 
            printf("%d", D[t][cont]);
            if (cp != l*c-1) printf(" ");
            cp++;
        // printf("4cp: %d\n", cp);
        }
        if (cp == l*c) break; 
        // printf("cp: %d\n", cp);
        cont++;
    }
    printf("\n");
    return 0;
}
/* 9 9
1 2 3 4 5 6 7 8 9
10 11 12 13 14 15 16 17 18
19 20 21 22 23 24 25 26 27
28 29 30 31 32 33 34 35 36
37 38 39 40 41 42 43 44 45
46 47 48 49 50 51 52 53 54
55 56 57 58 59 60 61 62 63
64 65 66 67 68 69 70 71 72
73 74 75 76 77 78 79 80 81
*/