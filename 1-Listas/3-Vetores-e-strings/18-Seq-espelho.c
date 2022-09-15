#include <stdio.h>
#include <string.h>

#define LIM 13214*2+1

int main () {

    int c;
    int i, f;
    char str[LIM] = {};
    char *p;
    int t;

    p = str;

    scanf("%d", &c);

    while (c > 0) {    
        scanf("%d %d", &i, &f);
        p = str;
        for (; i <= f; i++) {
            sprintf(p, "%d", i);
            t = strlen(p);
            p += t;
        }
        t = strlen(str);
        for (i = 0; i < t; i++) {
            str[i+t] = str[t-i-1];
        }
        str[t*2] = '\0';
        printf("%s\n", str);        
        c--;
    }
    return 0;
}