#include <stdio.h>
#include <stdlib.h>

//Con retorno 0 y recibe 1

void sumar2 (int, int); //Pide dos numeros

int main()
{
    int numeroUno;
    int numeroDos;


    printf("Ingrese primer numero: ");
    scanf("%d", &numeroUno);

    printf("Ingrese segundo numero: ");
    scanf("%d", &numeroDos);
    sumar2(numeroUno, numeroDos); //Aca ponemos esos dos numeros //Parametros actuales, cambian
    return 0;
}

void sumar2 (int n1, int n2) //Nos pide dos numeros que sean int // Parametros formales, no cambian
{
    int suma;

    suma = n1 + n2;

    printf("La suma es: %d\n",suma);
}
