#include "function_pointers.h"
/**
*@name: pointer to char
*print_name -  function that prints a name
*@f: function pointed by print_name
**/
void print_name(char *name, void (*f)(char *))
{
printf("%s", *f);
}
