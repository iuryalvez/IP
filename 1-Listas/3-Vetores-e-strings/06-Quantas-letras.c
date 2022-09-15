#include <stdio.h>
#include <string.h>

#define LIM 10000

int main () {

    char s[LIM];
    int c, c2, n, t;
    int cv, cc;

    scanf("%i", &n);
    
    for (c = 0; c < n; c++) {
        scanf("%*c%[^\n]", s);
        t = strlen(s);
        cv = 0;
        cc = 0;
        for (c2 = 0; c2 < t; c2++) {
            t = strlen(s);    
            if (s[c2]=='A'||s[c2]=='a'||s[c2]=='E'||s[c2]=='e'||s[c2] == 'I'||s[c2] == 'i'||s[c2] == 'O'||s[c2] == 'o'||s[c2] == 'U'||s[c2] == 'u') cv++;
            else if ((s[c2] >= 'a' && s[c2] <= 'z') || (s[c2] >= 'A' && s[c2] <= 'Z')) cc++; 
        }
        t = cc+cv;
        printf("Letras = %d\nVogais = %d\nConsoantes = %d\n", t, cv, cc);
    }

    return 0;
}