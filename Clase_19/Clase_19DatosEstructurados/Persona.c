#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Persona.h"


ePersona* nuevaPersona(int id, char* nombre, char* apellido)
{
    ePersona * personita;
    personita = otraPersona();
    if(personita != NULL)
    {
        personita ->id = id;
        strcpy(personita ->nombre, nombre);
        strcpy(personita ->apellido, apellido);
    }
    return personita;
}

ePersona* otraPersona()
{
    ePersona* miPersona;
    miPersona = (ePersona*)malloc(sizeof(ePersona));
    return miPersona;
}
