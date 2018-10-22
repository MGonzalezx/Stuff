#include <stdio.h>
#include <stdlib.h>

void inicializarVector(int parametroVector[], int cantidad, int valorInicio );
void mostrarVector(int parametroVector[], int cantidad, int valorInicio);
int main()
{
    int miArrayDelMain[6];
    int valorInicio = -1 ;
    inicializarVector(miArrayDelMain,6, valorInicio);
    mostrarVector(miArrayDelMain,6, valorInicio);



    return 0;
}

void inicializarVector(int parametroVector[], int cantidad, int valorInicio)
{
    for(; cantidad >0; cantidad--)
    {
        parametroVector[cantidad]= valorInicio;
    }
}

void mostrarVector(int parametroVector[], int cantidad, int valorInicio)
{
    for(; cantidad >0; cantidad--)
    {
        printf("%d", parametroVector[cantidad]);
    }
}
