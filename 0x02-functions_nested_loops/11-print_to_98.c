#include "main.h"
/**
*print_to_98 - Prints number from n to 98
*@n: Number
*Return: void
**/
void print_to_98(int n)
{
if (n <= 98)
{
while (n <= 98)
{
printf("%i", n);
if (n != 98)
putchar(44);
putchar(32);
n++;
}
}
else
while (n >= 98)
{
printf("%i", n);
if (n != 98)
putchar(44);
putchar(32);
n--;
}
printf("\n");
}
