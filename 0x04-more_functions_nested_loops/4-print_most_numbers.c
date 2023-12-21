#include "main.h"
/**
*print_most_numbers-function prints numbers, from 0 to 9, followed by new line.
*Return: void
**/
void print_most_numbers(void)
{
int i = 48;
while (i < 58)
{
_putchar(i);
if (i == 49 || i == 51)
{
i++;
}
i++;
}
_putchar(10);
}
