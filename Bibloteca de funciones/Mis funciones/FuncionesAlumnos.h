#define A 1

/*#define A 3
typedef struct
{
    int idAsociado;
    char motivo[50];
    char estado[50];
    int idLlamada;
    int isEmpty;
    int idAmbulancia;
    int tiempo;

} eLlamada;

typedef struct
{
    int id;
    char dni[8];
    char nombre[50];
    char apellido[50];
    int edad;
    int isEmpty ;
    int isActive ;

} eAsociado;

int buscarLibre(eAsociado listado[], int cantidad);
int cargarUnAsociado(eAsociado listado[], int cantidad);


void menuDeOpciones();

void modificarUnAsociado(eAsociado[], int);
void darDeBajaAsociado(eAsociado listado[], int tam);
void nuevaLlamada(eLlamada listado[], int cantidad);
*/




typedef struct
{
    int legajo;
    char nombre[50];
    float altura;
    int nota;
    int estado;

} eAlumno;

void ordenarPorNombres(eAlumno[], int);

void cargarListadoDeAlumnos(eAlumno[], int);

void mostrarListadoDeAlumnos(eAlumno[], int);

void modificarListadoDeAlumnos(eAlumno[], int);

void alumnosAprobados(eAlumno[], int);

void alumnosLlamadosJuan(eAlumno[], int);

void nombresQueInicianConP(eAlumno[], int);


void mostrartUnAlumno(eAlumno);

eAlumno cargarUnAlumno();
