#include <stdio.h>
#include <stdlib.h>
#include "Cliente.h"
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
    int retorno = -1;
    if(pFile != NULL && pArrayListEmployee != NULL)
    {
        retorno = 0;
        char id[500], nombre[128], sexo[500],numeroTelefono[500], importe[500];
        fscanf(pFile, "%[^,],%[^,],%[^,],%[^,],%[^\n]\n", id, nombre, sexo, numeroTelefono, importe);
        do
        {
            fscanf(pFile, "%[^,],%[^,],%[^,],%[^,],%[^\n]\n", id, nombre, sexo, numeroTelefono, importe);
            Employee* e = employee_newParametros(id, nombre, sexo, numeroTelefono, importe);
            ll_add(pArrayListEmployee, e);
            //cargarMaximoId(atoi(id));

        }
        while(!feof(pFile));
        getchar();
    }
    return retorno;
}
