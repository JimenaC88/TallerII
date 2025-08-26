#include <stdio.h>
#include <stdlib.h>
int ej2(){
    int k, z;
    printf("ingrese la cantidad de materias\n");
    scanf("%d", &k);
    printf("ingrese la cantidad de alumnos\n");
    scanf("%d", &z);

    int notas[k][z];
    int nota[z];
    int promedio_alumnos[k];

    for(int i=0; i<k; i++){
        for(int j=0; j<z; j++){
        printf("ingrese la nota de la materia %d del alumno %d\n", i+1, j+1);
        scanf("%d", &notas[i][j]);
        }
    }


    for(int i=0; i<k; i++){
        for(int j=0; j<z; j++){
            printf("Nota del alumno %d en la materia %d: %d\n", j+1, i+1, notas[i][j]);
            nota[i]=0;
            promedio_alumnos[i]=0;
        }
    }
    for(int i=0; i<k; i++){
        for(int j=0; j<z; j++){
        nota[j]=nota[j]+notas[i][j];
        }
    }
    for(int i=0; i<z; i++){
        for(int j=0; j<k; j++){
            promedio_alumnos[j]=promedio_alumnos[j]+notas[j][i];
        }
    }
    for(int j=0; j<z; j++){
        printf("promedio alumno %d : %d\n", j+1, nota[j]/k);
    }
    for(int i=0; i<k; i++){
        printf("promedio de la materia %d : %d\n", i+1, promedio_alumnos[i]/z);
    }
return 0;
}
