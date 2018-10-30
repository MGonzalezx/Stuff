typedef struct
{
    char nombre [500];
    char apellido[500];
    int id;
    int isEmpty;


} ePersona;

ePersona* nuevaPersona(int id, char* nombre, char* apellido);

ePersona* otraPersona();
