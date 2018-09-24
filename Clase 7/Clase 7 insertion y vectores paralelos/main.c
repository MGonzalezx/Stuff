#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include "FuncionesAlumnos.h"
#include "MenoDeOpciones.h"

//void insertion(int data[],int len);



/* HACER FUNCION PARA ORDENAR ALFABETICAMENTE LOS NOMBRES, OTRO PARA MOSTRAR
ALUMNOS APROBADOS (NOTA>6), OTRA QUE MUESTRE LOS ALUMNOS LLAMADOS JUAN,
OTRA QUE MUESTRE LOS ALUMNOS CUYO NOMBRE COMIENZAN CON P
ALUMNO CON MAS NOTA (SABIANDO QUE PUEDE SER MAS QUE UNO)
INGRESAR UN LEGAJO Y PERMITIR LA MODIFICIACION DE LA NOTA
TRANSFORMAR LA CARGA DE DATOS EN UNA CARGA ALEATORIA*/


int main()
{

   menuDeOpciones();



    return 0;
}
    /*int vector[5]={3,5,1,2,6};
    int i;
    insertion(vector,5);
    for(i=0; i<5; i++)
    {
        printf("%d\n", vector[i]);
    }
    */













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
