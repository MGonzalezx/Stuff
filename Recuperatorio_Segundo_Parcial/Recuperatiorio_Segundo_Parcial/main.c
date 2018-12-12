#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Controller.h"
#include "Cliente.h"
#define PERSONAL 0
#define FAMILIAR 1
#define CORPORATIVO 2

int main()
{

    int option = 0;
    int archivoCargado = 0;

    LinkedList* listaEmpleado = ll_newLinkedList();
    LinkedList* listaAbono = ll_newLinkedList();
    printf("                            ---------------------\n"
           "                              ***BIENVENIDO***\n"
           "                            ---------------------\n");
    do
    {
        printf("1. Cargar los datos de los empleados desde el archivo data.csv (modo texto).");
        printf("\n2. ALTAS.");
        printf("\n3. Lista con sueldo.");
        printf("\n4. Guardar los datos de los empleados en el archivo Sueldo.csv (modo texto).");
        printf("\n5. Salir");
        printf("\nIngrese una opcion: \n");
        scanf("%d", &option);

        switch(option)
        {
        case 1:
            if(archivoCargado == 0)
            {
                controller_loadFromText("clientes.csv",listaEmpleado);
                archivoCargado = 1;
            }
            else
            {
                printf("|-----------------------------------------|\n"
                       "     Usted ya a cargado el archivo!!\n"
                       "|-----------------------------------------|\n\n");
            }
            break;
        case 2:
            if(archivoCargado == 1)
            {
                controller_ListEmployee(listaEmpleado);
            }
            else
            {
                printf("|-----------------------------------------|\n"
                       "   Por favor, cargue un archivo primero!!\n"
                       "|-----------------------------------------|\n\n");
            }

            break;
        case 3:
            if(archivoCargado == 1)
            {


            }
            else
            {
                printf("|-----------------------------------------|\n"
                       "   Por favor, cargue un archivo primero!!\n"
                       "|-----------------------------------------|\n\n");
            }
            break;
        case 4:
            if(archivoCargado == 1)
            {


            }
            else
            {
                printf("|-----------------------------------------|\n"
                       "   Por favor, cargue un archivo primero!!\n"
                       "|-----------------------------------------|\n\n");
            }
            break;
        case 5:
            printf("                         ---------------------------\n"
                   "                           ***TENGA UN BUEN DIA***\n"
                   "                         ---------------------------\n");
            break;

        default:
            printf("Opcion incorrecta, por favor elejir teclas del 1 al 5\n\n");

        }
    }
    while(option != 5);
    return 0;
}
