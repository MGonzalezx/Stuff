typedef struct
{
    char nombre [500];
    char apellido[500];
    int id[500];
    int isEmpty[500];


} ePersona;

ePersona* nuevaPersona(int id, char* nombre, char* apellido);
