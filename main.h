#ifndef MAIN_H
#define MAIN_H

/*Libraries ->*/
#include <unistd.h>
#include <stdlib.h>

/*Prototypes ->*/
int _printf(const char *format, ...);

/*String functs ->*/
int _strlen(const char *str);

/*Aux_functs ->*/
int correct_printf(char *buffer,const char *format);

#endif
