/*Header ->*/
#include "main.h"

/*My own Strlen funct ->*/
int _strlen(const char *str){
    int i = 0;

    for (; str[i] != '\0'; i++){}

    return (i);
}
