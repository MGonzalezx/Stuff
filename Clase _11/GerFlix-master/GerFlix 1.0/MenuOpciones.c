#include <stdio.h>
#include <stdlib.h>
#include "Usuario.h"
#include "Serie.h"
#include "MenuOpciones.h"
#define TAMSERIE 20
#define TAMUSUARIO 100

void menuDeOpciones()
{
    eSerie listadoSerie[A];

    int i;
    for(i=0; i<A; i++)
    {
        listadoSerie[i].estado = -1;
    }

    eUsuario listadoUsuario[A] ;


    for(i=0; i<A; i++)
    {
        listadoUsuario[i].estado = -1;
    }

   int opcion;
    do
    {
        printf("1. Mostrar listado de series");
        printf("\n2. Mostrar listado de usuarios");
        printf("\n3. Mostrar el listado de Usuarios con el nombre de la serie que ve");
        printf("\n4. Mostrar por cada serie, el nombre de los usuarios que la ven.");
        printf("\n5. Salir");
        printf("\nIngrese una opcion: \n");
        scanf("%d", &opcion);
        switch(opcion)
        {
        case 1:
                mostrarListaSeries(listadoSerie, A);
            break;
        case 2:

            break;
        case 3:

            break;
        case 4:

            break;
        case 5:

            break;
        }

    }
    while(opcion !=5);

}
