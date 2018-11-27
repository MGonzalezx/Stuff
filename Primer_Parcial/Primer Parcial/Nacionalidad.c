#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include "utn.h"
#include "Nacionalidad.h"



int inicializarNacionalidad(eNacionalidad listado[], int cantidad)
{
    int retorno = -1;
    int i;
    if(cantidad > 0 && listado != NULL)
    {
        retorno = 0;
        for(i=0; i<cantidad; i++)
        {
            listado[i].estado = isEmpty;
            listado[i].id= 0;
        }
    }
    return retorno;
}
int buscarLibreNacionalidad(eNacionalidad listado[],int cantidad)
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

