#include <stdio.h>
#include <stdlib.h>
// Con retorno 0 y recibe 0
void sumar1(void);

int main()
{
    sumar1();
    return 0;
}
void sumar1(void)
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
}
