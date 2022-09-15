#include <stdio.h>
#include <string.h>

#define MAX 1000

int main () {

    int n, i, j;
    int t, at;
    char s[MAX], temp;

    scanf("%d", &n);

    if (n <= 0 || n >= 10000) return 0;

    for (i = 0; i < n; i++) {

        scanf("%*c%[^\n]", s);
        t = strlen(s);

        for (j = 0; j < t; j++) {
            if ((s[j] >= 'A' && s[j] <= 'Z') || (s[j] >= 'a' && s[j] <= 'z')) {
                s[j] += 3;
            }
        } 

        at = t;
        j = 0;
        if (t % 2 == 1) at -= 1;
        
        for (at/=2; at > 0; at--) { //SEGUNDA PASSADA :)))
            t--;
            temp = s[t];
            s[t] = s[j];
            s[j] = temp;
            j++;
        }
        
        t = strlen(s);
        at = t;
        j = t;
        if (t % 2 == 1) j -= 1;
        
        for (j/=2; j < t; j++) {
            at--;
            s[at] -= 1;
        }
        printf("%s\n", s);
    }
    return 0;
}