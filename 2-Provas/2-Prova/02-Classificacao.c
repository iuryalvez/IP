#include <stdio.h>
#include <math.h>

#define SETOSA 1
#define VIRGINIA 2
#define VERSICOLOR 3

/**
* Função que classifica uma flor Iris
* @param pt tamanho da petala
* @param pl largura da petala
* @param st tamanho da sepala
* @param sl largura da sepala
* @param d1 ponteiro para a distancia para a classe setosa
* @param d2 ponteiro para a distancia para a classe virginica
* @param d3 ponteiro para a distancia para a classe versicolor
* @return valor total gasto pelo cliente c
*/
int classifica_iris( double pt, double pl, double st, double sl, double * d1, double
* d2, double * d3 );

int main () {

    int r;
    double pt, pl, st, sl;
    double d1, d2, d3;

    while ((scanf("%lf %lf %lf %lf", &pt, &pl, &st, &sl)) != EOF) {
        
        classifica_iris(pt, pl, st, sl, &d1, &d2, &d3);
        printf("(%.2lf %.2lf %.2lf) ", d1, d2, d3);
        
        r = classifica_iris(pt, pl, st, sl, &d1, &d2, &d3);
        if (r == 1) printf("setosa\n");
        else if (r == 2) printf("virginica\n");
        else printf("versicolor\n"); 

    }

    return 0;
}

int classifica_iris( double pt, double pl, double st, double sl, double * d1, double
* d2, double * d3 ) {

    double ds, dvg, dvc;
    
    ds = sqrt(pow(6.85-pt,2) + pow(3.07-pl,2) + pow(5.74-st,2) + pow(2.07-sl,2));
    dvg = sqrt(pow(5.00-pt,2) + pow(3.41-pl,2) + pow(1.46-st,2) + pow(0.24-sl,2));
    dvc = sqrt(pow(5.90-pt,2) + pow(2.74-pl,2) + pow(4.39-st,2) + pow(1.43-sl,2));

    *d1 = ds;
    *d2 = dvg;
    *d3 = dvc;

    if (ds < dvg && ds < dvc) return SETOSA;
    else if (dvg < ds && dvg < dvc) return VIRGINIA;
    else return VERSICOLOR;

}