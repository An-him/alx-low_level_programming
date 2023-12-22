#include "main.h"
/**
*print_triangle - function that prints a triangle, followed by a new line.
*@size: Of triangle
*Return: void
**/
void print_triangle(int size)
{
int rows, columns, spaces;
spaces = 0;
columns = 0;
for (rows = 0; rows < size; rows++)
{
for (spaces = rows; spaces < size; spaces++)
{
_putchar(' ');
}
for (columns = 0; columns < rows; columns++)
{
_putchar('#');
}
_putchar('\n');
}
}
