#ifndef MAIN_H
#define MAIN_H

/*Libraries ->*/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/*Prototypes ->*/
int _printf(const char *format, ...);

/*String functs ->*/
int _strlen(const char *);
int _strchr(const char *);

/*Aux_functs ->*/
int (*get_type_funct(const char *arg))(char *, int, va_list);
int correct_printf(const char *, char *);
int verify_format(char);
int program_closure(char *buffer, int counter, va_list args);

/*Print functs*/
int print_str(char *, int, va_list);
int print_chr(char *, int, va_list);
int print_mod(char *, int, va_list);

/*Struct to types*/
typedef struct funct
{
	char *ptr;
	int (*f)(char *, int, va_list args);
} func_t;

/*Data type funct*/


#endif
