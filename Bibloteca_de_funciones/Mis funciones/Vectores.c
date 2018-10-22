#include "Vectores.h"
#include <stdio.h>
#include <stdlib.h>


 void ordenamientoBurbujeo() //AYUDA
 {
    int vector[T] = {4,2,3,1,5,34,33,8,9,12};


    int i;
    int j;
    int auxiliar;

    //Ordenamiento del burbujeo
    for(i=0; i<T-1; i++)
    {
        for(j=i+1; j<T; j++)
        {
            if(vector[i]<vector[j])
            {
                auxiliar=vector[i];
                vector[i] = vector[j];
                vector[j] = auxiliar;
            }
        }
    }

    for(i=0; i<T; i++)
    {
        printf("%d\n", vector[i]);
    }

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

