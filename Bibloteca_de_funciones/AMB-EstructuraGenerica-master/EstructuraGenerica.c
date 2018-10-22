#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "EstructuraGenerica.h"
#define TAMANIO 10
#define OCUPADO 0
#define LIBRE 1



int eGen_init( eGenerica listado[],int limite)
{
    int retorno = -1;
    int i;
    if(limite > 0 && listado != NULL)
    {
        retorno = 0;
        for(i=0; i<limite; i++)
        {
            listado[i].estado = LIBRE;
            listado[i].idGenerica= 0;
        }
    }
    return retorno;
}

int eGen_buscarLugarLibre(eGenerica listado[],int limite)
{
    int retorno = -1;
    int i;
    if(limite > 0 && listado != NULL)
    {
        retorno = -2;
        for(i=0;i<limite;i++)
        {
            if(listado[i].estado == LIBRE)
            {
                retorno = i;
                break;
            }
        }
    }
    return retorno;
}

int eGen_siguienteId(eGenerica listado[],int limite)
{
    int retorno = 0;
    int i;
    if(limite > 0 && listado != NULL)
    {
        for(i=0; i<limite; i++)
        {
            if(listado[i].estado == OCUPADO)
            {
                    if(listado[i].idGenerica>retorno)
                    {
                         retorno=listado[i].idGenerica;
                    }

            }
        }
    }

    return retorno+1;
}


int eGen_buscarPorId(eGenerica listado[] ,int limite, int id)
{
    int retorno = -1;
    int i;
    if(limite > 0 && listado != NULL)
    {
        retorno = -2;
        for(i=0;i<limite;i++)
        {
            if(listado[i].estado == OCUPADO && listado[i].idGenerica == id)
            {
                retorno = i;
                break;
            }
        }
    }
    return retorno;
}



int eGen_mostrarUno(eGenerica parametro)
{
     printf("\n %s - %d - %d",parametro.nombre,parametro.idGenerica,parametro.estado);

}

int eGen_mostrarListado(eGenerica listado[],int limite)
{
    int retorno = -1;
    int i;
    if(limite > 0 && listado != NULL)
    {
        retorno = 0;
        for(i=0; i<limite; i++)
        {
            if(listado[i].estado==OCUPADO)
            {

                eGen_mostrarUno(listado[i]);
            }
        }
    }
    return retorno;
}


int eGen_mostrarListadoConBorrados(eGenerica listado[],int limite)
{
    int retorno = -1;
    int i;
    if(limite > 0 && listado != NULL)
    {
        retorno = 0;
        for(i=0; i<limite; i++)
        {
            if(listado[i].estado==LIBRE)
            {
                printf("\n[LIBRE]");
            }
            eGen_mostrarUno(listado[i]);
        }
    }
    return retorno;
}




int eGen_alta(eGenerica  listado[],int limite)
{
    int retorno = -1;
    char nombre[50];
    int id;
    int indice;

    if(limite > 0 && listado != NULL)
    {
        retorno = -2;
        indice = eGen_buscarLugarLibre(listado,limite);
        if(indice >= 0)
        {
            retorno = -3;
            id = eGen_siguienteId(listado,limite);

            //if(!getValidString("Nombre?","Error","Overflow", nombre,50,2))
            //{
                retorno = 0;
                strcpy(listado[indice].nombre,"juan ");
                listado[indice].idGenerica = id;
                listado[indice].estado = OCUPADO;
            //}
        }
    }
    return retorno;
}


int cargarDatos(egenerico listado[], int cantidad)
    {


    int index = buscarLibrePelicula(listado, cantidad)


    ePelicula miPelicula;

    printf("Ingrese Titulo: ");
    fflush(stdin);
    gets(miPelicula.titulo);
    printf("Ingrese Anio: ");
    scanf("%d", &miPelicula.anio);
    if(miPelicula.anio < 1900 || miPelicula.anio > 2018)
    {
        printf("Error! Ingresar anio entre 1900 y 2018: ");
        scanf("%d", &miPelicula.anio);
    }
    printf("Ingrese Nacionalidad: ");
    fflush(stdin);
    gets(miPelicula.nacionalidad);
    printf("Ingrese ID del director: ");
    scanf("%d", &miPelicula.idDirector);

    listado[index]= miPelicula ;

    return 1;

}


/*#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<conio.h>
//#include "misFunciones.h"

#define A 3
typedef struct
{
	int legajo;
	char apellido[25];
	char nombre[20];
	float promedio;
}alumno;


char menu(void);
void alta(alumno*);
void listar(alumno*);
void modificar(alumno*);
void baja(alumno*);
void mayorPromedio(alumno*);
int buscaLegajo(alumno*, int leg);
int buscarLibre(alumno*);
void toString(alumno*);
int guardarEnArchivo(alumno *);
int cargarDesdeArchivo(alumno *);
void crearTxt(alumno *);


int main()
{
	alumno alumnitos[A];
	char seguir='s';
	char guardar= 's';
	int i;

		for( i=0; i<A; i++)
		alumnitos[i].legajo=0;

	if(cargarDesdeArchivo(alumnitos))
	{
		printf("No se pudo abrir el fichero");
	}
	else
	{
		printf("Se cargaron las estructuras con exito\n");
	}

	system("pause");


	system("cls");
	do
	{
		switch(menu())
		{
			case '1':
				system("cls");
				alta(alumnitos);
				break;
			case '2':
				system("cls");
				listar(alumnitos);
				break;
			case '3':
				system("cls");
				baja(alumnitos);
				break;
			case '4':
				system("cls");
				modificar(alumnitos);
				break;
			case '5':
				system("cls");
				mayorPromedio(alumnitos);
				break;
			case '6':
                system("cls");
                crearTxt(alumnitos);
                break;
			case '7':

				printf("\nGuardar cambios S/N ?: ");
				guardar = tolower(getche());

				if(guardar == 's')
				{
					if(guardarEnArchivo(alumnitos))
					{
						printf("\nNo se pudo abrir el fichero\n");
					}
					else
					{
						printf("\nSe guardo la informacion con exito\n");
					}
				}

				seguir='n';
				break;

		}
	}while(seguir=='s');
	printf("\n");
	system("pause");
}
//Desarrollo de Funciones//

char menu()
{       char c;
	system("cls");
	printf("MENU\n1. ALTA\n2. LISTAR\n3. BAJA\n4. MODIFICAR\n5. MAYOR PROMEDIO\n6. LISTADO DE ALUMNOS\n7. SALIR\n");
	printf("Elija una opcion: ");
	c=getche();
	return c;
}

int buscarLibre(alumno losAlumnos[])
{
	int index=-1;
	int i;
	for( i=0; i < A; i++)
	   if(losAlumnos[i].legajo==0){
		index=i;
		break;
	   }
	return index;
}

void alta(alumno losAlumnos[])
{
	int index, i;
	float prom;
	int legajo;
	int encontro=0;
	//Buscamos cual es el primer indice libre dentro del array
	index=buscarLibre(losAlumnos);
	if(index!=-1)//si hay lugar:
	{

		printf("INGRESO DE DATOS:\n");
		printf("Ingrese legajo: ");
		scanf("%d", &legajo);
		//Buscamos si el legajo ya existe
		for(i=0; i<A; i++)
		{
			if(legajo==losAlumnos[i].legajo)
			{
				encontro=1;//encontro en true
				break;
			}
		}
		if(!encontro)//entra si encontro==0
		{
			losAlumnos[index].legajo=legajo;
			printf("Ingrese apellido: ");
			fflush(stdin);
			gets(losAlumnos[index].apellido);
			printf("Ingrese nombre: ");
			fflush(stdin);
			gets(losAlumnos[index].nombre);
			printf("Ingrese promedio: ");
			scanf("%f", &prom);
			losAlumnos[index].promedio=prom;
			system("cls");
		}
		else
		{
			printf("­­El legajo ingresado ya existe!!");
			getch();
		}
	}
	else
	{
		printf("No queda espacio");
		getch();
	}
}

void toString(alumno* unAlumno)
{
	printf("%d\t\t%s\t\t%s\t\t%.2f\n", unAlumno->legajo, unAlumno->apellido, unAlumno->nombre, unAlumno->promedio);
}

void listar(alumno *losAlumnos)
{
	int i,j;
	alumno auxAlumno;

	for(i=0; i<A-1;i++)
	{
		for(j=i+1; j<A; j++)
		{
			if(strcmp(losAlumnos[i].apellido,losAlumnos[j].apellido)>0)
			{
				auxAlumno=losAlumnos[i];
				losAlumnos[i]=losAlumnos[j];
				losAlumnos[j]=auxAlumno;
			}
		}
	}

	printf("Legajo\tApellido\tNombre\t\tPromedio\n");
	for(i=0; i<A; i++)
	{
		if(losAlumnos[i].legajo!=0)
		   toString((losAlumnos + i));

	}
	getch();
}
void baja(alumno* losAlumnos)
{
	int legajo, flag=0,i;
	char opcion;
	printf("Ingrese legajo a dar de baja: ");
	scanf("%d", &legajo);
	for(i=0; i<A; i++)
	{
		if(legajo==losAlumnos[i].legajo)
		{
			printf("Datos a eliminar:\n");

			toString((losAlumnos + i));

			printf("\nLegajo encontrado. ¨Seguro desea dar de baja?");
			opcion=getche();
			if(opcion=='s')
			{
				losAlumnos[i].legajo=0;
				printf("­­Registro eliminado!!");
			}
			else
			{
				printf("El registro no fue eliminado!");
			}
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("Legajo inexistente");
		getch();
	}
}
void modificar(alumno* losAlumnos)
{
	int legajo, flag=0,i;
	float prom;
	char opcion;
	system("cls");
	printf("Ingrese legajo a modificar: ");
	scanf("%d",& legajo);
	for( i=0; i<A; i++)
	{
		if(legajo==losAlumnos[i].legajo)
		{
			printf("Datos encontrados:\n");

			toString((losAlumnos + i));

			printf("\nIngrese el nuevo promedio: ");
			scanf("%f", &prom);
			printf("Esta seguro que desea modificar? ");
			opcion=getche();
			if(opcion=='s')
			{
				losAlumnos[i].promedio=prom;
				printf("Registro modificado");
			}
			else
			{
				printf("El registro no fue modificado");
			}
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("Legajo inexistente");
		getch();
	}
}
void mayorPromedio(alumno* losAlumnos)
{
	int i, flag=0;
	float maxProm;
	for(i=0; i<A; i++)
	{
		if(losAlumnos[i].legajo!=0)
		  if(flag==0 || losAlumnos[i].promedio>maxProm)
		  {
			maxProm=losAlumnos[i].promedio;
			flag=1;
		  }
	}
	printf("El o los Alumnos con mayor promedio (%.2f) son:\n", maxProm);
	for(i=0; i<A; i++)
	{
		if(losAlumnos[i].legajo!=0)
		  if(losAlumnos[i].promedio==maxProm)
		  {

			toString((losAlumnos + i));
		  }
	}
	getch();
}

int guardarEnArchivo(alumno * x)
{

	FILE *f;

		f=fopen("bin.dat","wb");
		if(f == NULL)
		{
			return 1;
		}

	fwrite(x,sizeof(alumno),A,f);

	fclose(f);

	return 0;
}

int cargarDesdeArchivo(alumno *x)
{
	int flag = 0;
	FILE *f;

	f=fopen("bin.dat", "rb");
	if(f==NULL)
	{
		f= fopen("bin.dat", "wb");
		if(f==NULL)
		{
			return 1;
		}

		flag=1;

	}

	if(flag ==0)
	{
	fread(x,sizeof(alumno),A,f);
    }

	fclose(f);
	return 0;

}

void crearTxt(alumno *x)
{
     int i;
     FILE *f;
     f=fopen("Lista de Precios.txt", "w");

     if(f == NULL)
     {
          printf("No se pudo abrir el archivo\n");
     }
     else
     {
         fprintf(f,"Listado de Alumnos\n\n\n");
         fprintf(f,"Legajo    Nombre     Promedio \n");

         for(i=0; i<A; i++)
         {
                  if(x[i].legajo != 0)
                  {
                  fprintf(f,"%d\t\%s %s\t\%.2f\n", x[i].legajo, x[i].apellido, x[i].nombre, x[i].promedio);
                  }
         }
      }

      fclose(f);

      printf("Listado creado con exito\n");
      system("pause");
}*/
