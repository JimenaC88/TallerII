
#include <stdio.h>
#include <stdlib.h>

int ej7(){
int arr[10];
for(int i=0; i<10; i++){
    printf("ingrese un numero por teclado\n");
    scanf("%d", &arr[i]);
}
int *p=&arr;

for(int i=9; i>-1; i--){
    printf("numero %d del array: %d\n", i+1, *(p+i));
}
}
