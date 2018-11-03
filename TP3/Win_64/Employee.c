#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "LinkedList.h"
#include "Controller.h"
#include "Employee.h"


Employee* employee_new()
{
    Employee* miEmpleado;
    miEmpleado = (Employee*)malloc(sizeof(Employee));
    return miEmpleado;
}

Employee* employee_newParametros(char* idStr,char* nombreStr,char* horasTrabajadasStr, char* sueldoStr)
{
    Employee* empleado;
    empleado = employee_new();
    if(empleado != NULL)
    {
        empleado ->id = idStr;
        strcpy(empleado ->nombre, nombreStr);
        empleado ->horasTrabajadas = horasTrabajadasStr;
        empleado ->sueldo = sueldoStr;
    }
    return empleado;
}

void employee_delete()
{

}
