#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Persona.h"

ePersona* nuevaPersona()
{
    ePersona* miPersona;
    miPersona = (ePersona*)malloc(sizeof(ePersona));
    if(miPersona != NULL)
    {
        miPersona->id = 0;
        strcpy(miPersona->nombre = " ");
        miPersona->edad =0;
    }
    return miPersona;
}

ePersona* nuevaPersonaParametros(int id, char* nombre, int edad)
{
    ePersona* personita;
    personita = nuevaPersona();
    if(personita != NULL)
    {
        personita-> id=id;
        personita-> edad=edad;
        strcpy(personita-> nombre, nombre);
    }
    return personita;
}
void mostrarPersona(ePersona* unaPersona)
{
    printf("%d--%s--%d\n", unaPersona->id, unaPersona->nombre, unaPersona->edad);
}
