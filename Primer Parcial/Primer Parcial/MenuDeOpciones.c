#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include "Peliculas.h"
#include "Directores.h"
#include "MenuDeOpciones.h"
#define CANTIDADPELICULAS 4
#define CANTIDADDIREC 2


void menuDeOpciones()
{
    ePelicula listadoMainPelicula[CANTIDADPELICULAS];
    eDirector listadoDirecores[CANTIDADDIREC];
    inicializarPelicula( listadoMainPelicula,CANTIDADPELICULAS);

      /*  inicializarPelicula(listadoMainPelicula, A);
        listadoMainPelicula[0].anio = 2008;
        listadoMainPelicula[0].idDirector = 1;
        listadoMainPelicula[0].identidficador = 0;
        listadoMainPelicula[0].estado = isActive;
        strcpy(listadoMainPelicula[0].nacionalidad,"Peruano");
        strcpy(listadoMainPelicula[0].titulo,"El wachin");

        listadoMainPelicula[1].anio = 2016;
        listadoMainPelicula[1].estado = isActive;
        listadoMainPelicula[1].idDirector = 1;
        listadoMainPelicula[1].identidficador = 1;
        strcpy(listadoMainPelicula[1].nacionalidad,"argentino");
        strcpy(listadoMainPelicula[1].titulo,"El wachin 2");

        listadoDirecores[0].id = 1;
        listadoDirecores[0].nacimiento.anio = 1900;
        listadoDirecores[0].nacimiento.mes = 3;
        listadoDirecores[0].nacimiento.dia = 2;
        strcpy(listadoDirecores[0].nombre, "Marquitos");*/


    int opcion;
    do
    {
        printf("1. Alta pelicula");
        printf("\n2. ");
        printf("\n3. ");
        printf("\n4. ");
        printf("\n5. ");
        printf("\n6. Informar");
        printf("\n7. Salir");
        printf("\nIngrese una opcion: \n");
        scanf("%d", &opcion);
        switch(opcion)
        {
        case 1:
            cargarDatosPelicula(listadoMainPelicula,CANTIDADPELICULAS);
            break;
        case 2:

            break;
        case 3:

            break;
        case 4:

            break;
        case 5:

            break;
        case 6:
            listadoPelicula(listadoMainPelicula, CANTIDADPELICULAS);
            break;

        }
    }
    while(opcion !=7);
}


