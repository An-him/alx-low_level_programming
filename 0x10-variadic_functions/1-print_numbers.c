#include "variadic_functions.h"
/**
*print_numbers - prints numbers, followed by a new line
*@separator: to print before string
*@n: number of variables
*Return: void
**/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
int x;
va_list ap;
va_start(ap, n);

for (i = 0; i < n; i++)
{
x = va_arg(ap, int);
printf("%i", x);

if (separator == NULL && i != n - 1)
printf("%s", separator);
}
putchar('\n');
va_end(ap);
}
