#include <stdio.h>

#define MAX 1000

/**
 * @brief função que verifica as palavras digitadas de acordo com n
 * 
 * @param n número de palavras a serem verificadas
 * @param p vetor de caracteres (strings)
 */
void verificaPalavras (int n, char *p);

void verificaOne (char *p);
void verificaTwo (char *p);
void verificaThree (char *p);

int main () {

    char p[MAX]; 
    int n;

    scanf("%d", &n);

    verificaPalavras(n, p);
    
    return 0;
}

void verificaPalavras (int n, char *p) {
    int i;
    for (i = 0; i < n; i++) {
        scanf("%*c%[^\n]", p);
        
        verificaOne(p);
        verificaTwo(p);
        verificaThree(p);
    }
}

void verificaOne (char *p) {
    int j;
    j = 0;
    
    if (p[0] == 'o') j++;
    if (p[1] == 'n') j++;
    if (p[2] == 'e') j++;
    
    if (j >= 2) printf("1\n");
}  
void verificaTwo (char *p) {
    int j;
    j = 0;
    
    if (p[0] == 't') j++;
    if (p[1] == 'w') j++;
    if (p[2] == 'o') j++;     
    
    if (j >= 2) printf("2\n");
}  
void verificaThree (char *p) {
    int j;
    j = 0;
    
    if (p[0] == 't') j++;
    if (p[1] == 'h') j++;
    if (p[2] == 'r') j++;     
    if (p[3] == 'e') j++;     
    if (p[4] == 'e') j++;     
    
    if (j >= 4) printf("3\n");
}  