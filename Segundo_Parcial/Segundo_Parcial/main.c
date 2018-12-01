#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Controller.h"
#include "Employee.h"

int main()
{
    int option = 0;
    int archivoCargado = 0;

    LinkedList* listaEmpleados = ll_newLinkedList();
    printf("                            ---------------------\n"
           "                              ***BIENVENIDO***\n"
           "                            ---------------------\n");
    do
    {
        printf("1. Cargar los datos de los empleados desde el archivo data.csv (modo texto).");
        printf("\n2. Listar empleados");
        printf("\n3. Ordenar empleados");
        printf("\n4. Lista con sueldo.");
        printf("\n5. Guardar los datos de los empleados en el archivo Sueldo.csv (modo texto).");
        printf("\n6. Salir");
        printf("\nIngrese una opcion: \n");
        scanf("%d", &option);

        switch(option)
        {
        case 1:
            if(archivoCargado == 0)
            {
                controller_loadFromText("data.csv",listaEmpleados);
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
                controller_ListEmployee(listaEmpleados);
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
                controller_sortEmployee(listaEmpleados);
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

                controller_filtrarHoras(listaEmpleados);
            }
            else
            {
                printf("|-----------------------------------------|\n"
                       "   Por favor, cargue un archivo primero!!\n"
                       "|-----------------------------------------|\n\n");
            }
            break;
        case 5:
            if(archivoCargado == 1)
            {

                controller_saveAsText("sueldos.csv", listaEmpleados);
            }
            else
            {
                printf("|-----------------------------------------|\n"
                       "   Por favor, cargue un archivo primero!!\n"
                       "|-----------------------------------------|\n\n");
            }
            break;
        case 6:
            printf("                         ---------------------------\n"
                   "                           ***TENGA UN BUEN DIA***\n"
                   "                         ---------------------------\n");
            break;

        default:
            printf("Opcion incorrecta, por favor elejir teclas del 1 al 6\n\n");

        }
    }
    while(option != 6);
    return 0;
}
