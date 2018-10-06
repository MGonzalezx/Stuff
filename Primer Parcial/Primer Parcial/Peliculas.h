#define CANTIDADPELICULAS 4
#define isActive 0
#define isEmpty 1

typedef struct
{
    char titulo[20];
    int anio;
    char nacionalidad[30];
    int idDirector;
    int identidficador;
    int estado;
} ePelicula;



int buscarLibrePelicula(ePelicula listado[],int );

int cargarDatosPelicula(ePelicula listado[], int );

void mostrarUnaPelicula(ePelicula unaPelicula);

int listadoPelicula(ePelicula listado[],int );

int inicializarPelicula( ePelicula listado[],int cantidad);
