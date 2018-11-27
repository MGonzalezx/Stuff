#define CANTIDADDIRECTORES 2
#define isActive 0
#define isEmpty 1
#include "Peliculas.h"

typedef struct
{
    int dia;
    int mes;
    int anio;
}eFecha;
typedef struct
{
    int id;
    char nombre[20];
    eFecha nacimiento;
    char nacionalidad[30];
    int estado;

}eDirector;



/** \brief Inicializamos en que posicion vamos a comenzar a ingresar directores
 *
 * \param eDirector Array con la cadena a ser analizada
 * \param int
 * \return int
 *
 */
int inicializarDirector( eDirector listado[],int );



/** \brief Busca si hay lugar libre para seguir ingresando directores.
 *
 * \param eDirector Array con la cadena a ser analizada
 * \param int cantidad con la que vamos a trabajar
 * \return int
 *
 */
int buscarLibreDirector(eDirector listado[],int );


/** \brief Pide y carga los datos del director
 *
 * \param eDirector Array con la cadena a ser analizada
 * \param int cantidad de directores
 * \return int
 *
 */
int cargarDatosDirector(eDirector listado[], int );


/** \brief Funcion para mostrar un director
 *
 * \param eDirector unDirector Array con la cadena a ser analizada
 * \return void
 *
 */
void mostrarUnDirector(eDirector unDirector);


/** \brief Muestra todos los directores ingresados
 *
 * \param eDirector Array con la cadena a ser analizada
 * \param int
 * \return int
 *
 */
int listadoDirectores(eDirector listado[],int);


void darDeBajaDirector(eDirector listado[], int cantidad);

void peliculas_Con_Director(ePelicula* listaPelicula, eDirector* listaDirector, int lenP, int lenD);

int nombre_Repetido(eDirector* miDirector, int lenD, char* nombre);

int contador_Peliculas(ePelicula* listaPelicula, int idDirector, int cantP);
