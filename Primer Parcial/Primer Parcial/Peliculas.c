#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include "utn.h"
#include "Peliculas.h"


static int ultimoID()
{
    static int id = 0;
    id++;
    return id;
}

int buscarLibrePelicula(ePelicula listado[],int cantidad)
{
    int index = -1;
    int i;
    if(cantidad > 0 && listado != NULL)
    {
        index = -2;
        for(i=0; i<cantidad; i++)
        {
            if(listado[i].estado == isEmpty)
            {
                index = i;
                break;
            }
        }
    }
    return index;
}

int cargarDatosPelicula(ePelicula listado[], int cantidad)
{


    int index = buscarLibrePelicula(listado, cantidad);

    getchar();
    if(index >=0)
    {
        char buffer[1024];

        ePelicula miPelicula;

        miPelicula.identificador = ultimoID();

        printf("\nID: %d", miPelicula.identificador);

        printf("\nIngrese Titulo: ");
        fflush(stdin);
        gets(buffer);
        while(strlen(buffer)>20)
        {
            printf("Reingrese Titulo: ");
            fflush(stdin);
            gets(buffer);
        }
        strcpy(miPelicula.titulo, buffer);

        printf("Ingrese Anio: ");
        scanf("%d", &miPelicula.anio);
        while(miPelicula.anio < 1900 || miPelicula.anio > 2018)
        {
            printf("Error! Ingresar anio entre 1900 y 2018: ");
            scanf("%d", &miPelicula.anio);
        }
        printf("Ingrese Nacionalidad: ");
        fflush(stdin);
        gets(buffer);
        while(strlen(buffer)>30 || !esSoloLetras(buffer))
        {
            printf("Reingrese Nacionalidad: ");
            fflush(stdin);
            gets(buffer);

        }
        strcpy(miPelicula.nacionalidad, buffer);

        printf("Ingrese ID del director: ");

        scanf("%d", &miPelicula.idDirector);


        while(miPelicula.idDirector < 1 || miPelicula.idDirector > 500)
        {
            printf("Reingrese ID del director entre un valor de 1 y 500: ");
            scanf("%d", &miPelicula.idDirector);
        }


        miPelicula.estado = isActive;
        listado[index]= miPelicula;

    }
    else
    {
        printf("\nERROR indice invalido u ocupado.\n");
    }
    return 1;

}
void mostrarUnaPelicula(ePelicula unaPelicula)
{
    printf("\n%-7d%-14s%-7d%10s%10d\n ", unaPelicula.identificador, unaPelicula.titulo,unaPelicula.anio,unaPelicula.nacionalidad,unaPelicula.idDirector);

}

int listadoPelicula(ePelicula listado[],int cantidad)
{
    int retorno = -1;
    int i;
    if(cantidad > 0 && listado != NULL)
    {
        retorno = 0;
        for(i=0; i<cantidad; i++)
        {
            if(listado[i].estado==isActive)
            {

                mostrarUnaPelicula(listado[i]);
            }
        }
    }
    return retorno;
}

int inicializarPelicula( ePelicula listado[],int cantidad)
{

    int retorno = -1;
    int i;
    if(cantidad > 0 && listado != NULL)
    {
        retorno = 0;
        for(i=0; i<cantidad; i++)
        {
            listado[i].estado = isEmpty;
            listado[i].identificador= 0;
        }
    }
    return retorno;
}

void modificarUnaPelicula(ePelicula listado[], int cantidad)
{
    char titulo[20];
    int anio;
    char nacionalidad[30];
    int idDirector;
    int identificador;
    char opcion;
    int i;
    int flag = 0;
    printf("Ingrese un ID de Pelicula a buscar: ");
    scanf("%d", &identificador);

    for(i=0; i<cantidad; i++)
    {
        printf("%d", listado[i].identificador);
        if(identificador == listado[i].identificador)
        {

            printf(".ID de la pelicula encontrado presione enter para continuar!!\n");



            opcion=getche();

            do
            {
                printf("\n¿Que cambios desea hacer?");
                printf("\na. Cambiar titulo");
                printf("\nb. Cambiar anio ");
                printf("\nc. Cambiar Nacionalidad");
                printf("\nd. Cambiar ID del director");
                printf("\nz. Ninguno, salir");
                printf("\nIngrese una opcion: \n");
                scanf("%s", &opcion);
                switch(opcion)
                {
                case 'a':
                    printf("\nIngrese el nuevo titulo: ");
                    scanf("%s", titulo);

                    printf("¿Esta seguro que desea modificar el titulo? s=si n=no\n ");
                    opcion=getche();
                    if(opcion=='s')
                    {
                        strcpy(listado[i].titulo, titulo);
                        printf("\nTitulo modificado!!\n");
                    }
                    else if(opcion=='n')
                    {
                        printf("El titulo no fue modificado!!\n");
                    }
                    break;
                case 'b':
                    printf("\nIngrese el nuevo anio: ");
                    scanf("%d", &anio);

                    printf("¿Esta seguro que desea modificar el anio? s=si n=no\n ");
                    opcion=getche();
                    if(opcion=='s')
                    {
                        listado[i].anio = anio ;
                        printf("\nAnio modificado\n");
                    }
                    else if(opcion=='n')
                    {
                        printf("El anio no fue modificado!!\n");
                    }
                    break;
                case 'c':
                    printf("\nIngrese la nueva nacionalidad: ");
                    scanf("%s", nacionalidad);

                    printf("¿Esta seguro que desea modificar la nacionalidad? s=si n=no\n ");
                    opcion=getche();
                    if(opcion=='s')
                    {
                        strcpy(listado[i].nacionalidad, nacionalidad);
                        printf("\nNacionalidad modificada!!\n");
                    }
                    else if(opcion=='n')
                    {
                        printf("La nacionalidad no fue modificada!!\n");
                    }
                    break;
                case 'd':
                    printf("\nIngrese el nuevo ID del director: ");
                    scanf("%d", &idDirector);

                    printf("¿Esta seguro que desea modificar el ID del director? s=si n=no\n ");
                    opcion=getche();
                    if(opcion=='s')
                    {
                        listado[i].idDirector = idDirector;
                        printf("\nID del director modificado!!\n");
                    }
                    else if(opcion=='n')
                    {
                        printf("El ID del director no fue modificado!!\n");
                    }
                    break;
                }
            }
            while(opcion !='z');

            flag=1;
            break;

        }
    }

    if(flag==0)
    {
        printf("ID inexistente, ustede sera devuelto al menu principal\n");
        getch();
    }
}


void darDeBajaPelicula(ePelicula listado[], int cantidad)
{
    int identificador;
    int flag=0;
    int i;
    char opcion;
    printf("Ingrese ID de pelicula a dar de baja: ");
    scanf("%d", &identificador);
    for(i=0; i<cantidad; i++)
    {
        if(identificador==listado[i].identificador)
        {


            printf("\nID de pelicula encontrada!!. ¨Seguro desea dar de baja? s=si n=no\n ");
            opcion=getche();
            if(opcion=='s')
            {
                listado[i].identificador=0;
                listado[i].estado=isEmpty;
                printf("\n­­Registro eliminado!!\n");
            }
            else if(opcion=='n')
            {
                printf("\nEl registro no fue eliminado!!\n");
            }
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("ID inexistente, usted sera devuelto al menu principal\n");
        getch();
    }
}
