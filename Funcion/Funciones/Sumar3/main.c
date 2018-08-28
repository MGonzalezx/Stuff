#include <stdio.h>
#include <stdlib.h>

//Retorno es 1 y recibe es 0

int sumar3();

int main()
{
    int suma;

    suma = sumar3();
    printf("La suma es: %d", suma);

    return 0;
}

int sumar3()
{
    int numeroUno;
    int numeroDos;
    int suma;

    printf("Ingrese primer numero: ");
    scanf("%d", &numeroUno);

    printf("Ingrese segundo numero: ");
    scanf("%d", &numeroDos);

    suma = numeroUno + numeroDos;

    return suma;

}
