#define B 500
typedef struct
{
    int dia;
    int mes;
    int anio;

}eFecha;



typedef struct
{

    char nombre[50];
    char paisOrigen[50];
    eFecha nacimiento;
    eFecha ingreso;

} eDirector;
