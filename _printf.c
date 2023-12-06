#include "main.h"

/* _printf prototype ->
const char *format = String to print.*/

int _printf(const char *format, ...)
{
    int (*f)(char *, int, va_list);
    va_list args;

    int i = 0, counter = 0;

    size_t len_buffer = _strlen(format);
    char *buffer = malloc(len_buffer);

    va_start(args, format);

    if (correct_printf(format, buffer))

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
