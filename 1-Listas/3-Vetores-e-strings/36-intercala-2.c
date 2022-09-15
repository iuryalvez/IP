#include <stdio.h>

void selection_sort (int v[],int n) {
  int i, j, min, aux;
  for (i=0; i<(n - 1);i++){
    min=i;
    for (j=i+1;j<n;j++){
      if (v[j]<v[min]){
        min=j;
      }
    }
    if (i != min){
      aux = v[i];
      v[i] = v[min];
      v[min] = aux;
    }
  }
}

void intercala(int v1[], int n1, int v2[], int n2, int v3[], int n3){
  int i, j=0, k=0;
  for(i=0; i<n1; i++) v3[i]=v1[i];
  for(j=0; i<n3; i++, j++) v3[i]=v2[j];
}

void mostrar(int v[], int n){
  int i;
  for(i=0;i<n;i++) printf("%d\n", v[i]);
}

int main(){
  int n, i, c, k, v1[2500], v2[2500], v3[5000], q1, q2, q3;
  scanf("%d", &q1);
  scanf("%d", &q2);
  for(i=0;i<q1;i++) scanf("%d", &v1[i]);
  for(c=0;c<q2;c++)scanf("%d", &v2[c]);
  
  q3=q1+q2;

  intercala(v1,q1,v2,q2,v3,q3);
  selection_sort(v3,q3);
  mostrar(v3,q3);

  return 0;
}