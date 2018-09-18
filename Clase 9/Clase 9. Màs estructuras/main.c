#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#define A 3
typedef struct
{
    int legajo;
    char nombre[50];
    float altura;
    int nota;
    int estado;

} eAlumno;

void ordenarPorNombres(eAlumno[], int);
void cargarListadoDeAlumnos(eAlumno[], int);
void mostrarListadoDeAlumnos(eAlumno[], int);
void modificarListadoDeAlumnos(eAlumno[], int);

void mostrartUnAlumno(eAlumno);
eAlumno cargarUnAlumno();



int main()
{

    eAlumno listadoMain[A];
    //inicializar alumnos
    int i;
    for(i=0; i<A; i++)
    {
        listadoMain[i].estado = -1;
    }
    char opcion;
    do
    { printf("a. Alta de alumno\no. Ordenar lista de alumnos\nm. Mostrar listado\nM. \ns. Salir");
    printf("\nIngrese una opcion: \n");
    opcion = getche();
    switch(opcion)
    {
    case 'a':
        cargarListadoDeAlumnos(listadoMain, A);
        break;
    case 'o':
        ordenarPorNombres(listadoMain, A);
        break;
    case 'm':
        mostrarListadoDeAlumnos(listadoMain, A);
        break;
    case 'M':
        modificarListadoDeAlumnos(listadoMain, A);
        break;
    }

    }while(opcion !='s');




    return 0;
}

eAlumno cargarUnAlumno()
{
    eAlumno miAlumno;

    //eAlumno miAlumno={123, "Juan", 1.84, 7};
    printf(" Ingrese legajo: ");
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

void modificarListadoDeAlumnos(eAlumno listado[], int tam)
{
    int legajo;
    int i;
    printf("Ingrese un legajo a buscar: "):
        scanf("%d", &legajo);
        for(i=0; i<tam; i++)
        {
            if(legajo == listado[i].legajo)
            {
                //mostrar el alumno
                //pedir nueva nota
                //pregunto si esta seguro de realizar la modificiacion
                //SI. Hago modificacion
                //NO. Aviso que se cancelo la modificacion
            }
        }
}
