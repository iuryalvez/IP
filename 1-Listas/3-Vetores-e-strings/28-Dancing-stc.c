#include <stdio.h>
#include <string.h>

#define MAX 500

int main () {

    char s[MAX];
    int i, c;
    int t;

    while (scanf("%[^\n]%*c", s)!=EOF) {
        c = 0;
        t = strlen(s);
        if (t > MAX) return 0;
        for (i = 0; i < t; i++) {
            if (s[i] != ' ') {
                s[i] = s[i] | 32;
            }
        }
        for (i = 0; i < t; i++) {
            if (c % 2 == 0 && s[i] != ' ') {
                s[i] = s[i]-32;
            }
            if (s[i] != ' ') c++;
        }
        printf("%s\n", s);
    } 

    return 0;
}