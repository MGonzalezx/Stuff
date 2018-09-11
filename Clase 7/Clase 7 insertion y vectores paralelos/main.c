#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
//void insertion(int data[],int len);



int main()
{
    int legajos[10];
    char nombres[10][21]; //10 filas, 21 caracteres.
    int notas[10];
    float alturas[10];



    /*int vector[5]={3,5,1,2,6};
    int i;
    insertion(vector,5);
    for(i=0; i<5; i++)
    {
        printf("%d\n", vector[i]);
    }
*/

    return 0;
}
/*void insertion(int data[],int len)
{
    int i,j;
    int temp; //temporal
    for(i=1; i<len; i++)
    {
        temp = data[i];
        j=i-1;
        while(j>=0 && temp<data[j])
        {
            data[j+1] = data [j];
            j--;
        }
        data[j+i]=temp; //inserciòn
    }
}
*/
