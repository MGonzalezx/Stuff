#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Peliculas.h"
#define isEmpty 1
#define isActive 0

int initPelicuas( ePeliculas listado[],int cantidad)
{
    int retorno = -1;
    int i;
    if(cantidad > 0 && listado != NULL)
    {
        retorno = 0;
        for(i=0; i<cantidad; i++)
        {
            listado[i].estado= isActive;
            listado[i].identificadorUnivico= 0;
        }
    }
    return retorno;
}

int buscarLugarLibre(ePeliculas listado[],int cantidad)
{
    int retorno = -1;
    int i;
    if(cantidad > 0 && listado != NULL)
    {
        retorno = -2;
        for(i=0;i<cantidad;i++)
        {
            if(listado[i].estado == isActive)
            {
                retorno = i;
                break;
            }
        }
    }
    return retorno;
}

int siguienteIdPeliculas(ePeliculas listado[],int cantidad)
{
    int retorno = 0;
    int i;
    if(cantidad > 0 && listado != NULL)
    {
        for(i=0; i<cantidad; i++)
        {
            if(listado[i].estado == isActive)
            {
                    if(listado[i].identificadorUnivico>retorno)
                    {
                         retorno=listado[i].identificadorUnivico;
                    }

            }
        }
    }

    return retorno+1;
}

int buscarPeliculaId(ePeliculas listado[] ,int cantidad, int id)
{
    int retorno = -1;
    int i;
    if(cantidad > 0 && listado != NULL)
    {
        retorno = -2;
        for(i=0;i<cantidad;i++)
        {
            if(listado[i].estado == isActive && listado[i].identificadorUnivico == id)
            {
                retorno = i;
                break;
            }
        }
    }
    return retorno;
}

void mostrarUnaPelicula(ePeliculas unaPelicula)
{
     printf("\n %d - %s - %d - %s - %s",unaPelicula.identificadorUnivico,unaPelicula.titulo,unaPelicula.anio,unaPelicula.nacionalidad, unaPelicula.director);

}

void mostrarListadoDePeliculas(ePeliculas listado[], int cantidad)
{
    int i;
    for(i=0; i<cantidad; i++)
    {
        mostrarUnaPelicula(listado[i]);
    }
}
static int ultimoID()
{
    static int id = 0;
    id++;
    return id;
}
/*int altaPeliculas(ePeliculas  listado[],int cantidad)
{
    int retorno = -1;
    char titulo[50];
    int id;
    int anio;
    char nacionalidad;
    char director;
    int indice;

    if(cantidad > 0 && listado != NULL)
    {
        retorno = -2;
        indice = buscarLugarLibre(listado,cantidad);
        if(indice >= 0)
        {
            retorno = -3;
            id = siguienteIdPeliculas(listado,cantidad);

            //if(!getValidString("Nombre?","Error","Overflow", nombre,50,2))
            //{
                retorno = 0;
                strcpy(listado[indice].titulo,);
                listado[indice]. = id;
                listado[indice].estado = isActive;
            //}
        }
    }
    return retorno;
}*/


int darAltaPeliculas(ePeliculas listado[] ,int cantidad)
{
    int index = buscarLugarLibre(listado, cantidad);

    ePeliculas miPelicula;
    miPelicula.identificadorUnivico = ultimoID();



    printf("ID: %d\n", miPelicula.identificadorUnivico);

   printf("Ingrese titulo: ");
    fflush(stdin);
    gets(miPelicula.titulo);
    printf("Ingrese anio: ");
    scanf("%d", &miPelicula.anio);
    printf("Ingrese nacionalidad: ");
    fflush(stdin);
    gets(miPelicula.nacionalidad);
     printf("Ingrese director: ");
    fflush(stdin);
    gets(miPelicula.director);



    /*while(!(strlen(buffer)==7))
    {
        printf("Reingrese DNI: ");
        fflush(stdin);
        gets(buffer);

    }
    strcpy(miAsociado.dni, buffer);*/



    listado[index]=miPelicula;

    return 1;
}




