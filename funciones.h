#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estructuras.h"


#ifndef _FUNCIONES.H_
#define _FUNCIONES.H_

typedef struct {
	int id_del_libro;
	char *nombre_del_libro;
	int ejemplares;
}libro;



typedef struct {
	int id_del_usuario;
	char *nombre_de_usuario;
}usuario;

typedef struct{
	
}prestamo;



#endif
