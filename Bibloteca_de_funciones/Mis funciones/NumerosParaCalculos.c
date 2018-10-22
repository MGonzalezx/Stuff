#include <stdio.h>
#include <stdlib.h>
#include "NumerosParaCalculos.h"


void numeroMaximoYMinimo( char texto[], char texto1[], char texto2[])
{
    int numeroUno;
    int numeroDos;
    int numeroTres;
    int maximo;
    int minimo;


    printf("%s", texto);
    scanf("%d", &numeroUno);
    maximo=numeroUno;
    minimo=numeroUno;

    printf("%s", texto1);
    scanf("%d", &numeroDos);
    if(numeroDos<minimo)
    {
        minimo=numeroDos;
    }else{
        if(numeroDos>maximo)
            {
                maximo=numeroDos;
            }
        }
        printf("%s", texto2);
        scanf("%d", &numeroTres);
    if(numeroTres<minimo)
    {
        minimo=numeroTres;
    }else{
        if(numeroTres>maximo)
            {
                maximo=numeroTres;
            }
        }
    printf("El numero maximo es: %d\n", maximo);
    printf("El numero minimo es: %d\n", minimo);


}



float sumar(float primerNumero, float segundoNumero)
{
    float suma;
    suma = primerNumero + segundoNumero;
    return suma;
}

float multiplicaciones (float primerNumero, float segundoNumero)
{
    float multiplicacion;
    multiplicacion = primerNumero * segundoNumero;
    return multiplicacion;
}

float restar (float primerNumero, float segundoNumero)
{
    float resta;
    resta = primerNumero - segundoNumero;
    return resta;
}
float divisiones(float primerNumero, float segundoNumero)
{
    float division;
    division = primerNumero / segundoNumero;

    return division;
}

int calcularFactorial(int primerNumero)
{
    int resultadoPrimerNumero;

    if(primerNumero == 0)
    {
        resultadoPrimerNumero = 1;
    }else
    if(primerNumero < 0)
    {
        primerNumero = 0;
        resultadoPrimerNumero=primerNumero;
    }
    else
    {
        resultadoPrimerNumero = primerNumero * calcularFactorial(primerNumero-1);
    }
    return resultadoPrimerNumero;
}

int incrementarValor (int x)
{
    x++;
    return x;


}
