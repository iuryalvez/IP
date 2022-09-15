#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    float u;
    float x;
    float y;
    float z;
} pontos;

void ordena_vetor(pontos *p, float *a, int n);

int main () {

    pontos *p = NULL;
    int n, i;
    float *a = NULL;
    
    scanf("%d", &n);
    if (n > 1000 || n < 2) return 0;
    a = (float *) malloc(n*sizeof(float));
    if (a == NULL) return 0;
    p = (pontos *) malloc(n*sizeof(pontos));
    if (p == NULL) return 0;

    for (i = 0; i < n; i++) {
        scanf("%f %f %f %f", &p[i].u, &p[i].x, &p[i].y, &p[i].z);
        if (p[i].u < -1000 || p[i].u > 1000) return 0;
        if (p[i].x < -1000 || p[i].x > 1000) return 0;
        if (p[i].y < -1000 || p[i].y > 1000) return 0;
        if (p[i].z < -1000 || p[i].z > 1000) return 0;
        a[i] = sqrt(pow(p[i].u,2)+pow(p[i].x,2)+pow(p[i].y,2)+pow(p[i].z,2));
    }
    
    ordena_vetor(p,a,n);
    for (i = 0; i < n; i++) printf("Vetor: (%.2f, %.2f, %.2f, %.2f) Norma: %.2f\n",p[i].u,p[i].x,p[i].y,p[i].z,a[i]);
    free(p);

    return 0;
}

void ordena_vetor (pontos *p, float *a, int n) {
    int i, j;
    float *t;
    t = (float *) malloc(5*sizeof(float));
    for (i = 0; i < n-1; i++) {
        // printf("a[%d]:%.2f\n",i,a[i]);
        for (j = i+1; j < n; j++) {
            if (a[i] > a[j]) {
                t[4] = a[i];
                a[i] = a[j];
                a[j] = t[4];
                t[0] = p[i].u;
                p[i].u = p[j].u;
                p[j].u = t[0];
                t[1] = p[i].x;
                p[i].x = p[j].x;
                p[j].x = t[1];
                t[2] = p[i].y;
                p[i].y = p[j].y;
                p[j].y = t[2];
                t[3] = p[i].z;
                p[i].z = p[j].z;
                p[j].z = t[3];
                i = 0;
            }
        }
    }
    free(t);
}