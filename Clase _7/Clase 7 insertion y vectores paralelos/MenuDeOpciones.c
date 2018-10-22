#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include "MenoDeOpciones.h"
#include "FuncionesAlumnos.h"
void menuDeOpciones()
{   eAlumno listadoMain[A];
    //inicializar alumnos
    int i;
    for(i=0; i<A; i++)
    {
        listadoMain[i].estado = -1;
    }


     int opcion;
    do
    { printf("1. Alta de alumno\n2. Ordenar lista de alumnos\nm. Mostrar listado\n3. Modificar listado \n4. Salir");
    printf("\nIngrese una opcion: \n");
    opcion = getche();
    switch(opcion)
    {
    case 1:
        cargarListadoDeAlumnos(listadoMain, A);
        break;
    case 2:
        ordenarPorNombres(listadoMain, A);
        break;
    case 3:
        mostrarListadoDeAlumnos(listadoMain, A);
        break;
    case 4:
        modificarListadoDeAlumnos(listadoMain, A);
        break;
    }

    }while(opcion !='s');

}

