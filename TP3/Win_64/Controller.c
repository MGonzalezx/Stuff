#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "LinkedList.h"
#include "Employee.h"
#include "parser.h"
#include "utn.h"



/** \brief Carga los datos de los empleados desde el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_loadFromText(char* path, LinkedList* pArrayListEmployee)
{
    ultimoIdEmployee = 0;
    FILE* data;
    data = fopen (path, "r");
    if(data == NULL)
    {
        printf("No se pudo leer el archivo\n");

    }
    else
    {
        parser_EmployeeFromText(data,pArrayListEmployee);
        fclose(data);
        printf("|-----------------------------------------|\n"
               "   Su archivo a sido cargado exitosamente!\n"
               "|-----------------------------------------|\n\n");
    }
    return 1;
}

/** \brief Carga los datos de los empleados desde el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_loadFromBinary(char* path, LinkedList* pArrayListEmployee)
{

    return 1;
}

/** \brief Alta de empleados
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_addEmployee(LinkedList* pArrayListEmployee)
{
    if(pArrayListEmployee != NULL)
    {


        char buffer[1024];
        Employee* miEmpleado = employee_new();
        printf("\nIngrese Nombre: ");
        fflush(stdin);
        gets(buffer);
        while(strlen(buffer)>128 ||!esSoloLetras(buffer))
        {
            printf("Reingrese Nombre: ");
            fflush(stdin);
            gets(buffer);
        }
        strcpy(miEmpleado->nombre, buffer);

        printf("\nIngrese Horas trabajadas: ");
        scanf("%d", &miEmpleado->horasTrabajadas);

        while(miEmpleado->horasTrabajadas < 50 || miEmpleado->horasTrabajadas > 200)
        {
            printf("Error! Ingrese horas entre 50 y 200: ");
            scanf("%d", &miEmpleado->horasTrabajadas);
        }
        printf("\nIngrese sueldo: ");
        scanf("%d", &miEmpleado->sueldo);
        while(miEmpleado->sueldo < 8000 || miEmpleado->sueldo > 1000000)
        {
            printf("Error! Ingrese horas entre 8000 y 1000000: ");
            scanf("%d", &miEmpleado->sueldo);
        }
        miEmpleado->id = ultimoID();
        ll_add(pArrayListEmployee, miEmpleado);


    }
    return 1;
}

/** \brief Modificar datos de empleado
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_editEmployee(LinkedList* pArrayListEmployee, char* path)
{
    if(pArrayListEmployee != NULL)
    {
        int index;

        /// PEdir indice al usuario para editar

        Employee* employee = ll_get(pArrayListEmployee,index);
        employee_setNombre(employee, "pepe");

        FILE* pFile = fopen(path, "w");
        if(pFile != NULL)
        {
            int i=0;
            for( ; i < ll_len(pArrayListEmployee);i++)
            {
                Employee* employee = ll_get(pArrayListEmployee,i);
                fprintf(pFile,"%d,%s,%d,%d,",employee_getId(employee),employee_getNombre(employee),
                        employee_getHorasTrabajadas(employee),employee_getSueldo(employee));
            }

            fclose(pFile);

        }


        ///Sobreescribir tu archivo.




    }
    return 1;
}




/** \brief Baja de empleado
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_removeEmployee(LinkedList* pArrayListEmployee)
{
    return 1;
}

/** \brief Listar empleados
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_ListEmployee(LinkedList* pArrayListEmployee)
{
    if(pArrayListEmployee != NULL)
    {
        int i;

        for(i=0; i<ll_len(pArrayListEmployee); i++)
        {
            Employee* empleado = (Employee*)ll_get(pArrayListEmployee, i);
            printf("%d--%s--%d--%d\n", empleado->id, empleado->nombre, empleado->horasTrabajadas, empleado->sueldo);

        }
    }
    else
    {
        printf("Error al abrir el archivo\n");
    }

    return 1;
}

/** \brief Ordenar empleados
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_sortEmployee(LinkedList* pArrayListEmployee)
{


    return 1;
}

/** \brief Guarda los datos de los empleados en el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_saveAsText(char* path, LinkedList* pArrayListEmployee)
{
    return 1;
}

/** \brief Guarda los datos de los empleados en el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_saveAsBinary(char* path, LinkedList* pArrayListEmployee)
{
    return 1;
}


