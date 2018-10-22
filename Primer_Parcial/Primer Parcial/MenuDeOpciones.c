#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include "Peliculas.h"
#include "Directores.h"
#include "MenuDeOpciones.h"
#define CANTIDADPELICULAS 2
#define CANTIDADDIRECTORES 2


void menuDeOpciones()
{
    ePelicula listadoMainPelicula[CANTIDADPELICULAS];
    eDirector listadoMainDirectores[CANTIDADDIRECTORES];
    inicializarPelicula( listadoMainPelicula,CANTIDADPELICULAS);
    inicializarDirector( listadoMainDirectores,CANTIDADDIRECTORES);


    listadoMainPelicula[0].anio = 2008;
    listadoMainPelicula[0].idDirector = 1;
    listadoMainPelicula[0].identificador = 0;
    listadoMainPelicula[0].estado = isActive;
    strcpy(listadoMainPelicula[0].nacionalidad,"Peruano");
    strcpy(listadoMainPelicula[0].titulo,"El wachin");

    /*listadoMainPelicula[1].anio = 2016;
    listadoMainPelicula[1].estado = isActive;
    listadoMainPelicula[1].idDirector = 1;
    listadoMainPelicula[1].identificador = 1;
    strcpy(listadoMainPelicula[1].nacionalidad,"argentino");
    strcpy(listadoMainPelicula[1].titulo,"El wachin 2");*/

    listadoMainDirectores[0].id = 1;
    listadoMainDirectores[0].nacimiento.anio = 1900;
    listadoMainDirectores[0].nacimiento.mes = 3;
    listadoMainDirectores[0].nacimiento.dia = 2;
    strcpy(listadoMainDirectores[0].nombre, "Marquitos");
    strcpy(listadoMainDirectores[0].nacionalidad,"Peruano");
    listadoMainDirectores[0].estado = isActive;


    int opcion;
    do
    {
        printf("\n1. Alta pelicula");
        printf("\n2. Modificar datos de una pelicula ");
        printf("\n3. Dar de baja pelicula");
        printf("\n4. Ingresar Nuevo director");
        printf("\n5. Dar de baja Director");
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
            modificarUnaPelicula(listadoMainPelicula, CANTIDADPELICULAS);
            break;
        case 3:
            darDeBajaPelicula(listadoMainPelicula, CANTIDADPELICULAS);
            break;
        case 4:
            cargarDatosDirector(listadoMainDirectores, CANTIDADDIRECTORES);
            break;
        case 5:
            darDeBajaDirector(listadoMainDirectores, CANTIDADDIRECTORES);
            break;
        case 6:
            printf("PELICULAS: \nID    Titulo         Anio    Nacionalidad   IDDirector\n");
            listadoPelicula(listadoMainPelicula, CANTIDADPELICULAS);
            printf("\nDIRECTORES: \nID    Nombre         Fecha de Nacimiento    Nacionalidad\n");
            listadoDirectores(listadoMainDirectores, CANTIDADDIRECTORES);
            break;

        }
    }
    while(opcion !=7);
}


