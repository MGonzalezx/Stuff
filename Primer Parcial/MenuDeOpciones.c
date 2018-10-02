#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Peliculas.h"
#include "Directores.h"
#include "MenuDeOpciones.h"

void menuDeOpciones()
{
    ePeliculas listadoMain[A];
    //inicializar alumnos
    int i;
    for(i=0; i<A; i++)
    {
        listadoMain[i].estado = 0;
    }


    int opcion;
    do
    {
        printf("1. Alta de peliculas");
        printf("\n2. ");
        printf("\n3. ");
        printf("\n4. ");
        printf("\n5. ");
        printf("\n6. Listar");
        printf("\n7. Salir");

        printf("\nIngrese una opcion: \n");
        scanf("%d", &opcion);
        switch(opcion)
        {
        case 1:
                darAltaPeliculas(listadoMain, A);
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
                mostrarListadoDePeliculas(listadoMain, A);
            break;
        }

    }
    while(opcion !=7);

}



