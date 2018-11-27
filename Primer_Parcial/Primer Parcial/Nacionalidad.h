#define CANTIDADDIRECTORES 2
#define isActive 0
#define isEmpty 1


typedef struct
{
    int id;
    char descripcion[20];
    int estado;

}eNacionalidad;

int buscarLibreNacionalidad(eNacionalidad listado[],int cantidad);

int inicializarNacionalidad(eNacionalidad listado[], int cantidad);
