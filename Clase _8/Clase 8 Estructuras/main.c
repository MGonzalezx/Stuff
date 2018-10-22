#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define A 3
typedef struct
{
    int legajo;
    char nombre[50];
    float altura;
    int nota;
} eAlumno;

void ordenarPorNombres(eAlumno[], int);
void cargarListadoDeAlumnos(eAlumno[], int);
void mostrarListadoDeAlumnos(eAlumno[], int);

void mostrartUnAlumno(eAlumno);
eAlumno cargarUnAlumno();



int main()
{
    eAlumno listadoMain[A];
    cargarListadoDeAlumnos(listadoMain, A);
    printf("\n");
    mostrarListadoDeAlumnos(listadoMain, A);
    ordenarPorNombres(listadoMain, A);
    printf("\n");
    mostrarListadoDeAlumnos(listadoMain, A);


    return 0;
}

eAlumno cargarUnAlumno()
{
    eAlumno miAlumno;

    //eAlumno miAlumno={123, "Juan", 1.84, 7};
    printf("Ingrese legajo: ");
    scanf("%d", &miAlumno.legajo);
    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(miAlumno.nombre);
    printf("Ingrese altura: ");
    scanf("%f", &miAlumno.altura);
    printf("Ingrese nota: ");
    scanf("%d", &miAlumno.nota);

    mostrartUnAlumno(miAlumno);

    //printf("%d\n\n", sizeof(eAlumno));//Sumatoria de todos los datos. Me muestra cuanto pesa.

    return miAlumno;
}

void mostrartUnAlumno(eAlumno unAlumno)
{
    printf("%d--%s--%f--%d\n", unAlumno.legajo, unAlumno.nombre, unAlumno.altura, unAlumno.nota);
}


void cargarListadoDeAlumnos(eAlumno listado[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        listado[i] = cargarUnAlumno();
        //printf("Ingrese legajo: ");
        //scanf("%d", &listado.legajo)
    }
}

void mostrarListadoDeAlumnos(eAlumno listado[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        mostrartUnAlumno(listado[i]);
    }
}

void ordenarPorNombres(eAlumno listado[], int tam)
{
    int i;
    int j;

    eAlumno auxiliarAlumno;

    for(i=0; i<tam-1; i++)
    {
        for(j=i+1; j<tam; j++)
        {
            if(strcmp(listado[i].nombre, listado[j].nombre)>0)
            {
                auxiliarAlumno=listado[i];
                listado[i]=listado[j];
                listado[j]=auxiliarAlumno;
            }
        }
    }


}
