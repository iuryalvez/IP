#include <stdio.h>

#define CARGA_HORARIA (128*0.75)
#define MP ((p1+p2+p3+p4+p5+p6+p7+p8)/8) 
#define ML ((l1+l2+l3+l4+l5)/5)
#define NF (0.7*MP + 0.15*ML + 0.15*nt)

int main () {

    int mat;
    double p1, p2, p3, p4, p5, p6, p7, p8;
    double l1, l2, l3, l4, l5;
    double nt;
    double presenca;

    while (1) {
    
        scanf("%i %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf", &mat, &p1, &p2, &p3, &p4, &p5, &p6, &p7, &p8, &l1, &l2, &l3, &l4, &l5, &nt, &presenca);       

        if (mat == -1) break;
        else if (NF >= 6 && presenca >= CARGA_HORARIA) printf("Matricula: %i, Nota Final: %.2lf, Situacao Final: APROVADO\n", mat, NF);
        else if (NF >= 6 && presenca < CARGA_HORARIA && presenca >= 0) printf("Matricula: %i, Nota Final: %.2lf, Situacao Final: REPROVADO POR FREQUENCIA\n", mat, NF);
        else if (NF < 6 && NF >= 0 && presenca >= CARGA_HORARIA) printf("Matricula: %i, Nota Final: %.2lf, Situacao Final: REPROVADO POR NOTA\n", mat, NF);
        else if (NF < 6 && NF >= 0 && presenca < CARGA_HORARIA && presenca >= 0) printf("Matricula: %i, Nota Final: %.2lf, Situacao Final: REPROVADO POR NOTA E POR FREQUENCIA\n", mat, NF);
        else {}
        } 

    return 0;
}