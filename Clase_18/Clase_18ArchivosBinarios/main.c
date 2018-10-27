#include <stdio.h>
#include <stdlib.h>
typedef struct
{
  int a;
  char b;

}eDato;


int main()
{
    //ARCHIVOS BINARIOS
    //ESCRIBIR ARCHIVO BINARIO FUNCION
    /*eDato dato ={1,'c'};


        FILE*pArchivo;
    //int x=4;
     pArchivo = fopen("Binario.bin", "wb");//Binarios son .bin y para leer wb
    int y = fwrite(&dato, sizeof(eDato), 1, pArchivo);//DATO, TAMAÑO, CANTIDAD cuantos enteros quiero guardar, ARCHIVO
    fclose(pArchivo);
    printf("%d", y);*/



    //LEER ARCHIVO BINARIO FUNCION
    FILE*pArchivo;
    eDato d;
    pArchivo = fopen("Binario.bin", "rb");
    fread(&d, sizeof(eDato), 1, pArchivo);
    fclose(pArchivo);
    printf("%d--%c", d.a, d.b);
    return 0;
}


