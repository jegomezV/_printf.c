#include "main.h"

/* _printf prototype ->
const char *format = String to print.*/

int _printf(const char *format, ...)
{
    int i = 0;
    int counter = 0;
    char *buffer;
    size_t len_buffer = _strlen(format);
    buffer = malloc(len_buffer);

    if (!correct_printf(buffer, format))
        exit(1);

    for (; i <= _strlen(format); i++){

        if (format[i] != '%'){
            buffer[counter] = format[i];
            counter++;
        }
    }
    write (1, buffer, counter);
    return (counter);
}
