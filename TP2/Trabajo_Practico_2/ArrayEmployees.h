
typedef struct
{
 int id;
 char name[51];
 char lastName[51];
 float salary;
 int sector;
 int isEmpty;

}Employee;


/** \brief To indicate that all position in the array are empty,
 * this function put the flag (isEmpty) in TRUE in all
 * position of the array
 * \param list Employee* Pointer to array of employees
 * \param len int Array length
 * \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
 *
 */
int initEmployees(Employee* list, int len);

/** \brief Busca si hay lugar libre para seguir ingresando directores.
 *
 * \param eDirector Array con la cadena a ser analizada
 * \param int cantidad con la que vamos a trabajar
 * \return int
 *
 */
int searchFreeSpaceEmployee(Employee* list, int len);

/** \brief Pide y carga los datos del director
 *
 * \param eDirector Array con la cadena a ser analizada
 * \param int cantidad de directores
 * \return int
 *
 */
 int cargar_Employee(Employee* list, int len);

/** \brief add in a existing list of employees the values received as parameters
 * in the first empty position
 * \param list employee*
 * \param len int
 * \param id int
 * \param name[] char
 * \param lastName[] char
 * \param salary float
 * \param sector int
 * \return int Return (-1) if Error [Invalid length or NULL pointer or without
free space] - (0) if Ok
 *
 */
int addEmployee(Employee* list, int len, int id, char name[],char
lastName[],float salary,int sector);

/** \brief Funcion para mostrar un director
 *
 * \param eDirector unDirector Array con la cadena a ser analizada
 * \return void
 *
 */
void mostrar_Un_Employee(Employee unEmployee);

/** \brief print the content of employees array
 *
 * \param list Employee*
 * \param length int
 * \return int
 *
 */
int printEmployees(Employee* list, int len);

/** \brief find an Employee by Id en returns the index position in array.
 *
 * \param list Employee*
 * \param len int
 * \param id int
 * \return Return employee index position or (-1) if [Invalid length or NULL
pointer received or employee not found]
 *
 */
int findEmployeeById(Employee* list, int len,int id);

/** \brief Remove a Employee by Id (put isEmpty Flag in 1)
 *
 * \param list Employee*
 * \param len int
 * \param id int
 * \return int Return (-1) if Error [Invalid length or NULL pointer or if can't
find a employee] - (0) if Ok
 *
 */
int removeEmployee(Employee* list, int len);


/** \brief Sort the elements in the array of employees, the argument order
indicate UP or DOWN order
 *
 * \param list Employee*
 * \param len int
 * \param order int [1] indicate UP - [0] indicate DOWN
 * \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
 *
 */
int sortEmployeesByLastName(Employee* list, int len, int order);

/** \brief Sort the elements in the array of employees, the argument order
indicate UP or DOWN order
 *
 * \param list Employee*
 * \param len int
 * \param order int [1] indicate UP - [0] indicate DOWN
 * \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
 *
 */
int sortEmployeesBySector(Employee* list, int len, int order);

/** \brief Pide id y modifica lo deseado
 *
 * \param list[] Employee
 * \param len int
 * \return void
 *
 */
void modificar_Employee(Employee list[], int len);


/** \brief Contamos las Altas para verificar que se haya ingresado datos a antes de informar
 *
 * \param list Employee*
 * \param len int
 * \return int
 *
 */
int contarAltasEmployee(Employee* list, int len);

/** \brief Suma todos los salarios y devuelve la suma total
 *
 * \param list Employee*
 * \param len int
 * \return float
 *
 */
float sumar_Salarios(Employee* list, int len);

/** \brief Saca el promedio de todos los salarios
 *
 * \param list Employee*
 * \param len int
 * \return float
 *
 */
float promedio_Salarios(Employee* list, int len);

/** \brief Devuelve la cantidad de salarios que superan el promedio
 *
 * \param list Employee*
 * \param len int
 * \return int
 *
 */
int cantidad_Salarios_Superando_Promedio(Employee* list, int len);
