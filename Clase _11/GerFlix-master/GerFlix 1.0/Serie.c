#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include "Usuario.h"
#include "MenuOpciones.h"
#include "Serie.h"
#define TAMSERIE 20
#define TAMUSUARIO 100

/*
    int idSerie;
    char nombre[50];
    char genero[20];
    int cantidadTemporadas;
    int estado;

*/

void inicializarSeriesEstado(eSerie series[], int cant)
{
    int i;

    for(i=0; i<cant; i++)
    {
        series[i].estado = 0;
    }
}


void inicializarSeriesHardCode(eSerie series[])
{
    int id[5] = {100,101,102,103,104};
    char nombre[][50]={"TBBT","TWD","GOT","BB","LCDP"};
    char genero[][50]={"Comedia","Terror","Suspenso","Policial","Policial"};
    int cantidad[5] = {10,9,7,5,2};

    int i;

    for(i=0; i<5; i++)
    {
        series[i].idSerie=id[i];
        series[i].cantidadTemporadas=cantidad[i];
        series[i].estado = 1;
        strcpy(series[i].nombre, nombre[i]);
        strcpy(series[i].genero, genero[i]);
   }
}

eSerie cargarUnaSerie()
{
    eSerie miSerie;

    //eAlumno miAlumno={123, "Juan", 1.84, 7};
    printf(" Ingrese ID: ");
    scanf("%d", &miSerie.idSerie);
    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(miSerie.nombre);
    printf("Ingrese genero: ");
    fflush(stdin);
    gets(miSerie.genero);
    printf("Ingrese cantidad de temporadas: ");
    scanf("%d", &miSerie.cantidadTemporadas);



    return miSerie;
}
void mostrarUnaSerie (eSerie unaSerie)
{
    printf("%d--%s--%s--%d\n", unaSerie.idSerie, unaSerie.nombre, unaSerie.genero, unaSerie.cantidadTemporadas );
}
void cargarListadoDeSeries(eSerie listado[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        listado[i] = cargarUnaSerie();

    }
}



void mostrarListaSeries(eSerie listado[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        mostrarUnaSerie(listado[i]);
    }
}















