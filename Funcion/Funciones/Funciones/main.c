#include <stdio.h>
#include <stdlib.h>

// 1.Declarar la funcion//prototipo//firma
// 2.Llamada a la funcion
// 3.Desarrolo de la funcion

//queDevuelve comoSeLlama (queRecibe)



int main()
{
    int numeroUno;
    int numeroDos;
    int suma;

    printf("Ingrese primer numero: ");
    scanf("%d", &numeroUno);

    printf("Ingrese segundo numero: ");
    scanf("%d", &numeroDos);

    suma = numeroUno + numeroDos;

    printf("La suma es: %d\n",suma);


    return 0;
}
