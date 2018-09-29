#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include "MenoDeOpciones.h"
#include "FuncionesAlumnos.h"

void menuDeOpciones()
{
    eAlumno listadoMain[A];
    //inicializar alumnos
    int i;
    for(i=0; i<A; i++)
    {
        listadoMain[i].estado = -1;
    }


    int opcion;
    do
    {
        printf("1. Alta de alumno");
        printf("\n2. Mostrar listado de alumnos");
        printf("\n3. Ordenar nombres Alfabeticamente");
        printf("\n4. Alumnos aprobados");
        printf("\n5. Alumnos llamados Juan");
        printf("\n6. Alumnos cuyos nombres inician con P");
        printf("\n7. Alumnos con notas màs altas");
        printf("\n8. Modificaciòn de la nota de un alumno");
        printf("\n9. Salir");
        printf("\nIngrese una opcion: \n");
        scanf("%d", &opcion);
        switch(opcion)
        {
        case 1:
            cargarListadoDeAlumnos(listadoMain, A);
            break;
        case 2:
            mostrarListadoDeAlumnos(listadoMain, A);
            break;
        case 3:
            ordenarPorNombres(listadoMain, A);
            break;
        case 4:
            alumnosAprobados(listadoMain, A);
            break;
        case 5:
            alumnosLlamadosJuan(listadoMain, A);
            break;
        case 6:
            nombresQueInicianConP(listadoMain, A);
            break;
        case 7:
            alumnosConNotaMasAlta(listadoMain, A);
            break;
        case 8:
            modificarListadoDeAlumnos(listadoMain, A);
            break;

        }

    }
    while(opcion !=9);

}

