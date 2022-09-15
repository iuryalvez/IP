#include <stdio.h>
int main () {

    float sm, li, vt1, vt2;
    int mat, nt1, nt2;
    float sb, sl, c1, c2, temp;

    scanf("%f %f %f %f", &sm, &li, &vt1, &vt2);

    while ((scanf("%i %i %i", &mat, &nt1, &nt2)) != 0) {

        if (mat == 0) break;
    
        if (nt1 >= 10) c1 = 0.14*nt1*vt1;
        else c1 = 0.13*nt1*vt1;
        
        if (nt2 >= 20) c2 = 0.13*nt2*vt2;
        else c2 = 0.12 *nt2*vt2;
    
        sb = sm + c1 + c2;
        sl = sb - 0.08*sb;

        if (sl > li) {
            temp = sl - li;
            sl = sl - 0.15*temp;
        }
        printf("MATRICULA = %i, SALARIO BRUTO = %.2f, SALARIO LIQUIDO = %.2f\n", mat, sb, sl);
    }

    return 0;
}