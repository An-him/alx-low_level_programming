#include "main.h"
/**
*get_endianness - checks the Endian of processor
*Return: void
**/
int get_endianness(void)
{
int Endian = 123;
char *c = (char *)&Endian;
if (*c != 0)
{
return (1);
}
else
return (0);
}
