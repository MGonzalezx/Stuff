#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <conio.h>
#include "ArrayEmployees.h"
#include "utn.h"
#define CANTIDADEMPLEADOS 1000
#define FALSE 0
#define TRUE 1

int main()
{

    char opcion2;
    int option;
    Employee listadoMainEmpleados[CANTIDADEMPLEADOS];
    initEmployees(listadoMainEmpleados, CANTIDADEMPLEADOS);
    int datosCargados = 0;

    printf("                            ---------------------\n"
           "                              ***BIENVENIDO***\n"
           "                            ---------------------\n");
    do
    {
        printf("1. ALTAS");
        printf("\n2. MODIFICAR");
        printf("\n3. BAJAS.");
        printf("\n4. INFORMAR");
        printf("\n5. Salir");
        printf("\nIngrese una opcion: \n");
        scanf("%d", &option);



        switch(option)
        {
        case 1:
            if(datosCargados >= 0)
            {
                cargar_Employee(listadoMainEmpleados, CANTIDADEMPLEADOS);
                datosCargados = 1;
            }
            break;
        case 2:
            if(datosCargados == 1)
            {
                modificar_Employee(listadoMainEmpleados, CANTIDADEMPLEADOS);
            }
            else
            {
                printf("|-----------------------------------------|\n"
                       "   Por favor, cargue un dato primero!!\n"
                       "|-----------------------------------------|\n\n");
            }
            break;
        case 3:
            if(datosCargados == 1)
            {
                removeEmployee(listadoMainEmpleados, CANTIDADEMPLEADOS);
            }
            else
            {
                printf("|-----------------------------------------|\n"
                       "   Por favor, cargue un dato primero!!\n"
                       "|-----------------------------------------|\n\n");
            }
            break;
        case 4:
            if(datosCargados == 1)
            {

                do
                {
                    printf("\na. Listado de los empleados ordenados alfabeticamente por Apellido.");
                    printf("\nb. Listado de los empleados ordenados Sector.");
                    printf("\nc. Total y promedio de los salarios, y"
                           "cuantos empleados superan el salario promedio.");
                    printf("\nd. Nada, salir.");
                    printf("\nIngrese una opcion: \n");

                    fflush(stdin);
                    scanf("%c", &opcion2);

                    switch(opcion2)
                    {
                    case 'a':
                        sortEmployeesByLastName(listadoMainEmpleados, CANTIDADEMPLEADOS, 0);
                        break;
                    case 'b':
                        sortEmployeesBySector(listadoMainEmpleados, CANTIDADEMPLEADOS, 0);
                        break;
                    case 'c':
                            printf("La suma total de todos los salarios es: \n");
                            printf("%f\n",sumar_Salarios(listadoMainEmpleados, CANTIDADEMPLEADOS));
                            printf("El promedio de los salarios es: \n");
                            printf("%f\n", promedio_Salarios(listadoMainEmpleados, CANTIDADEMPLEADOS));
                            printf("La cantidad de empleados que superan el sueldo promedio es: \n");
                            printf("%d\n", cantidad_Salarios_Superando_Promedio(listadoMainEmpleados, CANTIDADEMPLEADOS));


                        break;
                    case 'd':

                        break;

                    default:
                        printf("Opcion incorrecta!!");
                        break;
                    }


                }
                while(opcion2 !='d');
            }
            else
            {
                printf("|-----------------------------------------|\n"
                       "   Por favor, cargue un dato primero!!\n"
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
