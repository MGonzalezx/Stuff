#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include "BibliotecaPruebaRepaso.h"
#define T 3
#define Motivos


static int ultimoID()
{
    static int id = 0;
    id++;
    return id;
}
int buscarLibre(eAsociado listado[], int cantidad)
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


int cargarUnAsociado(eAsociado listado[], int cantidad)
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
}



void menuDeOpciones()
{

    eAsociado listadoMain[A];
    int i;
    for(i=0; i<T; i++)
    {
        listadoMain[i].isEmpty = 1;
        listadoMain[i].isActive = 1;
    }

    int opcion;
    do
    {
        printf("1. Alta Asociado");
        printf("\n2. Modificar Nombre y Apellido del asociado");
        printf("\n3. Dar de baja a un asociado");
        printf("\n4. Nueva llamada");
        printf("\n5. ");
        printf("\n6. ");
        printf("\n7. ");
        printf("\nIngrese una opcion: \n");
        scanf("%d", &opcion);
        switch(opcion)
        {
        case 1:
            cargarUnAsociado(listadoMain, A);
            break;
        case 2:
            modificarUnAsociado(listadoMain, A);
            break;
        case 3:
            darDeBajaAsociado(listadoMain, A);
            break;
        case 4:

            break;
        case 5:

            break;
        case 6:

            break;
        case 7:

            break;

        }

    }
    while(opcion !=7);

}



void modificarUnAsociado(eAsociado listado[], int tam)
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


            printf("\nID encontrado. ¨Seguro desea dar de baja? s=si n=no\n ");
            opcion=getche();
            if(opcion=='s')
            {
                listado[i].id=0;
                printf("\n­­Registro eliminado!!\n");
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
}

