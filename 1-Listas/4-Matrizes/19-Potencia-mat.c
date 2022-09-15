#include <stdio.h>

#define DIM 10

void mat_read (double M[][DIM], int rows, int cols);

void mat_mult (double C[][DIM], double A[][DIM], int rowsA, int colsA, double B[][DIM], int colsB);

void mat_copy (double R[][DIM], double M[][DIM],int rows, int cols);

void mat_print (double M[][DIM], int rows, int cols);

void mat_identity (double M[][DIM], int rows, int cols);

int main () {
    int dim, p, k;
    double A[DIM][DIM];
    double R[DIM][DIM];
    double T[DIM][DIM];

    scanf("%d %d", &dim, &p);    
    mat_read(A, dim, dim);
    mat_identity(R,dim,dim);
    // mat_copy(R, A, dim, dim);
    for (k = 1; k <= p; k++) {
        mat_copy(T,R,dim,dim);
        mat_mult(R,T,dim,dim,A,dim);
    }
    mat_print(R,dim, dim);
    return 0;
}

void mat_read (double M[][DIM], int rows, int cols) {
    int l, c;
    for (l = 0; l < rows; l++) {
        for (c = 0; c < cols; c++) {
            scanf("%lf", &M[l][c]);
        }  
    }
}

void mat_copy (double R[][DIM], double M[][DIM], int rows, int cols) {
    int l, c;
    for (l = 0; l < rows; l++) {
        for (c = 0; c < cols; c++) {
            R[l][c] = M[l][c];
        }
    }
}

void mat_mult (double C[][DIM], double A[][DIM], int rowsA, int colsA, double B[][DIM], int colsB) {
    int rowsC = rowsA;
    int colsC = colsB;
    int r, c, k;

    for (r = 0; r < rowsC; r++) {
        for (c = 0; c < colsC; c++) {
            C[r][c] = 0;
            for (k = 0; k < colsA; k++) {
                C[r][c] += A[r][k]*B[k][c]; 
            }
        }
    }
}

void mat_print (double M[][DIM], int rows, int cols) {
    int l, c;
    for (l = 0; l < rows; l++) {
        for (c = 0; c < cols; c++) {
            printf("%.3lf ", M[l][c]);
        }
        printf("\n");
    }
}

void mat_identity (double M[][DIM], int rows, int cols) {
    int l, c;
    for (l = 0; l < rows; l++) {
        for (c = 0; c < cols; c++) {
            if (l == c) M[l][c] = 1;
            else M[l][c] = 0;
        }
    }
}