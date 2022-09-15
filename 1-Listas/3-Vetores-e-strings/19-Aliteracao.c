#include <stdio.h>

#define MAX 5000

int str_lenght (char s[]);

void str_lower (char s[]);

int main () {

    char s[MAX];
    int t;
    char ch;
    char ch2 = '-';
    int i, cont = 0;
    
    while (scanf("%[^\n]%*c", s) != EOF) {
        t = str_lenght(s);
        str_lower(s);
        for (i = 0; i < t; i++) {
            if (i == 0) ch = s[i];
            else if (s[i] == ' ' && s[i+1] == ch && i < t-1) {
                if (ch2 == s[i+1]) {
                    ch2 = ch;
                    ch = s[i+1];
                }
                else {
                    ch2 = ch;
                    ch = s[i+1];
                    cont++;
                }
            }
            else if (s[i] == ' ' && s[i+1] != s[i]) {
                ch2 = ch;
                ch = s[i+1];
            }
        printf("i %i ch %c ch2 %c\n", i, ch, ch2);       
        }
        printf("%i\n", cont);
        ch2 = '-';
        cont = 0;
    }
    return 0;
}

int str_lenght (char s[]) {
    int i = 0;
    while (*s != '\0') {
        s++;
        i++;
    }
    return i;
}

void str_lower (char s[]) {
    int i;
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += 'a'-'A';
        }
    }
}