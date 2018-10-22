#include <stdio.h>
#include <stdlib.h>
typedef struct
{

    int a;
    char b;
    int entero;

} eDato;



eDato* funcion (int, char );


int main()
{
    /*eDato* p;

    p=funcion(1, 'a');
    printf("%d--%c\n", p->a,p->b);

    eDato* q;

    q=funcion(2, 'c');
    printf("%d--%c", q->a,q->b);*/
//--------------------------------------------------------------------------------------------------------------------
    //GMD. GESTION DINAMICA DE MEMORIA
    int* pEntero;
    int i;
    int* pAuxiliar;

    pEntero = (int*) malloc(sizeof(int)*5); //En forma de Array. Es una variable que esta en la pila que apunta
    //a un vector que esta en el git
    if(pEntero != NULL)
    {
        for(i=0; i<5; i++)
        {
            printf("Ingrese valor :");
            scanf("%d",pEntero+i);
        }


        for(i=0; i<5; i++)
        {
            printf("%d\n", *(pEntero+i));
        }
    }

    printf("\nREALLOC: \n");
    pAuxiliar = realloc(pEntero, sizeof(int)*10);
    if(pAuxiliar != NULL)
    {
        pEntero = pAuxiliar;

        for(i=0; i<10; i++)
        {

            printf("%d\n",*(pEntero+i));
        }
    }



    /*if(pEntero != NULL)
    {
        *pEntero = 9;

        printf("%d", *pEntero);
    }
    */


//--------------------------------------------------------------------------------------------------------------------
    /*eDato datito[2]= {{1,'c'},{1, 'b'}};

    eDato* pDato;

    pDato = datito;

    int i;
    for(i=0; i<2; i++)
    {
       printf("%d-", (pDato+i)-> a); //Muestro el int
       printf("%c-", (pDato+i)-> b); //Muestro el char*/

    /*printf("%d-", (*(pDato+i)).a); Muestro el int
    printf("%c-", (*(pDato+i)).b); Muestro el char*/


    /*eDato datito = {9, 'c'};

    eDato* pDato;

    pDato = &datito;

    int x;
    x = (*pDato).a; //Priorizar el acceso a la estructura

    printf("%d", x);*/
//--------------------------------------------------------------------------------------------------------------------
    return 0;

}
eDato* funcion (int x, char y)
{
    eDato* pDato;
    eDato datito;
    pDato = &datito;
    pDato-> a = x;
    pDato-> b = y;

    return pDato;

}
