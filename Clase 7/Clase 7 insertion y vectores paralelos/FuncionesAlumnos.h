#define A 1

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
