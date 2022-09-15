#include <stdio.h>

#define DEPENDENTE 300.0
#define IMPOSTO_LIQUIDO (imposto_salario - (qtd_dpdt*DEPENDENTE))
#define IMPOSTO_REAL (IMPOSTO_LIQUIDO - (taxa_imposto/100*salario)) 

int main () {

    float imposto_salario, taxa_imposto, salario, salariomin;
    int qtd_dpdt, mat;

    scanf("%i %f %i %f %f", &mat, &salariomin, &qtd_dpdt, &salario, &taxa_imposto);

    if (salario > 12*salariomin) {
        imposto_salario = 0.2 * salario;
        printf("MATRICULA = %i\n", mat);
        printf("IMPOSTO BRUTO = %.2f\n", imposto_salario);
        printf("IMPOSTO LIQUIDO = %.2f\n", IMPOSTO_LIQUIDO);
        if (IMPOSTO_REAL < 0) {
            printf("RESULTADO = %.2f\n",IMPOSTO_REAL);
            printf("IMPOSTO A RECEBER");
        } else if (IMPOSTO_REAL > 1) {
            printf("RESULTADO = %.2f\n", IMPOSTO_REAL);
            printf("IMPOSTO A PAGAR\n");
        } else { printf ("RESULTADO = 0\n");
                 printf("IMPOSTO QUITADO\n");
        }
    } else if (salario > 5*salariomin && salario <= 12*salariomin) {
        imposto_salario = 0.08 * salario;
        printf("MATRICULA = %i\n", mat);
        printf("IMPOSTO BRUTO = %.2f\n", imposto_salario);
        printf("IMPOSTO LIQUIDO = %.2f\n", IMPOSTO_LIQUIDO);
        if (IMPOSTO_REAL < 0) {
            printf("RESULTADO = %.2f\n",IMPOSTO_REAL);
            printf("IMPOSTO A RECEBER");
        } else if (IMPOSTO_REAL > 1) {
            printf("RESULTADO = %.2f\n", IMPOSTO_REAL);
            printf("IMPOSTO A PAGAR\n");
        } else { printf ("RESULTADO = 0\n");
                 printf("IMPOSTO QUITADO\n");
        }
    }  else if (salario <= 5*salariomin) {
        imposto_salario = 0;
        printf("MATRICULA = %i\n", mat);
        printf("IMPOSTO BRUTO = %.2f\n", imposto_salario);
        printf("IMPOSTO LIQUIDO = %.2f\n", IMPOSTO_LIQUIDO);
        if (IMPOSTO_REAL < 0) {
            printf("RESULTADO = %.2f\n",IMPOSTO_REAL);
            printf("IMPOSTO A RECEBER");
        } else if (IMPOSTO_REAL > 1) {
            printf("RESULTADO = %.2f\n", IMPOSTO_REAL);
            printf("IMPOSTO A PAGAR\n");
        } else { printf ("RESULTADO = 0\n");
                 printf("IMPOSTO QUITADO\n");
        }
    }

    return 0;
}