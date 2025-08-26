
#include <stdio.h>
#include <stdlib.h>

int ej6(){
int i=5, j[]={1,2,3,4,5,6,7,8,9,10};
char x='a', pal[]="texto en c";
int *pi;
char *pc;
printf("direccion de i y su valor: %p, %d\n", &i, i);
printf("\n");
pi=&i;
printf("direccion de i y su valor: %p, %d\n", pi, *pi);
printf("\n");
for(int i=0; i<10; i++){
    printf("valor y direccion del vector j: %d, %p\n", j[i], &j[i]);
}
printf("\n");
pi=&j;
for(int i=0; i<10; i++){

    printf("valor y direccion del vector j a travez de puntero: %d, %p\n", *(pi+i), pi+i);
}
printf("\n");
printf("direccion de x y su valor: %p, %c\n", &x, x);
printf("\n");
pc=&x;
printf("direccion de x y su valor %p, %c", pc, *pc);
printf("\n");
for(int i=0; i<10; i++){
    printf("direccion del vector pal y su valor: %c, %p", pal[i], &pal[i]);
    printf("\n");
}
printf("\n");
pc=&pal;
for(int i=0; i<10; i++){
    printf("direccion del vector pal y su valor a travez de un puntero: %p, %c", pc+i, *(pc+i));
    printf("\n");
    }
    printf("direccion del puntero pi: %p\n", &pi);
    printf("direccion del puntero pc: %p\n", &pc);
}
