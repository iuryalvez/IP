#include <stdio.h>
#include <string.h>

#define MAX 257

void str_clean (char str[], char clr []);

int main () {
    
    char str[MAX], clr[MAX];
    scanf("%[^\n]", str);
    scanf("\n%[^\n]", clr);
    str_clean(str,clr);    
    return 0;
}

void str_clean (char str[], char clr[]) {
    int i, j, k;
    int t, t2;
    t = strlen(str);
    t2 = strlen(clr);
    for (i = 0; i < t; i++) {
        for (j = 0; j < t2; j++) {
            if (str[i] == clr[j]) {
                str[i] = '$';
            } 
        }
    }
    for (i = 0; i < t; i++) {
        if (str[i] != '$') printf("%c", str[i]);
    }
    printf("\n");
}