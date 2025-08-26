
#include <stdio.h>
#include <stdlib.h>

int ej4(){
printf("Ingrese la cantidad de filas y columnas de la matriz\n");
int N;
scanf("%d", &N);
int matriz[N][N];
int matriz_traspuesta[N][N];
for(int i=0; i<N; i++){
    for(int j=0; j<N; j++){
        printf("ingrese el valor de la matriz\n");
        scanf("%d", &matriz[i][j]);
    }
}
for(int i=0; i<N; i++){
    for(int j=0; j<N; j++){
        matriz_traspuesta[i][j]=matriz[j][i];
    }
}
for(int i=0; i<N; i++){
    for(int j=0; j<N; j++){
      printf("%d", matriz[i][j]);
    }
    printf("\n");
}
printf("\n");
printf("\n");
for(int i=0; i<N; i++){
    for(int j=0; j<N; j++){
        printf("%d", matriz_traspuesta[i][j]);
    }
    printf("\n");
}
}
