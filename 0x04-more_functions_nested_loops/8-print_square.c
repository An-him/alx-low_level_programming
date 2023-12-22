#include "main.h"
/**
*print_square - function prints a square, followed by new line
*@size: size of square to print
*
**/
void print_square(int size)
{
int i, j;
if (size <= 0)
{
_putchar(10);
}
i = 0, j = 0;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar(35);
}
_putchar(10);
}
}
