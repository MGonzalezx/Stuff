int controller_loadFromText(char* path , LinkedList* pArrayListEmployee);
int controller_loadFromBinary(char* path , LinkedList* pArrayListEmployee);
int controller_addEmployee(LinkedList* pArrayListEmployee);
int controller_editEmployee(LinkedList* pArrayListEmployee);
int controller_removeEmployee(LinkedList* pArrayListEmployee);
int controller_ListEmployee(LinkedList* pArrayListEmployee);
int controller_sortEmployee(LinkedList* pArrayListEmployee);
int controller_saveAsText(char* path, LinkedList* pArrayListEmployee, float promedioSueldos);
int controller_saveAsBinary(char* path , LinkedList* pArrayListEmployee);
int controller_filtrarSueldo(LinkedList* pArrayListEmployee);
int controller_filtrarNombre(LinkedList* pArrayListEmployee);
int controller_ListEmployee_Con_Sueldo(LinkedList* pArrayListEmployee);
int controller_lista_Con_Sueldo(LinkedList* pArrayListEmployee);

