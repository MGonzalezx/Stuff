#include <stdio.h>
#include <stdlib.h>


void cargarArray (int*, int );
void mostrarArray(int*, int );
void ordenarArray (int*, int);





int main()
{


    int x [5];


    cargarArray(x, 5);


    mostrarArray(x, 5);

    ordenarArray(x, 5);


    /*char variable;
        char* pVariable; //leer la variable a travez del puntero
        printf("Ingrese caracter: ");
        scanf("%s", &variable);
        pVariable = &variable;

        printf("Variable: %i", *pVariable);*/
    return 0;
}


void cargarArray(int* vector, int tam)
{
    int i;
    for(i=0; i < tam; i++)
    {
        printf("Ingrese un valor: ");
        scanf("%d", vector+i);
    }
}
void mostrarArray(int* vector, int tam )
{
    int i;
    for (i=0; i<tam; i++)
    {
        printf("%d\n", vector[i]);
    }
}


void ordenarArray (int* vector, int tam)
{
    int i;
    int j;
    int auxiliar;

    //Ordenamiento del burbujeo
    for(i=0; i<tam-1; i++)
    {
        for(j=i+1; j<tam; j++)
        {
            if(vector[i]>vector[j]) //if(vector[i]<vector[j]) de abajo para arriba
            {
                auxiliar=vector[i];
                vector[i] = vector[j];
                vector[j] = auxiliar;
            }
        }
    }
printf("\nOrdenados: \n");
    for(i=0; i<tam; i++)
    {

        printf("%d\n", vector[i]);
    }
}
