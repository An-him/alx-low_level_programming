#include "main.h"
/**
*print_line - function that draws a straight line in the terminal.
*@n: size of line
*Return: int
**/
void print_line(int n)
{
int i;
i = 0;
while (i < n)
{
if (n <= 0)
{
_putchar(10);
}
_putchar(95);
i++;
}
_putchar(10);
}
