#include <stdio.h>
#include <stdlib.h>
//Tiene que estar arriba las anidadas
typedef struct
{
    int dia;
    int mes;
    int anio;

}eFecha;
typedef struct
{
    int id;
    char nombre[50];
    eFecha nacimiento;
    eFecha ingreso;


    /*
    int diaNacimiento;
    int mesNacimiento;
    int anioNacimiento;*/ //Una forma de hacerlo, pero incorrecto

}eEmpleado;



int main()
{
    eEmpleado miEmpleado;

    miEmpleado.id =25;
    miEmpleado.nacimiento.dia = 20;
    miEmpleado.nacimiento.mes = 10;
    return 0;
}
