#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

typedef struct {
    double d[4];
} Point4D;

double dist (Point4D a, Point4D b);

int main () {

    int n;
    int i, j;
    Point4D *pt = NULL;
    double d;

    scanf("%d", &n);
    pt = (Point4D *) calloc(n, sizeof(Point4D));

    for (i = 0; i < n; i++) {
        for (j = 0; j < 4; j++) {
        scanf("%lf", &pt[i].d[j] );
        }
    }
    for (i = 0; i < n-1; i++) {
        d = dist (pt[i], pt[i+1] );
        printf("%.2lf\n", d );
    }
    free(pt);
    return 0;
}

double dist (Point4D a, Point4D b) {
    double l1, l2, l3, l4;
    l1 = a.d[0] - b.d[0];
    l2 = a.d[1] - b.d[1];
    l3 = a.d[2] - b.d[2];
    l4 = a.d[3] - b.d[3];
    return sqrt(pow(l1,2) + pow(l2,2) + pow(l3,2) + pow(l4,2));
}