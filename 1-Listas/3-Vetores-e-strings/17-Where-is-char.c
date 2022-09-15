#include <stdio.h>
#include <string.h>

#define MAX 499

/**
 * @brief 
 * 
 * @param n string 
 * @param s o caracter a ser encontrado
 * @return indice do caracter s 
 */
int where_is_char (int c, char *s);

int main () {

    int n, k, i; 
    char s[MAX], c;
    scanf("%i%*c", &n);

    for (i = 0; i < n; i++) {
        scanf("%c%*c%[^\n]%*c", &c, s);
        k = where_is_char(c,s);
        if (k == -1) printf("Caractere %c nao encontrado.\n", c);
        else printf("Caractere %c encontrado no indice %i da string.\n", c, k);
    }


    return 0;
}

int where_is_char (int c, char *s) {
    int i;
    for (i = 0; s[i] != '\0'; i++) if (s[i] == c) return i;
    return -1;
}
