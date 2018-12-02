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

Employee* employee_newParametros(char* idStr,char* nombreStr,char* direccionStr, char*horasTrabajadasStr, char* sueldo)
{
    Employee* empleado;
    empleado = employee_new();
    if(idStr != NULL && nombreStr != NULL && horasTrabajadasStr != NULL && direccionStr != NULL)
    {
        if(empleado != NULL)
        {
            empleado ->id = atoi(idStr);
            strcpy(empleado ->nombre, nombreStr);
            empleado ->horasTrabajadas = atoi(horasTrabajadasStr);
            strcpy(empleado ->direccion, direccionStr);
            empleado ->sueldo = atoi(sueldo);
        }
    }
    return empleado;
}

void employee_delete(Employee* this)
{

    if(this != NULL)
    {
        free(this);
    }
}

int employee_setId(Employee* this,int id)
{
    int retorno = -1;
    if(this != NULL && id >= 0)
    {
        this->id = id;
        retorno = 0;
    }
    return retorno;
}
int employee_getId(Employee* this,int* id)
{
    int retorno = -1;
    if(this != NULL && id !=NULL)
    {
        retorno = 0;
        *id = this->id;
    }
    return retorno;
}

int employee_setNombre(Employee* this,char* nombre)
{
    int retorno = -1;
    if(this != NULL && nombre !=NULL)
    {
        strcpy(this->nombre,nombre);
        retorno = 0;
    }
    return retorno;
}
int employee_getNombre(Employee* this,char* nombre)
{
    int retorno = -1;
    if(this != NULL && nombre !=NULL)
    {
        strcpy(nombre,this->nombre);
        retorno = 0;
    }
    return retorno;
}

int employee_setDireccion(Employee* this,char* direccion)
{
    int retorno = -1;
    if(this != NULL && direccion !=NULL)
    {
        strcpy(this->direccion,direccion);
        retorno = 0;
    }
    return retorno;
}
int employee_getDireccion(Employee* this,char* direccion)
{
    int retorno = -1;
    if(this != NULL && direccion !=NULL)
    {
        strcpy(direccion,this->direccion);
        retorno = 0;
    }
    return retorno;
}

int employee_setHorasTrabajadas(Employee* this,int horasTrabajadas)
{
    int retorno = -1;
    if(this != NULL && horasTrabajadas >= 0)
    {
        this->horasTrabajadas = horasTrabajadas;
        retorno = 0;
    }
    return retorno;

}
int employee_getHorasTrabajadas(Employee* this,int* horasTrabajadas)
{
    int retorno = -1;
    if(this != NULL && horasTrabajadas !=NULL)
    {
        retorno = 0;
        *horasTrabajadas = this->horasTrabajadas;
    }
    return retorno;
}

int employee_setSueldo(Employee* this,int sueldo)
{
    int retorno = -1;
    if(this != NULL && sueldo >= 0)
    {
        this->sueldo = sueldo;
        retorno = 0;
    }
    return retorno;
}
int employee_getSueldo(Employee* this,int* sueldo)
{
    int retorno = -1;
    if(this != NULL && sueldo !=NULL)
    {
        retorno = 0;
        *sueldo = this->sueldo;
    }
    return retorno;

}

int ultimoID()
{
    ultimoIdEmployee++;
    return ultimoIdEmployee;
}

void cargarMaximoId(int id)
{
    if(ultimoIdEmployee < id)
    {
        ultimoIdEmployee = id;
    }
}

///VISTO EN CLASE Y CLASES DE APOYO
int comparar_ID(void* primerID, void* segundoID)
{
    int retornar;
    if(primerID != NULL && segundoID != NULL)
    {

        Employee* employee = (Employee*)primerID;
        Employee* employeeDos = (Employee*)segundoID;
        if(employee-> id > employeeDos-> id)
        {
            retornar = 1;
        }
        else if(employee-> id < employeeDos-> id)
        {
            retornar = -1;
        }
        else
        {
            retornar = 0;
        }

    }
    return retornar;
}

int comparar_Sueldo(void* primerSueldo, void* segundoSueldo)
{
    int retornar;
    if(primerSueldo != NULL && segundoSueldo != NULL)
    {

        Employee* employee = (Employee*)primerSueldo;
        Employee* employeeDos = (Employee*)segundoSueldo;
        if(employee-> sueldo > employeeDos-> sueldo)
        {
            retornar = 1;
        }
        else if(employee-> sueldo < employeeDos-> sueldo)
        {
            retornar = -1;
        }
        else
        {
            retornar = 0;
        }

    }
    return retornar;

}

int comparar_HorasTrabajadas(void* primerasHorasTrabajadas, void* segundasHorasTrabajadas)
{
    int retornar;
    if(primerasHorasTrabajadas != NULL && segundasHorasTrabajadas != NULL)
    {

        Employee* employee = (Employee*)primerasHorasTrabajadas;
        Employee* employeeDos = (Employee*)segundasHorasTrabajadas;
        if(employee-> horasTrabajadas > employeeDos-> horasTrabajadas)
        {
            retornar = 1;
        }
        else if(employee-> horasTrabajadas < employeeDos-> horasTrabajadas)
        {
            retornar = -1;
        }
        else
        {
            retornar = 0;
        }
    }
    return retornar;
}

int comparar_Nombre(void* primerNombre, void* segundoNombre)
{
    int retornar;
    if(primerNombre != NULL && segundoNombre != NULL)
    {
        Employee* employee = (Employee*)primerNombre;
        Employee* employeeDos = (Employee*)segundoNombre;

        retornar = strcmp(employee->nombre, employeeDos->nombre);
    }
    return retornar;

}

/// LinkedList* ll_filter(LinkedList* this,  --->  int (*pFunc)(void*) <-----)

int calcular_Sueldo(void* this)
{
    Employee* employee = NULL;
    int retorno = -1;
    int horasTrabajadas;
    int cantidad = 0;
    int cantidadDos = 0;
    int cantidadTres = 0;
    int sueldo;
    if(this != NULL)
    {
        employee = (Employee *)this;
        employee_getHorasTrabajadas(employee, &horasTrabajadas);
        if(horasTrabajadas <= 120)
        {
            cantidad = horasTrabajadas * 180;
        }
        if(horasTrabajadas <= 160)
        {
            cantidad = 120 * 180;
            cantidadDos = (horasTrabajadas - 120) * 240;
        }
        if(horasTrabajadas <= 240)
        {
            cantidad = 120 * 180;
            cantidadDos = 40 * 240;
            cantidadTres = (horasTrabajadas - 160) * 350;
        }
        sueldo = cantidad + cantidadDos + cantidadTres;
        employee->sueldo = sueldo;
    }
    return retorno;
}


float calcular_Promedio(LinkedList* listaEmpleados)
{
    Employee* miEmpleado = NULL;
    int sueldo;
    float retorno = -1;
    int index;
    float promedio;
    int suma = 0;
    int contador;
     if(listaEmpleados != NULL)
    {
        contador = ll_len(listaEmpleados);
        if(contador > 0)
        {
            for(index = 0; index < contador; index++)
            {
                miEmpleado = (Employee*)ll_get(listaEmpleados, index);
                employee_getSueldo(miEmpleado, &sueldo);
                suma = suma + sueldo;
            }
            promedio = suma / contador;
            retorno = promedio;
        }
    }
    return retorno;
}
