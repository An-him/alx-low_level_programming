#include "main.h"
/**
*_puts -  function that prints a string, followed by a new line, to stdout.
*@str: string
*Return: void
**/
void _puts(char *str)
{
write(1, str, strlen(str));
_putchar(10);
}
