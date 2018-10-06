#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include "Peliculas.h"


static int ultimoID()
{
    static int id = 0;
    id++;
    return id;
}

int buscarLibrePelicula(ePelicula listado[],int cantidad)
{
    int index = -1;
    int i;
    if(cantidad > 0 && listado != NULL)
    {
        index = -2;
        for(i=0; i<cantidad; i++)
        {
            if(listado[i].estado == isEmpty)
            {
                index = i;
                break;
            }
        }
    }
    return index;
}

int cargarDatosPelicula(ePelicula listado[], int cantidad)
{


    int index = buscarLibrePelicula(listado, cantidad);
    printf("%d",index);
    getchar();
    if(index >=0)
    {
        char buffer[1024];

        ePelicula miPelicula;

        miPelicula.identidficador = ultimoID();

        printf("ID: %d", miPelicula.identidficador);

        printf("\nIngrese Titulo: ");
        fflush(stdin);
        gets(buffer);
        while(strlen(buffer)>20)
        {
            printf("Reingrese Titulo: ");
            fflush(stdin);
            gets(buffer);
        }
        strcpy(miPelicula.titulo, buffer);

        printf("Ingrese Anio: ");
        scanf("%d", &miPelicula.anio);
        while(miPelicula.anio < 1900 || miPelicula.anio > 2018)
        {
            printf("Error! Ingresar anio entre 1900 y 2018: ");
            scanf("%d", &miPelicula.anio);
        }
        printf("Ingrese Nacionalidad: ");
        fflush(stdin);
        gets(buffer);
        while(strlen(buffer)>20)
        {
            printf("Reingrese Nacionalidad: ");
            fflush(stdin);
            gets(buffer);

        }
        strcpy(miPelicula.nacionalidad, buffer);

        printf("Ingrese ID del director: ");

        scanf("%d", &(miPelicula.idDirector));
        miPelicula.idDirector = 1;

        /*while(miPelicula.idDirector < 1 || miPelicula.idDirector > 500)
        {
            printf("Reingrese ID del director entre un valor de 1 y 500: ");
            scanf("%d", &miPelicula.idDirector);
        }*/


        miPelicula.estado = isActive;
        listado[index]= miPelicula;

    }
    else {
        printf("ERROR indice invalido u ocupado.");
    }
    return 1;

}
void mostrarUnaPelicula(ePelicula unaPelicula)
{
    printf("ID  Titulo  Anio  Nacionalidad:  ID Director \n %d---%s---%d---%s---%d\n", unaPelicula.identidficador, unaPelicula.titulo,unaPelicula.anio,unaPelicula.nacionalidad,unaPelicula.idDirector);

}

int listadoPelicula(ePelicula listado[],int cantidad)
{
    int retorno = -1;
    int i;
    if(cantidad > 0 && listado != NULL)
    {
        retorno = 0;
        for(i=0; i<cantidad; i++)
        {
            if(listado[i].estado==isActive)
            {

                mostrarUnaPelicula(listado[i]);
            }
        }
    }
    return retorno;
}

int inicializarPelicula( ePelicula listado[],int cantidad)
{

    int retorno = -1;
    int i;
    if(cantidad > 0 && listado != NULL)
    {
        retorno = 0;
        for(i=0; i<cantidad; i++)
        {
            listado[i].estado = isEmpty;
            listado[i].identidficador= 0;
        }
    }
    return retorno;
}
