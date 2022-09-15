#include <stdio.h> 
#include <string.h>

#define MAX 499

void prefixo_string (int nl, char *s);

int main () {
    char s[MAX];
    int n, nl;
    int i;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &nl);
        scanf("%*c%[^\n]", s);

        prefixo_string(nl,s);
    }

    return 0;
}

void prefixo_string (int nl, char *s) {
    int i, t;
    t = strlen(s);
    for (i = 0; i < nl && i < t; i++) {
        printf("%c", s[i]);
    }
    printf("\n");
}