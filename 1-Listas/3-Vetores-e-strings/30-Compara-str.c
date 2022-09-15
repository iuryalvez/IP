#include <stdio.h>
#include <math.h>

#define MAX 1000
// '129' até '165' são caracteres com acento;

void str_lower (char *s);

int str_lenght (char *s);

void conta_vogais (float *cv, char *s);

void print_num_de_vogais (float *cv);

float diferenca (float *cv1, float *cv2);

int main () {

    char s[MAX], s1[MAX], s2[MAX];
    float cv1[5] = {0,0,0,0,0}; 
    float cv2[5] = {0,0,0,0,0};
    int i, j = 0;
    int c, cont = 0, cont2 = 0;

    scanf("%[^\n]%*c", s);
    int t = str_lenght(s);
    for (i = 0; i < t; i++) {
        if (s[i] == ';') {
            cont++;
            c = i;
        }
        else if (cont == 1) {
            s2[j] = s[i];
            j++;
        }
        if (s[i] >= (char)129 && s[i] <= (char)165) cont2++;
        if (s[i] >= (char)181 && s[i] <= (char)183) cont2++;
        if (s[i] >= (char)198 && s[i] <= (char)199) cont2++;
        if (s[i] >= (char)210 && s[i] <= (char)216) cont2++;
    }
    if (cont == 1 && cont2 == 0) {
        for (i = 0; i < c; i++) {
            s1[i] = s[i];
        }
    } 
    else {
        printf("FORMATO INVALIDO!\n");
        return 0;
    }
    conta_vogais(cv1,s1);
    conta_vogais(cv2,s2);
    // printf("%s\n%s\n", s1, s2); // s2 invade memoria, pq?
    // printf("%s\n", v); // por que isto invade memoria no print
    print_num_de_vogais(cv1);
    print_num_de_vogais(cv2);
    printf("%.2f\n", diferenca(cv1, cv2)); // poderia igualar a um float d antes tambem

    return 0;
}
void str_lower (char *s) {
    int i;
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += 'a'-'A';
        }
    }
}
int str_lenght (char *s) {
    int i = 0;
    while (*s != '\0') {
        s++;
        i++;
    }
    return i;
}
void conta_vogais (float *cv, char *s) {
    char v[] = {'a','e','i','o','u'};
    int i, j, t;
    str_lower(s);
    t = str_lenght(s);
    for (i = 0; i < t; i++) {
        for (j = 0; j <= 4; j++) {
            if (s[i] == v[j]) {
                cv[j]++;
                break;
            }
        }
    }
}
void print_num_de_vogais (float *cv) {
    int i;
    printf("(");
    for (i = 0; i <= 4; i++) {
        if (i != 4) printf("%.0f,", cv[i]);
        else printf("%.0f)\n", cv[i]);    
    }
}
float diferenca (float *cv1, float *cv2) {
    int i;
    float d = 0;
    for (i = 0; i <= 4; i++) {
        d += pow((cv1[i]-cv2[i]),2);
    }
    return sqrt(d);
}