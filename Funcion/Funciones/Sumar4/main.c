#include <stdio.h>
#include <stdlib.h>

//Retorno 1 y recibe 1

int sumar4(int, int);

int main()
{
    int numeroUno;
    int numeroDos;
    int suma;

    printf("Ingrese primer numero: ");
    scanf("%d", &numeroUno);

    printf("Ingrese segundo numero: ");
    scanf("%d", &numeroDos);

    suma = sumar4(numeroUno, numeroDos)

    printf("La suma es: %d\n",suma);

    return 0;
}
int sumar4(int numeroUno, int numeroDos)
{
    int suma;
    suma = numeroUno + numeroDos;
    return suma;
}
