#include "main.h"
/**
*malloc_checked - function that allocates memory using malloc
*@b: size
*Return: void
**/
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(sizeof(ptr) * b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
