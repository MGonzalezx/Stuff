#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Persona.h"


int main()
{
    char name[500], lastName[500], id[500],isEmpty[500];
    int cont=0;
    ePersona lista[10];

    FILE * pFile;

    pFile = fopen ("MOCK_DATA.csv", "r");

    fscanf(pFile, "%[^,],%[^,],%[^,],%[^\n]\n", id, name, lastName,isEmpty);

    while(cont <10)
    {




        fscanf(pFile, "%[^,],%[^,],%[^,],%[^\n]\n", id, name, lastName,isEmpty);

        ePersona* e = nuevaPersona(atoi(id), name, lastName);


        lista[cont] = *e;
        //printf("%s - %s, %s - %s\n", id, name, lastName, isEmpty)
        cont++;

    }

    fclose(pFile);

    int i;

    for(i=0; i<10; i++)
    {
        printf("%d--%s--%s\n", lista[i].id, lista[i].nombre, lista[i].apellido);
    }

    return 0;
}
