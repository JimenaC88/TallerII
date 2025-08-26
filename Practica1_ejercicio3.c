#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int ej3(){
int N;
printf("ingrese la cantidad de filas y columnas de la matriz\n");
scanf("%d", &N);

srand(time(NULL));
int matriz1[N][N];
int matriz2[N][N];
int matriz3[N][N];
for(int i=0; i<N; i++){

    for(int j=0; j<N; j++){
        printf("ingrese el valor de la primer matriz\n");
        scanf("%d", &matriz1[i][j]);


    }

}
for(int i=0; i<N; i++){

    for(int j=0; j<N; j++){

    printf("ingrese el valor de la segunda matriz\n");
        scanf("%d", &matriz2[i][j]);

    }
}
for(int i=0; i<N; i++){

    for(int j=0; j<N; j++){
        printf("%d ", matriz1[i][j]);

    }
    printf("\n");
}
printf("\n");

for(int i=0; i<N; i++){

    for(int j=0; j<N; j++){
        printf("%d ", matriz2[i][j]);

    }
    printf("\n");
}
printf("\n");
for(int i=0; i<N; i++){
    for(int j=0; j<N; j++){
        matriz3[i][j]=matriz1[i][j]+matriz2[i][j];
        printf("%d ", matriz3[i][j]);
    }
    printf("\n");
}
return 0;
}
