#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// estrutura de polinômio
typedef struct polynomio {
    char *id; // string com o nome do polinômio
    int p; // grau do polinômio
    double *coef; // vetor de coeficientes do polinômio
} Poly;

/**
 * @brief função que aloca memória para mais um polinômio
 * 
 * @param Polinomios vetor de polinômios já existente
 * @param tam tamanho que já existe que vamos realocar
 * @return Poly* 
 */
Poly *_alocarUmPolinomio(Poly *Polinomios, int tam);

/**
 * @brief função que aloca string dinamicamente dado o strlen da outra string
 * 
 * @param tam strlen da string
 * @return char* 
 */
char *_alocarString(int tam);

/**
 * @brief função que aloca o vetor de coeficientes
 * 
 * @param tam tamanho do vetor de coeficientes
 * @return double* vetor de coeficientes
 */
double *_alocarCoef(int tam);

/**
 * @brief função que coloca '\0' em todas as posições da string
 * 
 * @param str string existente
 */
void _limparString(char *str);

/**
 * @brief função que imprime todos os polinômios do vetor de polinômios
 * 
 * @param Polinomios vetor de polinômios
 * @param tam tamanho do vetor de polinômios
 */
void _imprimirPolinomios(Poly *Polinomios, int tam);

/**
 * @brief função que imprime um polinômio P
 * 
 * @param P polinômio que será imprimido
 */
void _imprimirPolinomio(Poly P);

/**
 * @brief função que libera os polinômios alocados dinamicamente
 * 
 * @param Polinomios vetor de polinômios a ser liberado
 * @param tam tamanho do vetor de polinômios
 */
void _liberarPolinomios(Poly *Polinomios, int tam);

/**
 * @brief função que encontra um polinômio dentro do vetor de polinômios dado o nome do polinômio
 * 
 * @param P vetor de polinômios
 * @param tam tamanho do vetor
 * @param str nome do possível polinômio
 * @return Poly 
 */
Poly _encontrarPolinomio(Poly *P, int tam, char *str);

/**
 * @brief função que retorna P1+P2 em PR
 * 
 * @param P1 Polinômio 1
 * @param P2 Polinômio 2
 * @param PR Polinômio Resultante
 * @return Poly PR
 */
Poly _sum_poly(Poly P1, Poly P2, Poly PR);


/**
 * @brief função que retorna P1-P2 em PR
 * 
 * @param P1 Polinômio 1
 * @param P2 Polinômio 2
 * @param PR Polinômio Resultante
 * @return Poly PR
 */
Poly _sub_poly(Poly P1, Poly P2, Poly PR);

/**
 * @brief função que retorna o maior coeficiente de todos os polinômios
 * 
 * @param P vetor de polinômios
 * @param tam tamanho do vetor de P
 * @return int 
 */
int _maiorCoef(Poly *P, int tam);

/**
 * @brief função que zera todas as posições dos coeficientes de um polinômio
 * 
 * @param P Polinômio
 * @return Poly P zerado
 */
Poly _zerarCoeficientes(Poly P);
