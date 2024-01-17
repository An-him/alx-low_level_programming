#include "main.h"
/**
*create_array -  creates array of chars and initializes with a specific char.
*@size: size of bytes to allocate
*@c: character to fill
*Return: pointer to allocated memory
**/
char *create_array(unsigned int size, char c)
{
unsigned int i = 0;
char *dest = NULL;
if (size == 0)
{
return (NULL);
}
dest = malloc(size);
if  (dest == NULL)
{
return (NULL);
}
while (i < size)
{
dest[i] = c;
i++;
}
return (dest);
}
