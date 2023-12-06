#include "main.h"

/* _printf prototype ->
const char *format = String to print.*/

int _printf(const char *format, ...)
{
    va_list args;
    int i = 0;
    int counter = 0;
    char *buffer;
    int (*f)(char *, int, va_list);
    size_t len_buffer = _strlen(format);
    buffer = malloc(len_buffer);

    va_start(args, format);

    if (correct_printf(format, buffer) == 1)
        {
        fprintf(stderr, "ERROR\n");
        exit(0);
        }

    for (; i <= _strlen(format); i++){

        if (format[i] == '%'){
            f = get_type_funct(&(format[i + 1]));
            if (f != NULL){
                counter = f(&buffer[counter], counter, args);
                i++;
            }
        }

        else {
            buffer[counter] = format[i];
            counter++;
        }
    }

    program_closure(buffer, counter, args);
    return counter;
}
