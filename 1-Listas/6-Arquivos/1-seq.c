#include <stdio.h>
#include <stdlib.h>

// argc: quantidade de argumentos
// argv: lista de strings de tamanho variável
// atoi = recebe string e retorna valor inteiro

int main (int argc, char **argv) { // lê os parâmetros da linha de comando de execução e podemos trabalhar com eles
    
    int i, a, b;
    if (argc != 3) {
        printf("Quantidade de argumentos incorreta!\nDevem ser entrado 3 parametros\n");
        printf("Exemplo: ./Exemplo 2 8\n");
        return 0;
    }
    a = atoi(argv[1]); // recebendo o parâmetro 1 em int
    b = atoi(argv[2]); // recebendo o parâmetro 2 em int
    // trabalhando com os valores
    printf("%d", a);
    while (a < b) {
        a++;
        printf(" %d", a);
    }
    while (a > b) {
        a--;
        printf(" %d", a);
    }
    printf("\n");
    return 0;
}