#include "main.h"
/**
*_memcpy - function copies memory area.
*@dest: memory destination
*@src: memory source
*@n: bytes
*Return: void
**/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n ; i++)
{
dest[i] = src[i];
}
return (dest);
}
