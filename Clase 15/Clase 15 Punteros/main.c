#include <stdio.h>
#include <stdlib.h>



int main()
{

    char variable;
    char* pVariable; //leer la variable a travez del puntero
    printf("Ingrese caracter: ");
    scanf("%s", &variable);
    pVariable = &variable;

    printf("Variable: %i", *pVariable);




    return 0;
}
