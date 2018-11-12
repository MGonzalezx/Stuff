#include <stdio.h>
#include <stdlib.h>

//void mostrar (void);
void mostrar (int);
void otroMostrar(int);
void manejador(void (*pFuncion)(int), int);
void hacerAlgo(int);


int main()
{
    /*manejador(hacerAlgo, 75);
    manejador(mostrar, 99);*/

    void (*array[2])(int);

    //Hardcodeo
    array[0] = mostrar;
    array[1] = otroMostrar;

    int i;
    for(i=0; i < 2; i++)
    {
        array[i](45);
    }
//-----------------------------------------------------------------------------
/*void (*pFuncion)(int);
    int (*otroPFuncion) (int);
    //pFuncion = &mostrar; Cualquiera de las dos
    pFuncion = mostrar;
    pFuncion(45);
    pFuncion = otroMostrar;
    pFuncion(95);*/
    return 0;
}
/*void mostrar(void)
{
    printf("Hola Mundo!");
}*/

void mostrar(int x)
{
    printf("Hola Mundo! %d\n", x);
}
void otroMostrar(int r)
{
    printf("CHAU! %d", r);
}

void manejador(void (*pFuncion)(int), int valor)
{
    printf("Estoy en el manejador\n");
    pFuncion(valor); //pasa el valor y ejecutarlo. maneja cualquier funcion.
}

void hacerAlgo(int t)
{
    printf("Hola estoy en hacer algo\n");
    t+=52;
    printf("Chau\n");
    FILE* miArchivo;
    miArchivo = fopen("prueba.txt", "w");
    fprintf(miArchivo, "Prueba con punteros a funciones %d", t);

    fclose(miArchivo);
}
