#include <stdio.h>
#include <stdlib.h>

#define T 10
int main()
{
    int vector[T] = {4,2,3,1,5,34,33,8,9,12};


    int i;
    int j;
    int auxiliar;

    //Ordenamiento del burbujeo
    for(i=0; i<T-1; i++)
    {
        for(j=i+1; j<T; j++)
        {
            if(vector[i]<vector[j])
            {
                auxiliar=vector[i];
                vector[i] = vector[j];
                vector[j] = auxiliar;
            }
        }
    }

    for(i=0; i<T; i++)
    {
        printf("%d\n", vector[i]);
    }

    /*for(i=0; i<T; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &vector[i]);
    }
    printf("\nTodos los numeros: \n");
    for(i=0; i<T; i++)
    {
        printf("%d\n", vector[i]);
    }
    printf("\nTodos los numero Pares: \n");
    for(i=0; i<T; i++)
    {
        if(vector[i]%2==0)
        {
            printf("%d\n", vector[i]);
        }
    }*/
    return 0;
}
