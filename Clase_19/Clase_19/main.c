#include <stdio.h>
#include <stdlib.h>
#define T 10

//Funcion Escribir Archivo
 void funcionEscribirArchivo (int* array);

int main()
{
    //ESCRIBIR ARCHIVO
    int i=0;
    int vector[T]={1,2,3,4,5,6,7,8,9,10};
    FILE* pArchivo;
    pArchivo = fopen("Saludo.txt", "w");
    for(i=0; i<T; i++)
    {
        fprintf(pArchivo, "%d", vector[i]);

    }

    fclose(pArchivo);

    //LEER ARCHIVO DE TEXTO FUNCION
    /*FILE* pArchivo;
    int i = 0;
    char texto [50];
    pArchivo = fopen("Saludo.txt", "r"); //Abro el archivo en modo de lectura
    for(i=0; i<10; i++)
    {
        fgets(texto, 50, pArchivo);

    }

    fclose(pArchivo); //Cerramos el archivo
    puts(texto);//Mostramos en la consola*/
    return 0;
}

