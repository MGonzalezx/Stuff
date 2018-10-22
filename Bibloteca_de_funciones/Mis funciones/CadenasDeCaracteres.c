#include "CadenasDeCaracteres.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void ingresarNombreYApellidoCapitalizado ()
{
    char nombre[20];
    char apellido[20];
    char apellidoYNombre[41]="";
    char buffer[1024];

//Sirve para funcion
    printf("Ingrese Nombre: ");
    fflush(stdin);
    gets(buffer);
    while(strlen(buffer)>19)
    {
        printf("Reingrese Nombre: ");
        fflush(stdin);
        gets(buffer);
    }

    strcpy(nombre, buffer);

    printf("Ingrese Apellido: ");
    fflush(stdin);
    gets(buffer);
    while(strlen(buffer)>19)
    {
        printf("Reingrese Apellido: ");
        fflush(stdin);
        gets(buffer);
    }

    strcpy(apellido, buffer);


    printf("\nNombre: %s\n", nombre);
    printf("\nApellido: %s\n", apellido);

    strlwr(nombre);
    strlwr(apellido);


    capitalizar(nombre);

    /*
     nombre[0] = toupper(nombre[0]);
     int i;
     for(i=1; i<strlen(nombre); i++)
     {
       if(nombre[i]==' ')
         {
             nombre[i+1] = toupper(nombre[i+1]);
             i++;
         }
     }*/


    capitalizar(apellido);

    /* apellido[0] = toupper(apellido[0]);
    int i;
    for(i=1; i<strlen(apellido); i++)
     {
         if(apellido[i]==' ')
         {
             apellido[i+1] = toupper(apellido[i+1]);
         }
     }*/


    //apellido[0] = toupper(apellido[0]);
    //nombre[0] = toupper(nombre[0]);
    strcat(apellido, ", ");
    strcat(apellido, nombre);
    strcat(apellidoYNombre, apellido);

    printf("\nApellido y Nombre: %s\n", apellidoYNombre);




}

void capitalizar(char variable[])
{
    variable[0] = toupper(variable[0]);
    int i;
    for(i=1; i<strlen(variable); i++)
    {
        if(variable[i]==' ')
        {
            variable[i+1] = toupper(variable[i+1]);
            i++;

        }
    }
}
