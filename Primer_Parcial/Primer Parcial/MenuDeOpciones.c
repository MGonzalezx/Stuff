#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include "Directores.h"
#include "MenuDeOpciones.h"
#define CANTIDADPELICULAS 2
#define CANTIDADDIRECTORES 2
#define CANTIDADNACIONALIDADES 2


void menuDeOpciones()
{
    ePelicula listadoMainPelicula[CANTIDADPELICULAS];
    eDirector listadoMainDirectores[CANTIDADDIRECTORES];
    eNacionalidad listadMainNacionalidad[CANTIDADNACIONALIDADES];
    inicializarNacionalidad(listadMainNacionalidad, CANTIDADNACIONALIDADES);
    inicializarPelicula( listadoMainPelicula,CANTIDADPELICULAS);
    inicializarDirector( listadoMainDirectores,CANTIDADDIRECTORES);



    listadoMainPelicula[0].anio = 2008;
    listadoMainPelicula[0].idDirector = 1;
    listadoMainPelicula[0].identificador = 0;
    listadoMainPelicula[0].estado = isActive;
    strcpy(listadoMainPelicula[0].nacionalidad,"Peruano");
    strcpy(listadoMainPelicula[0].titulo,"El wachin");

    listadoMainPelicula[1].anio = 2016;
    listadoMainPelicula[1].estado = isActive;
    listadoMainPelicula[1].idDirector = 1;
    listadoMainPelicula[1].identificador = 1;
    strcpy(listadoMainPelicula[1].nacionalidad,"Argentino");
    strcpy(listadoMainPelicula[1].titulo,"El wachin 2");

    listadoMainDirectores[0].id = 0;
    listadoMainDirectores[0].nacimiento.anio = 1900;
    listadoMainDirectores[0].nacimiento.mes = 3;
    listadoMainDirectores[0].nacimiento.dia = 2;
    listadoMainDirectores[0].idNacionalidad = 0;
    strcpy(listadMainNacionalidad[0].descripcion, "Peruano");
    strcpy(listadoMainDirectores[0].nombre, "Marquitos");
    listadoMainDirectores[0].estado = isActive;

    listadoMainDirectores[1].id = 1;
    listadoMainDirectores[1].nacimiento.anio = 1950;
    listadoMainDirectores[1].nacimiento.mes = 10;
    listadoMainDirectores[1].nacimiento.dia = 30;
    listadoMainDirectores[1].idNacionalidad = 1;
    strcpy(listadMainNacionalidad[1].descripcion, "Argentino");
    strcpy(listadoMainDirectores[1].nombre, "Juan");
    listadoMainDirectores[1].estado = isActive;

    char opcion2;
    int opcion;
    do
    {

        printf("\n1. Alta pelicula.");
        printf("\n2. Modificar datos de una pelicula.");
        printf("\n3. Dar de baja pelicula.");
        printf("\n4. Ingresar Nuevo director.");
        printf("\n5. Dar de baja Director.");
        printf("\n6. Consultar.");
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

            do
            {
                printf("\na. Peliculas.");
                printf("\nb. Directores.");
                printf("\nc. La/s peliculas mas viejas.");
                printf("\nd. Cada pelicula con el nombre de su director.");
                printf("\ne. Peliculas por director.");
                printf("\nf. Cantidad de peliculas por director.");
                printf("\ng. Director con mas peliculas.");
                printf("\nh. Todas las peliculas cuyo director sea Argentino.");
                printf("\ni. Cantidad de peliculas por nacionalidad.");
                printf("\nj. Nada, salir.");
                printf("\nIngrese una opcion: \n");
                scanf("%s", &opcion2);
                switch(opcion2)
                {
                case 'a':
                    printf("PELICULAS: \nID    Titulo         Anio    Nacionalidad   IDDirector\n");
                    listadoPelicula(listadoMainPelicula, CANTIDADPELICULAS);
                    break;
                case 'b':
                    printf("\nDIRECTORES: \nID    Nombre         Fecha de Nacimiento    IDNacionalidad\n");
                    listadoDirectores(listadoMainDirectores, CANTIDADDIRECTORES);
                    break;
                case 'c':
                    printf("PELICULAS: \nID    Titulo         Anio    Nacionalidad   IDDirector\n");
                    peliculas_Mas_Viejas(listadoMainPelicula, CANTIDADPELICULAS);
                    break;
                case 'd':
                    peliculas_Con_Director(listadoMainPelicula, listadoMainDirectores, CANTIDADPELICULAS, CANTIDADDIRECTORES);
                    break;
                case 'e':
                    peliculas_Por_Director(listadoMainPelicula, listadoMainDirectores, CANTIDADPELICULAS, CANTIDADDIRECTORES);
                    break;
                case 'f':
                    peliculas_dirigidas_Por_Director(listadoMainPelicula, listadoMainDirectores, CANTIDADPELICULAS, CANTIDADDIRECTORES);
                    break;
                case 'g':
                    puts("\nEl siguiente director tiene la mayor cantidad de peliculas: ");
                    printf("\nID    Nombre         Fecha de Nacimiento    Nacionalidad\n");
                    director_Con_Mas_Peliculas(listadoMainPelicula, listadoMainDirectores, CANTIDADPELICULAS, CANTIDADDIRECTORES);
                    break;
                case 'h':
                        busca_Pelicula_Por_Nacionalidad_Director(listadoMainDirectores, listadoMainPelicula, 1, CANTIDADPELICULAS);
                    break;
                case 'i':
                        cantidad_Peliculas_Por_Nacionalidad(listadMainNacionalidad, listadoMainPelicula, listadoMainDirectores
                                                            ,CANTIDADPELICULAS,CANTIDADDIRECTORES, CANTIDADNACIONALIDADES);
                    break;
                case 'j':

                    break;
                default:
                    printf("Opcion incorrecta!!");
                    break;
                }


            }
            while(opcion2 !='j');
            break;

        case 7:
            break;
        default:
            printf("\nOpcion incorrecta, por favor elegir una opcion entre el 1 y 7\n");
        }
    }
    while(opcion !=7);
}


