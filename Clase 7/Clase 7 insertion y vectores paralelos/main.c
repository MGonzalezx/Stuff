#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define T 2
//void insertion(int data[],int len);

void cargarAlumnos(int[], char[][21], int[], float[], int);
void mostrarAlumnos(int[], char[][21], int[], float[], int);

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

void cargarAlumnos(int legajos[], char nombres[][21], int notas[], float alturas[], int [T])
{
    int i;
    for(i=0; i<T; i++)
    {
        printf("Ingrese legajo: ");
        scanf("%d", &legajos[i]);
        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(nombres[i]);
        printf("Ingrese notas: ");
        scanf("%d", &notas[i]);
        printf("Ingrese alturas: ");
        scanf("%f", &alturas[i]);
    }
}
void mostrarAlumnos(int legajos[], char nombres[][21], int notas[], float alturas[], int [T])
{   int i;
    printf("Legajo   Nombre   Nota   Altura\n");
    for(i=0; i<T; i++)
    {
        printf("%4d  %7s  %5d  %11f\n", legajos[i], nombres[i], notas[i], alturas[i]);
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
