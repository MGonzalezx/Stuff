#include <stdio.h>
#include <stdlib.h>
#include "Biblioteca.h"

int main()
{/*
    int x = 10;
    x=incrementarValor(x);
    printf("x=%d", x);
    */





    int edad;
    int nota;
    int legajo;


    edad=pedirEntero("Ingrese edad: ");
    printf("Edad: %d\n", edad);
    nota=pedirEntero("Ingrese Nota: ");
    printf("Nota: %d\n", nota);
    legajo=pedirEntero("Ingrese legajo: ");
    printf("Legajo: %d\n", legajo);

    return 0;
}
