
#include "Biblioteca.h"
#include <stdio.h>

//Pedir valores
int pedirEntero(char texto[])
{
    int numero;

    printf("%s", texto);
    scanf("%d", &numero);

    return numero;

}

int incrementarValor (int x)
{
    x++;
    return x;


}


