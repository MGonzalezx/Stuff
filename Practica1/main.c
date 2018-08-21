#include <stdio.h>
#include <stdlib.h>

int main()
{
    int unNumero;
    int otroNumero;
    float division;

    printf("Ingrese un numero entero: ");
    scanf("%d", &unNumero);
    printf("Ingrese otro numero entero: ");
    scanf("%d", &otroNumero);

    division = (float)unNumero/otroNumero;

    printf("El resultado es: %f", division);

    /* int unNumero;
    float unFlotante;
    float suma;
    char unChar;


    printf("Ingrese un numero entero: ");
    scanf("%d", &unNumero);

    printf("Ingrese un numero flotante: ");
    scanf("%f", &unFlotante);

    printf("Ingrese un caracter: ");
    fflush(stdin);
    scanf("%c", &unChar);

    suma = unNumero + unFlotante;

    printf("El numero flotante es: %.2f\n", unFlotante);
    printf("El caracter es: %c\n", unChar);
    printf("El numero entero es: %d\n", unNumero);
    printf("La suma es: %.2f", suma);
    */

    return 0;
}
