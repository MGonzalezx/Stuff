#ifndef employee_H_INCLUDED
#define employee_H_INCLUDED
typedef struct
{
    int id;
    char nombre[128];
    int horasTrabajadas;
    char direccion[128];

}Employee;

static int ultimoIdEmployee = 0;
void cargarMaximoId(int id);



Employee* employee_new();
Employee* employee_newParametros(char* idStr,char* nombreStr,char* horasTrabajadasStr, char* direccion);
void employee_delete();

int employee_setId(Employee* this,int id);
int employee_getId(Employee* this,int* id);

int employee_setNombre(Employee* this,char* nombre);
int employee_getNombre(Employee* this,char* nombre);

int employee_setHorasTrabajadas(Employee* this,int horasTrabajadas);
int employee_getHorasTrabajadas(Employee* this,int* horasTrabajadas);

/*int employee_setSueldo(Employee* this,int sueldo);
int employee_getSueldo(Employee* this,int* sueldo);*/
int employee_setDireccion(Employee* this,int direccion);
int employee_getDireccion(Employee* this,int* direccion);
int ultimoID();
///VISTO EN CLASE Y CLASES DE APOYO
int comparar_ID(void* this, void* thisDos);
int comparar_Nombre(void* this, void* thisDos);
int comparar_HorasTrabajadas(void* this, void* thisDos);
int comparar_Sueldo(void* this, void* thisDos);
int filtrar_Sueldo_Menor_15000(void* employeeVoid);
int filtrar_Nombres_Inician_Con_A(void* employeeVoid);
int filtrar_Horas_Trabajadas(void* employeeVoid);

#endif // employee_H_INCLUDED
