#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#define T 5

/** \brief busca espacio disponible
 *
 * \param int[] listado de enteros
 * \param int tamaño del listado
 * \param int el valor ilogico
 * \return int [-1] si no hay espacio, [>=0] un indice donde guardar
 *
 */
int buscarLibre(int[], int, int);

int main()
{
    //crear un vector de entertos
    int vector[T];
    char seguir;
    int indice;

    //inicializarlo a -1
    int i;
    for(i=0; i<T; i++)
    {
        vector[i]=-1;
    }
    //do-while pidiendo datos
    do
    {
        indice = buscarLibre(vector, T, -1);
        if(indice != -1)
        {
            printf("Ingrese un numero: ");
            scanf("%d", &vector[indice]);
        }
        else
        {
            printf("No hay mas lugar!");
            break;
        }

        printf("Desea ingresar otro? \n");
        seguir = getche();

        //BuscarDondeGuardo
        //Si encuentra donde guardar: pedir datos
        //preguntar si quiere guardar otro
        //Si no encuentra, informarlo

    }
    while(seguir=='s');
    return 0;
}

int buscarLibre(int numeros[], int tam, int ilogico)
{
    int indice = -1;
    int i;
    for(i=0; i<tam; i++)
    {
        if(numeros[i] == ilogico)
        {
            indice = i;
            break;
        }
    }

    return indice;
}
