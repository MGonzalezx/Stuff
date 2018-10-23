#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Persona.h"


int main()
{
    ePersona* personita;
    personita =nuevaPersona();
    ePersona* otraPersonita;
    otraPersonita = nuevaPersonaParametros(45, "Maria", 49);
    mostrarPersona(otraPersonita);
    mostrarPersona(personita);





return 0;
}





