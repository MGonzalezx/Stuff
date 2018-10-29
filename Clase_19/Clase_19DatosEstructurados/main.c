#include <stdio.h>
#include <stdlib.h>
#include "Persona.h"
int main()
{
    char name[500], lastName[500], id[500],isEmpty[500];
    int cont=1;

    FILE * pFile;

    pFile = fopen ("MOCK_DATA.csv", "r");

    while(!feof(pFile))
    {

        if(cont %250 == 0)
        {
            system("pause");
        }
        cont++;



        fscanf(pFile, "%[^,],%[^,],%[^,],%[^\n]\n", id, name, lastName,isEmpty);

        printf("%s - %s, %s - %s\n", id, name, lastName, isEmpty);

    }

    fclose(pFile);

    return 0;
}
