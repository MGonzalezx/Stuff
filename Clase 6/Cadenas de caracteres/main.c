#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 //strlen. strcpy, strcmp/stricmp
int main()
{
    char cadena1[5];
    char cadena2[100]="Hola como estas?";

 // La cadena origen tiene màs caracteres que la cadena1 entonces solo elejimos que pase 4 caracteres
 // Como resultado va a aparecer "Hola"
    strncpy(cadena1,cadena2,4);

    puts(cadena1);

    //printf("%d", estado);

    return 0;
}
/*char cadena[20];

   printf("Ingrese texto: ");
   fflush(stdin);
   // no sirve en este caso scanf("%s", &cadena);
   gets(cadena);
   //fgets(cadena,20,stdin);
   printf("%s", cadena);

   //Me muestra la cantidad de caracteres que hay en la palabra
    char cadena[20]="perro";
    int cantidad;
    cantidad=strlen(cadena);

    printf("%d", cantidad);

// Le damos valores a las variables de forma diferente
char cadena[20];
    char cadena2[50]="gato";
    int cantidad;

    strcpy(cadena, cadena2);
    //strcpy(cadena, "perro");


    printf("%s", cadena);


    Toma el valor ascii y los resta, en este caso la letra "g" es mayor a la "a" y
 el resultado aun es positivo, por eso da 1. Si son iguales da 0 y si la resta da negativo da -1
    char cadena[20];
    char cadena2[50]="gato";
    int estado;

    estado=strcmp(cadena2, "armadillo");

    printf("%d", estado);

    har cadena[20];
    char cadena2[50]="mgato";
    int estado;

    strupr(cadena2);
    //strlwr(cadena2) para pasar de mayus a minus

    puts(cadena2);



    char cadena[20]="Perro";
    char cadena2[50]="mgato";
    int estado;

    strcat(cadena2,cadena);

    puts(cadena2);



























   */
