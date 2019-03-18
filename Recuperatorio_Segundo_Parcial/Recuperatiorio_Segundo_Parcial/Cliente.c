#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "LinkedList.h"
#include "Controller.h"
#include "Cliente.h"

int employee_setNumeroTelefono(Employee* this,char* numeroTelefono)
{
    int retorno = -1;
    if(this != NULL && numeroTelefono !=NULL)
    {
        strcpy(this->numeroTelefono,numeroTelefono);
        retorno = 0;
    }
    return retorno;
}
int employee_getNumeroTelefono(Employee* this,char* numeroTelefono)
{
    int retorno = -1;
    if(this != NULL && numeroTelefono !=NULL)
    {
        strcpy(numeroTelefono,this->numeroTelefono);
        retorno = 0;
    }
    return retorno;
}

int tipo_Abono(LinkedList* listaEmpleados)
{
    Employee* miEmpleado = NULL;
    int retorno = -1;
    int index;
    int contador = 0;
    if(listaEmpleados != NULL)
    {
        for(index = 0; index <ll_len(listaEmpleados); index++)
        {
               if(strcmp(miEmpleado[index]->id, miEmpleado->id )== 0)
               {
                   contador ++;
               retorno = contador;
               }

        }
        return retorno;
    }
}

Employee* employee_new()
{
    Employee* miEmpleado;
    miEmpleado = (Employee*)malloc(sizeof(Employee));
    return miEmpleado;
}

Employee* employee_newParametros(char* idStr,char* nombreStr,char* sexoStr, char*numeroTelefonoStr, char* importeStr)
{
    Employee* empleado;
    empleado = employee_new();
    if(idStr != NULL && nombreStr != NULL && sexoStr != NULL && numeroTelefonoStr != NULL && importeStr != NULL)
    {
        if(empleado != NULL)
        {
            empleado ->id = atoi(idStr);
            strcpy(empleado ->nombre, nombreStr);
            strcpy(empleado ->sexo, sexoStr);
            strcpy(empleado ->numeroTelefono, numeroTelefonoStr);
            empleado ->importe = atoi(importeStr);
        }
    }
    return empleado;
}
