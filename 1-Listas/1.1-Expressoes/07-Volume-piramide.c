#include <stdio.h>
#include <math.h>

int main () {

    float h, a, areabase, volumeP;

    scanf("%f%f", &h, &a);

    areabase = 3 * pow(a,2) * sqrt(3) / 2;

    volumeP = areabase * h / 3;
    
    printf("O VOLUME DA PIRAMIDE E = %.2f METROS CUBICOS\n", volumeP);

    return 0;
}