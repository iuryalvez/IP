#include <stdio.h>

int main () {

    int numero;
    double mp, mi;
    double par, impar;
    double contapar, contaimp;

    contapar = 0;
    contaimp = 0;
    impar = 0;
    par = 0;

    scanf("%i", &numero);
    
    while (numero != 0)  {

        if (numero % 2 == 0) { 
            par += (double)numero;
            contapar++;
            printf("teste par\n");
        } else {
            impar += (double)numero;
            contaimp++;
            printf("teste impar\n");
        }
        scanf("%i", &numero);
    }

    if (contapar < 1) { contapar = 1; }
    if (contaimp < 1) { contaimp = 1; }
    
    mp = par / contapar;
    mi = impar / contaimp;

    printf ("MEDIA PAR: %lf\n", mp);
    printf("MEDIA IMPAR: %lf\n", mi);

    return 0;
}