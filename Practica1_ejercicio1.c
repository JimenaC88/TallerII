
#include <stdio.h>
#include <stdlib.h>

int ej1(){
    int j=0;
    printf("Ingrese el numero de filas y columnas de la matriz.\n");
    scanf("%d", &j);
    for(int i=0; i<j; i++){
        for(int k=0; k<j; k++){
            if(i==k){
                printf("1");
            }else{
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}
