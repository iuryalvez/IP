#include <stdio.h>

#define MAX 256

/**
* Função que remove vogais e calcula a quantidade de vogais removidas
* @param str string de entrada
* @return A função atualiza os vetores str e vogais.
*/
void remove_vogais(char *str);

/**
 * @brief ve o tamanho da string
 * 
 * @param str a string que vai ser lida 
 * @return int numero de caracteres
 */
int str_lenght (char *str);

int main () {
    char str[256];
    scanf("%[^\n]%*c", str);
    remove_vogais(str);
    return 0;
}

void remove_vogais(char *str) {
    int a=0, e=0, i=0, o=0, u=0;
    int c;
    int t;
    t = str_lenght(str);
    for (c = 0; c < t; c++) {
        if (str[c] == 'a' || str[c] == 'A') a++;
        else if (str[c] == 'e' || str[c] == 'E') e++;
        else if (str[c] == 'i' || str[c] == 'I') i++;
        else if (str[c] == 'o' || str[c] == 'O') o++;
        else if (str[c] == 'u' || str[c] == 'U') u++;
        else printf("%c", str[c]);
    }
    printf("\n");
    printf("a: %d\n", a);
    printf("e: %d\n", e);
    printf("i: %d\n", i);
    printf("o: %d\n", o);
    printf("u: %d\n", u);
}

int str_lenght (char *str) {
    int i = 0;
    while (*str != '\0') {
        str++;
        i++;
    }
    return i;
}