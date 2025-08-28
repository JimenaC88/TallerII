
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum {
MAYUSCULAS,
MINUSCULAS
} may_min;
int strLargo(const char *origen){
    int largo= strlen(origen);
    return largo;
}//cantidad de caracteres
int strVacio(const char *origen){
    int largo=strlen(origen);
    int r;
    if(largo>0){
        r= 1;
    }else{
        r=0;
    }
    return r;
}//retorna 1 si tiene al menos un caracter, 0 en otro caso
void strCopia(char *destino, const char *origen){

       int largo =strlen(origen);
       for(int i=0; i<largo+1; i++){
        *destino=*origen;
        destino++;
        origen++;
       }
}//Copiador
/*prototipo modificado para permitir argumentos de  tipo string literales,
en casi todos los compiladores un literal string es considerado una
constante, o sea la función no podrá modificarlos pero, en algunos compiladores tales como
GCC es posible modificarlos (según K&R el comportamiento es indefinido)*/
char* reverse(char *string){

      int largo=strlen(string);

      char rev[largo];
      int cont=0;
      char *inicio=string;
      char *fin=string+largo-1;
      char *invertida=(char *)malloc((largo+1)*sizeof(char*));
      if(invertida==NULL){
        return 1;
      }
      free(invertida);
      invertida=NULL;
      for(int i=largo-1; i>=0; i--){
        rev[cont]=*(string+i);
        cont++;
      }

      static char resultado[1000];
      for(int i=0; i<largo+1; i++){
      resultado[i]=rev[i];
      }
      invertida=&resultado;
      return invertida;
}//retorna una cadena que es string invertida


void strIzq(char *destino, const char *origen){
      int largo=strlen(origen);
      int cont=0;
      char copia[largo];
      for(int i=0; i<largo+1; i++){
        copia[i]=*(origen+i);
      }
            while(copia[cont]==' '){
                cont++;

           }
           strCopia(destino, origen+cont);
}// Saca blancos Izq.
void strDer(char *destino, const char *origen){

      strIzq(destino, origen);
      strIzq(destino, reverse(destino));
      strIzq(destino, destino);


}//Saca blancos Der.
void strAmbos(char *destino, const char *origen){
      strIzq(destino, origen);
      strDer(destino, origen);
}//Saca blancos Izq. y Der.
void strMayMin(char *destino, const char *origen, may_min m){
}//Convierte May. Min.

int ej9(){
char *text1= "            Sera Cierto  ??             ";
int largo=strLargo(text1)+1;
char *result= ((char *)malloc (largo));
char *reves;
if(result==NULL){
    return -1;
}//sino pudo reservar memoria para result
printf("La cadena: ");
puts(text1);
printf("Se encuentra %s\n", (strVacio(text1)) ? "No vacia" : "Vacia");
printf("Largo : %d\n", strLargo(text1));
strCopia(result, text1);
printf("Copia : [%s]\n", result);
strIzq(result, text1);
printf("Sin blancos a la Izq:");
puts(result);
strDer(result, text1);
printf("Ambos: [%s], sin blancos al principio ni al final.\n", result);
/*strMayMin(result, text1, MAYUSCULAS);
printf("Mayusculas: [%s]\n", result);
strMayMin(result, text1, MINUSCULAS);
printf("Minusculas: [%s]\n", result);*/
reves=reverse(text1);
printf("La cadena: %s invertida queda: %s\n", text1, reves);
return 0;
}

