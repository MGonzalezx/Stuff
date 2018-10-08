#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include "utn.h"
#include "Directores.h"

static int ultimoID()
{
    static int id = 0;
    id++;
    return id;
}

int inicializarDirector( eDirector listado[],int cantidad)
{

    int retorno = -1;
    int i;
    if(cantidad > 0 && listado != NULL)
    {
        retorno = 0;
        for(i=0; i<cantidad; i++)
        {
            listado[i].estado = isEmpty;
            listado[i].id= 0;
        }
    }
    return retorno;
}

int buscarLibreDirector(eDirector listado[],int cantidad)
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


int cargarDatosDirector(eDirector listado[], int cantidad)
{
    int index = buscarLibreDirector(listado, cantidad);
    getchar();
    if(index >=0)
    {
        int i;
        char buffer[1024];

        eDirector miDirector;

        miDirector.id = ultimoID();

        printf("\nID: %d", miDirector.id);

        printf("\nIngrese Nombre: ");
        fflush(stdin);
        gets(buffer);
        while(strlen(buffer)>20 || buffer == listado[i].nombre )
        {
            printf("Reingrese Nombre: ");
            fflush(stdin);
            gets(buffer);
        }
        strcpy(miDirector.nombre, buffer);

        printf("Ingrese anio de nacimiento: ");
        scanf("%d", &miDirector.nacimiento.anio);
        while(miDirector.nacimiento.anio < 1880 || miDirector.nacimiento.anio > 1990)
        {
            printf("Error! Reingresar anio de nacimiento: \n");
            printf("Ingrese anio de nacimiento: ");
            scanf("%d", &miDirector.nacimiento.anio);
        }
        printf("Ingrese mes de nacimiento: ");
        scanf("%d", &miDirector.nacimiento.mes);
        while(miDirector.nacimiento.mes < 1 || miDirector.nacimiento.mes > 12)
        {
            printf("Error! Reingresar mes de nacimiento: \n");
            printf("Ingrese mes de nacimiento: ");
            scanf("%d", &miDirector.nacimiento.mes);

        }

        printf("Ingrese dia de nacimiento: ");
        scanf("%d", &miDirector.nacimiento.dia);
        while(miDirector.nacimiento.dia < 1 || miDirector.nacimiento.dia > 31)
        {
             printf("Error! Reingresar dia de nacimiento: \n");
            printf("Ingrese mes de nacimiento: ");
            scanf("%d", &miDirector.nacimiento.dia);
        }


        printf("Ingrese Nacionalidad: ");
        fflush(stdin);
        gets(buffer);
        while(strlen(buffer)>30 || !esSoloLetras(buffer))
        {
            printf("Reingrese Nacionalidad: ");
            fflush(stdin);
            gets(buffer);

        }
        strcpy(miDirector.nacionalidad, buffer);


        miDirector.estado = isActive;
        listado[index]= miDirector;

    }
    else
    {
        printf("\nERROR indice invalido u ocupado.\n");
    }
    return 1;
}

void mostrarUnDirector(eDirector unDirector)
{
    printf("\n%-7d%-14s%7d/%d/%d%16s\n ", unDirector.id, unDirector.nombre, unDirector.nacimiento.anio, unDirector.nacimiento.mes, unDirector.nacimiento.dia, unDirector.nacionalidad);

}


int listadoDirectores(eDirector listado[],int cantidad)
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

                mostrarUnDirector(listado[i]);
            }
        }
    }
    return retorno;
}
