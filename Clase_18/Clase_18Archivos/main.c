#include <stdio.h>
#include <stdlib.h>

int main()
{
    //ARCHIVOS DE TEXTO
    //ESCRIBIR ARCHIVO DE TEXTO FUNCION
    /*FILE* pArchivo;

    pArchivo = fopen("Saludo.txt", "w"); //Abro el archivo saludo.txt en modo de ESCRITURA
    fprintf(pArchivo, "Hola\nQue\nHace");//Usamos el archivo
    fclose(pArchivo); //Cierro el archivo*/

    //FILE* pArchivo;
    //pArchivo = fopen("Saludo.txt", "w"); //Abro el archivo saludo.txt en modo de ESCRITURA
    //char cadena[50]="Martin";
    //fprintf(pArchivo,"Hola %s, como estas?\n Todo bien", cadena); //Usamos el archivo
    //fprintf(pArchivo, "Hola mundo");//Usamos el archivo
    //fclose(pArchivo); //Cierro el archivo

    //FILE* pArchivo;
    //pArchivo = fopen("Saludo.txt", "w"); //Abro el archivo saludo.txt en modo de ESCRITURA
    //fprintf(pArchivo, "Hola mundo");//Usamos el archivo
    //fclose(pArchivo); //Cierro el archivo

    //LEER ARCHIVO DE TEXTO FUNCION
    FILE* pArchivo;
    char texto[3][50];
    int i = 0;

    pArchivo = fopen("Saludo.txt", "r"); //Abro el archivo en modo de lectura
    while (!feof(pArchivo))
    {
        fgets(texto[i], 50, pArchivo);//Donde lo va a poner, cuanto espacio tiene, de donde lo saca
        i++;
    }

    fclose(pArchivo); //Cerramos el archivo
    for(i=0; i<3;i++)
    {
        puts(texto[i]);//Mostramos en la consola
    }

    //FILE* pArchivo;
    //char texto[50], otro[50];
    //pArchivo = fopen("Saludo.txt", "r"); //Abro el archivo en modo de lectura
    //fgets(texto, 50, pArchivo);//Donde lo va a poner, cuanto espacio tiene, de donde lo saca
    //fgets(otro, 50, pArchivo);
    //puts(texto); //Mostramos en la consola
    //puts(otro); //Mostramos en la consola

    return 0;
}
