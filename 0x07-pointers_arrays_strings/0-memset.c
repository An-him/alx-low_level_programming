#include "main.h"
/**
*_memset - function fills memory with a constant byte.
*@s: memoryspace to fill
*@b:byte to fill
*@n:number of bytes
*Return: pointer to memory space.
**/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
