#include "main.h"

int print_str(char *buffer, int counter, va_list args){
    char *s;
    int i = 0;

    s = va_arg(args, char *);

    for (; i <= _strlen(s) ; i++){
        buffer[i] = s[i];
        counter++;
    }
    return counter;
}

int print_chr(char *buffer, int counter, va_list args){

    buffer[0] = va_arg(args, int);
    counter++;

    return counter;
}

int print_mod(char *buffer, int counter, __attribute__((unused))va_list args){

    buffer[0] = '%';
    counter++;

    return counter;
}