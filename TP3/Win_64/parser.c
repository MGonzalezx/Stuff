#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Employee.h"
#include "Controller.h"


/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int parser_EmployeeFromText(FILE* pFile, LinkedList* pArrayListEmployee)
{
    char id[500], nombre[128], horasTrabajadas[500],sueldo[500];

    int cont=0;

    fscanf(pFile, "%[^,],%[^,],%[^,],%[^\n]\n", id, nombre, horasTrabajadas,sueldo);

    while(cont < 10)
    {

        fscanf(pFile, "%[^,],%[^,],%[^,],%[^\n]\n", id, nombre, horasTrabajadas,sueldo);
    //printf("%d %s %d %d", atoi(id), nombre, atoi(horasTrabajadas), atoi(sueldo));
        Employee* e = employee_new(atoi(id), nombre, atoi(horasTrabajadas), atoi(sueldo));

        ll_add(pArrayListEmployee, e);

        printf("%s",e->nombre);
        cont++;

    }



    return 1;
}

/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int parser_EmployeeFromBinary(FILE* pFile, LinkedList* pArrayListEmployee)
{

    return 1;
}
