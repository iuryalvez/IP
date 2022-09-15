#include <stdio.h>

#define carbono 7
#define rockwell 50
#define res 80000

int main () {

    int CC, DR, RT;

    scanf("%i %i %i", &CC, &DR, &RT);

    if (CC < carbono && DR > rockwell && RT > res) { 
        printf("ACO DE GRAU = 10\n"); 
    }
    else if (CC < carbono && DR > rockwell && RT <= res) {
        printf("ACO DE GRAU = 9\n"); 
    }
    else if (CC < carbono && DR <= rockwell && RT <= res) {
        printf("ACO DE GRAU = 8\n"); 
    }
    else printf("ACO DE GRAU = 7\n");

    return 0;
}