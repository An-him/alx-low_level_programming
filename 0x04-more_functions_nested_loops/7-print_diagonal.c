#include "main.h"
/**
*print_diagonal - function that draws a straight line in the terminal.
*@n: size of line
*Return: int
**/
void print_diagonal(int n)
{
int rows, col, ang;
if (n <= 0)
{
_putchar(10);
return;
}
for (rows = 0; rows < n; rows++)
{
for (col = 0; col < rows; col++)
{
_putchar(32);
}
for (ang = col; ang <= col; ang++)
{
_putchar('\\');
}
_putchar(10);
}
}
