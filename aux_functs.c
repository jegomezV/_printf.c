/*Header ->*/
#include "main.h"

int (*get_type_funct(const char *arg))(char *, int, va_list){
    int i = 0;

    func_t form[] = {
        {"c", print_chr},
        {"s", print_str},
        {"%", print_mod},
        {NULL, NULL}
    };

    while (i < 4){
        if (*arg == *(form[i]).ptr)
            return ((form[i].f));
        i++;
    }
    return (NULL);
}

/*Funct to comprobate a correct _printf ->*/
int correct_printf(const char *format, char *buffer)
{
    int percent_char = _strchr(format);

	if (!format || !buffer)
        {
        printf("\nif format\n");
		return 1;
        }
    
    else if (format[percent_char] == '%' && verify_format(format[percent_char + 1]) == 1)
        {
            printf("EL FORMATO INGRESADO ES INCORRECTO");
            return 1;
        }

	else
        {
        printf("\nCORRECT CHECK ->\n");
		return (0);
        }

}

int verify_format(char arg)
{

if (arg == 's' || arg == 'c' || arg == '%')
	return (0);

else
	return (1);

}

int program_closure(char *buffer, int counter, va_list args){
    write (1, buffer, counter);
    free (buffer);
    va_end (args);
    return counter;
}