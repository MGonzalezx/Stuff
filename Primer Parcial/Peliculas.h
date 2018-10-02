#define A 1

typedef struct
{
    int identificadorUnivico;
    char titulo[50];
    int anio;
    char nacionalidad[50];
    char director[50];
    int estado;

} ePeliculas;
int initPelicuas( ePeliculas [],int );

int buscarLugarLibre(ePeliculas [],int );

int siguienteIdPeliculas(ePeliculas [],int );

int eGen_buscarPorId(ePeliculas [] ,int , int );

void mostrarUnaPelicula(ePeliculas parametro);

void mostrarListadoDePeliculas(ePeliculas listado[], int tam);

int darAltaPeliculas(ePeliculas [] ,int );


