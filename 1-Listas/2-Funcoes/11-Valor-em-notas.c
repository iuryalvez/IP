#include <stdio.h>

void converteEmNotasMoedas (int val, int x, int y, int z, int u);

int main () {

    int t, x, y, z, u;

    scanf("%i", &t);

    converteEmNotasMoedas(t, x, y, z, u);

    return 0;
}

void converteEmNotasMoedas (int val, int x, int y, int z, int u) {
    x = val / 100;
    y = (val % 100) / 50;
    z = ((val % 100) % 50) / 10;
    u = (((val % 100) % 50) % 10);

    printf("NOTAS DE 100 = %i\n", x);
    printf("NOTAS DE 50 = %i\n", y);
    printf("NOTAS DE 10 = %i\n", z);
    printf("MOEDAS DE 1 = %i\n", u);

}