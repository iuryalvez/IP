#include "poly.h"

int main () {

    Poly P1, P2, PR; // polinômios para armazenar os valores que iremos somar/subtrair
    Poly *Polinomios = NULL; // vetor de polinômios
    int n; // quantidade de polinômios
    int i; // auxiliar
    int cont = 0; // contador elementos no vetor de polinômios
    char str[100], str2[100]; // string para copiar o nome
    char *percorre; // ponteiro para percorrer uma string
    char *coef; // ponteiro para armazenar o coeficiente de uma string

    scanf("%d%*c", &n);
    
    while (cont < n) {
        
        _limparString(str);

        scanf("%[^:]%*c ", str);

        Polinomios = _alocarUmPolinomio(Polinomios,cont); // alocando memória para mais um Polinômio

        Polinomios[cont].id = _alocarString(strlen(str)); // alocando memória para a string do meu Polinomios da posição cont

        strcpy(Polinomios[cont].id,str); // copiando o que está escrito em str para o meu id

        _limparString(str);  

        scanf("%[^\n]%*c", str);

        Polinomios[cont].p = -1; // colocando um valor inválido para achar o maior expoente

        percorre = str; // percorrer a string a partir do primeiro elemento com um ponteiro char

         // encontrar maior potencia:
        while (*percorre != '\0') { // enquanto o conteúdo do ponteiro for diferente do final da string
            if (*percorre == '^') { // se encontrar um '^', o conteúdo a frente é um expoente
                percorre++; // atualiza para pegar o expoente
                if (atoi(percorre) > Polinomios[cont].p) Polinomios[cont].p = atoi(percorre); // transforma o ponteiro em double (ele pega somente os valores possíveis)
            }
            percorre++;
        }
        // alocando memória com o calloc para o tamanho máximo (o maior elemento)
        Polinomios[cont].coef = _alocarCoef(Polinomios[cont].p);
        
        // encontrar coefs

        percorre = str; // início da string
        coef = percorre; // início da string
        
        while (*percorre != '\0') {
            if (*percorre == '+' || *percorre == '-') coef = percorre; // se for + ou -, o número a frente é o coeficiente, coef armazenará ele
            if (*percorre == '^') { // se for '^' é o expoente, percorre armazenará ele
                percorre++; // ajustar
                Polinomios[cont].coef[atoi(percorre)] = atof(coef); // colocar o valor nos lugares corretos
            }
            percorre++; // ajustar
        }
       
        cont++; // atualizar para o próximo elemento do vetor de polinômios

    }

    // _imprimirPolinomios(Polinomios,cont); // checagem se leu tudo corretamente
    
    PR.p = _maiorCoef(Polinomios, cont);
    PR.coef = (double *) calloc(sizeof(double),2*(PR.p+1));

    scanf("%d%*c", &n);

    while (n--) {

        _zerarCoeficientes(PR); // devemos sempre zerar os coeficientes de PR
        _limparString(str); // limpando a string que estava com caracteres antes
        for (i = 0; ; i++) {
            
            scanf("%c", &str[i]);  // lendo cada char até achar o operador
            if (str[i] == '+' || str[i] == '-') { // se achar devemos pegar a string anterior do operador pra ser P1 e a próxima para ser P2
                
                *percorre = str[i]; // guardando o operador
                str[i] = '\0'; // tendo certeza que a string está válida
                
                P1 = _encontrarPolinomio(Polinomios,cont,str); // encontrando o polinômio que corresponde a string
                if (!P1.coef) {
                    printf("Invalid polynomio! [P1]\n");
                    break;
                }

                scanf("%[^\n]%*c", str2);
                P2 = _encontrarPolinomio(Polinomios, cont, str2); // encontrando o polinômio que corresponde a string
                if (!P2.coef) {
                    printf("Invalid polynomio! [P2]\n");
                    break;
                }
                
                if (percorre[0] == '-') PR = _sub_poly(P1,P2,PR);
                else PR = _sum_poly(P1, P2, PR);
                
                _imprimirPolinomio(PR);
                break;
            }
        }
    }

    // _imprimirPolinomios(Polinomios,cont); // checagem se leu tudo corretamente
    
    free(PR.coef); // liberando a memória alocada para os coeficientes
    _liberarPolinomios(Polinomios,cont); // liberando a memória alocada para o vetor de polinômios

    return 0;
}
