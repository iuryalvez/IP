#include <stdio.h>
#include <stdlib.h>

int main () {
    int cont = 1; // inicializando meu contador 
    FILE *arq = fopen("TEXTO.txt", "w"); // abrindo meu arquivo.txt e dixendo que seu objetivo é "w", escrever nele
    if (arq) { // se meu arquivo foi criado corretamente
        while (cont <= 100) { // para contar de 1 a 100
            fprintf(arq,"%d\n",cont); // imprimindo os valores dentro do arquivo.txt
            cont++; // atualizando cont
        }
        fclose(arq); // fechando meu arquivo para evitar dados corrompidos
        return 0;
    }
    else printf("Erro ao abrir arquivo!\n");
}
