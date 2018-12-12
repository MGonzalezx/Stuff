#include "Abono.h"
#include "LinkedList.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define PERSONAL 0
#define FAMILIAR 1
#define CORPORATIVO 2

static int ultimoId = 0;

static int ultimoID()
{
    ultimoId++;
    return ultimoId;
}



