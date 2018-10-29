#include <stdio.h>
#include <stdlib.h>
#define T 10




int main()
{
    //ESCRIBO EL ARCHIVO
    /*int vector[T]= {1,2,3,4,5,6,7,8,9,10};
    FILE* pArchivo;
    pArchivo = fopen("Binario.bin", "wb");
    int y = fwrite(&vector, sizeof(vector), 10, pArchivo);
    fclose(pArchivo);
    printf("%d", y);*/

    //LEO EL ARCHIVO
    int vector[T]= {1,2,3,4,5,6,7,8,9,10};
    FILE*pArchivo;
    char texto [50];
    int i = 0;
    pArchivo = fopen("Binario.bin", "rb");
    fread(&texto, sizeof(vector), 10, pArchivo);
    fclose(pArchivo);
    for(i=0; i<10; i++)
    {
        printf("%d", vector[i]);

    }

    return 0;
}
