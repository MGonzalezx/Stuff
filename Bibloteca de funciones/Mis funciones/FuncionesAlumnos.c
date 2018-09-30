#include "FuncionesAlumnos.h"
#include "MenoDeOpciones.h"
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
/*static int ultimoID()
{
    static int id = 0;
    id++;
    return id;*/ //Este ID va a aumentar automaticamente



   /* int buscarLibre(eAsociado listado[], int cantidad)
{
    int index=-1;
    int i;
    for( i=0; i < cantidad; i++)
    {
        if(listado[i].isEmpty==1)
        {
            index=i;
            break;
        }
    }
    return index;
}
*/


/*int cargarUnAsociado(eAsociado listado[], int cantidad)
{
    int index = buscarLibre(listado, cantidad);

    eAsociado miAsociado;
    miAsociado.id = ultimoID();

    printf("ID: %d", miAsociado.id);

    char buffer[1024];

    printf("\nIngrese DNI: ");
    fflush(stdin);
    gets(buffer);
    while(!(strlen(buffer)==7))
    {
        printf("Reingrese DNI: ");
        fflush(stdin);
        gets(buffer);

    }
    strcpy(miAsociado.dni, buffer);

    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(miAsociado.nombre);
    printf("Ingrese Apellido: ");
    fflush(stdin);
    gets(miAsociado.apellido);
    printf("Ingrese Edad: ");
    scanf("%d", &miAsociado.edad);


    listado[index]=miAsociado;

    return 1;
}*/


/*void modificarUnAsociado(eAsociado listado[], int tam)
{
    char nombre [50];
    char apellido [50];
    char opcion;
    int id;
    int i;
    int flag = 0;
    printf("Ingrese un ID a buscar: ");
    scanf("%d", &id);

    for(i=0; i<tam; i++)
    {
        printf("%d", listado[i].id);
        if(id == listado[i].id)
        {
            printf("ID encontrado:\n");

            printf("%s\n", listado[i].nombre);
            printf("%s", listado[i].apellido);

            printf("\nIngrese el nuevo nombre: ");
            scanf("%s", nombre);

            printf("\nIngrese el nuevo apellido: ");
            scanf("%s", apellido);

            printf("Esta seguro que desea modificar? s=si n=no\n ");
            opcion=getche();
            if(opcion=='s')
            {
                strcpy(listado[i].nombre, nombre);
                strcpy(listado[i].apellido, apellido);
                printf("\nRegistro modificado\n");
            }
            else if(opcion=='n')
            {
                printf("El Nombre y Apellido no fueron modificados\n");
            }
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("ID inexistente\n");
        getch();
    }
}
void darDeBajaAsociado(eAsociado listado[], int tam)
{
    int id;
    int flag=0;
    int i;
    char opcion;
    printf("Ingrese ID a dar de baja: ");
    scanf("%d", &id);
    for(i=0; i<tam; i++)
    {
        if(id==listado[i].id)
        {
            printf("\nID encontrado: ");
            printf("%s\n", listado[i].nombre);
            printf("%s", listado[i].apellido);


            printf("\nID encontrado. �Seguro desea dar de baja? s=si n=no\n ");
            opcion=getche();
            if(opcion=='s')
            {
                listado[i].id=0;
                printf("\n��Registro eliminado!!\n");
            }
            else if(opcion=='n')
            {
                printf("\nEl registro no fue eliminado!\n");
            }
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("ID inexistente\n");
        getch();
    }
}*/

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
    printf("Los alumnos fueron ordenados alfabeticamente, precione 2 para ver la lista\n");


}

/*void ordenarPorNombre(int legajos[], char nombres[][21], int notas[], float alturas[], int tam)
{
     int auxiliarInt;
    float auxiliarFloat;
    char auxiliarString[100];

    int i;
    int j;

    for(i=0; i<tam-1; i++)
    {
        for(j=i+1; j<tam; j++)
        {
            if(strcmp(nombres[i], nombres[j])>0)
            {
                strcpy(auxiliarString, nombres[i]);
                strcpy(nombres[i], nombres[j]);
                strcpy(nombres[j], auxiliarString);

                auxiliarInt = legajos[i];
                legajos[i] = legajos [j];
                legajos[j] = auxiliarInt;

                auxiliarInt = notas[i];
                notas[i] = notas [j];
                notas[j] = auxiliarInt;

                auxiliarFloat = alturas[i];
                alturas[i] = alturas [j];
                alturas[j] = auxiliarFloat;
            }
        }
    }

}
*/
void alumnosAprobados(eAlumno listado[], int tam)
{

    printf("\nEstos Alumnos aprobaron: \n");
    int i;
    for(i=0; i<tam; i++)
    {
        if(listado[i].nota > 6 && listado[i].nota < 11 )
        {
            mostrartUnAlumno(listado[i]);
        }

    }
}

void alumnosLlamadosJuan(eAlumno listado[], int tam)
{
    printf("\nEstos Alumnos se llaman Juan: \n");
    int i;
    for(i=0; i<tam; i++)
    {
        if(strcmp(listado[i].nombre, "Juan")==0)
        {
            mostrartUnAlumno(listado[i]);
        }
        else
        {
            printf("Ningun alumno del listado se llama Juan");
        }

    }
}

//ESPACIO PARA LOS NOMBRES QUE EMPIEZAN CON P
void nombresQueInicianConP(eAlumno listado[], int tam)
{
    int i;

    printf("\nEstos nombres empiezan con P: \n");

    for(i=0; i<tam; i++)
    {
        if(strcmp(listado[1].nombre, "P")==0)
        {
            mostrartUnAlumno(listado[i]);
        }
    }



}




//ESPACIO PARA LAS NOTAS MAS ALTAS


void modificarListadoDeAlumnos(eAlumno listado[], int tam)
{
    int legajo;
    int i;
    printf("Ingrese un legajo a buscar: ");
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

