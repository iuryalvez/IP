#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * paises[24] = {
    "brasil",
    "alemanha",
    "austria",
    "coreia", 
    "espanha", 
    "grecia", 
    "estados-unidos",
    "inglaterra", 
    "australia", 
    "portugal", 
    "suecia", 
    "turquia",
    "argentina",
    "chile", 
    "mexico",
    "antardida",
    "canada", 
    "irlanda",
    "belgica",
    "italia",
    "libia", 
    "siria", 
    "marrocos",
    "japao" 
};

char *trad[24] = {
    "Feliz Natal!",
    "Frohliche Weihnachten!",
    "Frohe Weihnacht!",
    "Chuk Sung Tan!",
    "Feliz Navidad!",
    "Kala Christougena!",
    "Merry Christmas!",
    "Merry Christmas!",
    "Merry Christmas!",
    "Feliz Natal!",
    "God Jul!",
    "Mutlu Noeller",
    "Feliz Navidad!",
    "Feliz Navidad!",
    "Feliz Navidad!",
    "Merry Christmas!",
    "Merry Christmas!",
    "Nollaig Shona Dhuit!",
    "Zalig Kerstfeest!",
    "Buon Natale!",
    "Buon Natale!",
    "Milad Mubarak!",
    "Milad Mubarak!",
    "Merii Kurisumasu!"
};

int main () {

    int i, c;
    char *f = NULL;
    f = (char *) malloc(32*sizeof(char)); 
    
    if (f == NULL) return 0;

    while (scanf("%s", f) != EOF) {
        c = 0;
        for (i = 0; i < 24; i++) {
            if (strcmp(f, paises[i]) == 0) {
                printf("%s\n", trad[i]);
                c = -1;
                break;
            };
        }
        if (c!=-1) printf("-- NOT FOUND --\n");         
    }
    free(f);
    return 0;
}