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
    int anioCorrecto = 0;
    int mesCorrecto = 0;
    int diaCorrecto = 0;
    getchar();
    if(index >=0)
    {

        char buffer[1024];

        eDirector miDirector;

        miDirector.id = ultimoID();

        printf("\nID: %d", miDirector.id);

        printf("\nIngrese Nombre: ");
        fflush(stdin);
        gets(buffer);
        while(strlen(buffer)>20 || !esSoloLetras(buffer) ||
                nombre_Repetido(listado, CANTIDADDIRECTORES, buffer))
        {
            printf("Reingrese Nombre: ");
            fflush(stdin);
            gets(buffer);
        }
        strcpy(miDirector.nombre, buffer);

        printf("Ingrese anio de nacimiento: ");
        while(!anioCorrecto)
        {
            fflush(stdin);
            gets(buffer);
            if(esNumerico(buffer))
            {
                miDirector.nacimiento.anio = atoi(buffer);

                if(miDirector.nacimiento.anio < 1880 || miDirector.nacimiento.anio > 1990)
                {
                    printf("Error! Reingresar anio de nacimiento entre 1880 y 1990: \n");
                }
                else
                {
                    anioCorrecto = 1;
                }
            }
            else
            {
                printf("Error! Ingresar anio de nacimiento Numerico: ");
            }
        }
        printf("Ingrese mes de nacimiento: ");
        while(!mesCorrecto)
        {
            fflush(stdin);
            gets(buffer);
            if(esNumerico(buffer))
            {
                miDirector.nacimiento.mes = atoi(buffer);

                if(miDirector.nacimiento.mes < 1 || miDirector.nacimiento.mes > 12)
                {
                    printf("Error! Reingresar mes de nacimiento entre 1 y 12: \n");
                }
                else
                {
                    mesCorrecto = 1;
                }
            }
            else
            {
                printf("Error! Ingresar mes de nacimiento Numerico: ");
            }

        }
        printf("Ingrese dia de nacimiento: ");
        while(!diaCorrecto)
        {
            fflush(stdin);
            gets(buffer);
            if(esNumerico(buffer))
            {
                miDirector.nacimiento.dia = atoi(buffer);

                if(miDirector.nacimiento.dia < 1 || miDirector.nacimiento.dia > 31)
                {
                    printf("Error! Reingresar dia de nacimiento entre 1 y 31: \n");
                }
                else
                {
                    diaCorrecto = 1;
                }
            }
            else
            {
                printf("Error! Ingresar dia de nacimiento Numerico: ");
            }
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
    printf("\n%-7d%-14s%7d/%d/%d%19s\n ", unDirector.id, unDirector.nombre, unDirector.nacimiento.dia, unDirector.nacimiento.mes, unDirector.nacimiento.anio, unDirector.nacionalidad);

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

void darDeBajaDirector(eDirector listado[], int cantidad)
{
    int id;
    int flag=0;
    int i;
    char opcion;
    printf("Ingrese ID de director a dar de baja: ");
    scanf("%d", &id);
    for(i=0; i<cantidad; i++)
    {
        if(id==listado[i].id)
        {
            printf("\nID encontrado: \n");
            printf("Nombre: %s\n", listado[i].nombre);
            printf("Nacionalidad: %s\n", listado[i].nacionalidad);
            printf("Fecha de nacimiento: %d/%d/%d\n", listado[i].nacimiento.dia,listado[i].nacimiento.mes, listado[i].nacimiento.anio);



            printf("\n Seguro desea dar de baja? s=si n=no\n ");
            opcion=getche();
            if(opcion=='s')
            {
                listado[i].id=0;
                listado[i].estado=isEmpty;
                printf("\n­­Registro eliminado!!\n");
            }
            else if(opcion=='n')
            {
                printf("\nEl registro no fue eliminado!\n");
            }
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("ID inexistente\n");
        getch();
    }
}

void peliculas_Con_Director(ePelicula* listaPelicula, eDirector* listaDirector, int lenP, int lenD)
{
    int i;
    int j;
    printf("%15s %15s\n", "Titulo", "Director");
    for(i = 0; i<lenP; i++)
    {
        if(listaPelicula[i].estado == isActive)
        {

            for(j = 0; j<lenD; j++)
            {
                if(listaPelicula[i].idDirector == listaDirector[j].id)
                {
                    printf("%15s %15s\n", listaPelicula[i].titulo, listaDirector[j].nombre);
                    break;
                }
            }
        }
    }
}

int nombre_Repetido(eDirector* miDirector, int lenD, char* nombre)
{
    int retorno = 0;
    int i;
    for(i = 0; i < lenD; i++)
    {
        if(strcmp(miDirector[i].nombre, nombre )== 0)
        {
            printf("Nombre ya ingresado, por favor ingrese otro. ");
            retorno = 1;
            break;
        }
    }
    return retorno;
}



int contador_Peliculas(ePelicula* listaPelicula, int idDirector, int cantP)
{
    int contador = 0;
    int i;
    for(i = 0; i < cantP; i++)
    {
        if(listaPelicula[i].estado == isActive && listaPelicula[i].idDirector == idDirector)
        {
            contador++;
        }
    }
    return contador;
}


