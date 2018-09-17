#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define T 2
//void insertion(int data[],int len);

void cargarAlumnos(int[], char[][21], int[], float[], int);
void mostrarAlumnos(int[], char[][21], int[], float[], int);
void ordenarPorNombre(int[], char[][21], int[], float[], int);

/* HACER FUNCION PARA ORDENAR ALFABETICAMENTE LOS NOMBRES, OTRO PARA MOSTRAR
ALUMNOS APROBADOS (NOTA>6), OTRA QUE MUESTRE LOS ALUMNOS LLAMADOS JUAN,
OTRA QUE MUESTRE LOS ALUMNOS CUYO NOMBRE COMIENZAN CON P
ALUMNO CON MAS NOTA (SABIANDO QUE PUEDE SER MAS QUE UNO)
EL MAS MEDIEOCRE LLEGAJO 100 NOTA 5 QUE SE LLAME PEPE Y MIDE 1.75
INGRESAR UN LEGAJO Y PERMITIR LA MODIFICIACION DE LA NOTA
TRANSFORMAR LA CARGA DE DATOS EN UNA CARGA ALEATORIA*/


int main()
{
    int legajos[T];
    char nombres[T][21]; //10 filas, 21 caracteres.
    int notas[T];
    float alturas[T];


    cargarAlumnos(legajos, nombres, notas, alturas, T);
    mostrarAlumnos(legajos, nombres, notas, alturas, T);
    ordenarPorNombre(legajos, nombres, notas, alturas, T);
    printf("\n");
    mostrarAlumnos(legajos, nombres, notas, alturas, T);




    /*int vector[5]={3,5,1,2,6};
    int i;
    insertion(vector,5);
    for(i=0; i<5; i++)
    {
        printf("%d\n", vector[i]);
    }
    */

    return 0;
}

void cargarAlumnos(int legajos[], char nombres[][21], int notas[], float alturas[], int tam)
{
    int i;

    for(i=0; i<tam; i++)
    {
        printf("Ingrese legajo: ");
        scanf("%d", &legajos[i]);
        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(nombres[i]);
        printf("Ingrese nota: ");
        scanf("%d", &notas[i]);
        printf("Ingrese altura: ");
        scanf("%f", &alturas[i]);

    }


    }
void mostrarAlumnos(int legajos[], char nombres[][21], int notas[], float alturas[], int tam)
{
    int i;
     printf("%4s %20s %2s %5s\n","Legajo","Nombre","Nota","Altura");
    for(i=0; i<tam; i++)
    {
        printf("%4d %20s %2d %5f\n", legajos[i], nombres[i], notas[i], alturas[i] );

    }
}

void ordenarPorNombre(int legajos[], char nombres[][21], int notas[], float alturas[], int tam)
{
    int auxiliarInt;
    float auxiliarFloat;
    char auxiliarString[100];

    int i;
    int j;

    for(i=0; i<tam-1; i++)
    {
        for(j=i+1; j<tam; j++)
        {
            if(strcmp(nombres[i], nombres[j])>0)
            {
                strcpy(auxiliarString, nombres[i]);
                strcpy(nombres[i], nombres[j]);
                strcpy(nombres[j], auxiliarString);

                auxiliarInt = legajos[i];
                legajos[i] = legajos [j];
                legajos[j] = auxiliarInt;

                auxiliarInt = notas[i];
                notas[i] = notas [j];
                notas[j] = notas;

                auxiliarFloat = alturas[i];
                alturas[i] = alturas [j];
                alturas[j] = auxiliarFloat;
            }
        }
    }

}










/*void insertion(int data[],int len)
{
    int i,j;
    int temp; //temporal
    for(i=1; i<len; i++)
    {
        temp = data[i];
        j=i-1;
        while(j>=0 && temp<data[j])
        {
            data[j+1] = data [j];
            j--;
        }
        data[j+i]=temp; //inserciòn
    }
}
*/
