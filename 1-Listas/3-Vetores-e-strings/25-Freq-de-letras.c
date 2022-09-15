#include <stdio.h> 

#define MAX 200

int str_lenght (char *s);

int main () {
    char s[MAX];
    char st[26];
    int n, t;
    int i, j, l;
    int m;

    scanf("%d", &n);
    for ( ; n != 0; n--) {
        m = 0;
        scanf("%*c%[^\n]", s);
        for (i = 0; i != 26; i++) {
            st[i] = 0;
        }
        t = str_lenght(s);
        for (i = 0; i < t; i++) {
            l = 0;
            if (s[i] >= (char)65 && s[i] <=(char)90) s[i] = s[i] | 32;
            for (j = 0; j < t; j++) if (s[i] == s[j]) l++;
            if (s[i] >= (char)97 && s[i] <= (char)122) {
                if (l > m) m = l;
                st[s[i]-97] = l;
            }
        }
        for (i = 0; i < 26; i++) {
            if (st[i] == m) printf("%c", i+97);
        }
        printf("\n");
    }
    return 0;
}

int str_lenght (char *s) {
    int i = 0;
    while (*s != '\0') {
        s++;
        i++;
    }
    return i;
}