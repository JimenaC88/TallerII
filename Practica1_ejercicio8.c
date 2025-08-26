#include<stdio.h>
#include<stdlib.h>

int ej8(){
    int a;
    while(a<1||a>7){
    printf("Escriba un numero entre 1 y 7\n");
    scanf("%d", &a);
    }
    char *mi_funcion(int a){
       char *dias;

       switch (a){

            case 1: dias="Lunes";
            break;
            case 2: dias="Martes";
            break;
            case 3:  dias="Miercoles";
            break;
            case 4: dias="Jueves";
            break;
            case 5: dias="Viernes";
            break;
            case 6: dias="Sabado";
            break;
            case 7: dias="Domingo";
            break;
            default:
                printf("El numero ingresado no es valido");
                break;
       }





       return dias;
    }
    printf("%s", mi_funcion(a));
}
