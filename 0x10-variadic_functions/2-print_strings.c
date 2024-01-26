#include "variadic_functions.h"
/**
*print_strings - function that prints strings, followed by a new line.
*@separator: string to be printed between the strings
*@n: is the number of strings passed to the function
*Return: void
**/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *x;
va_list ap;
va_start(ap, n);

for (i = 0; i < n; i++)
{
x = va_arg(ap, char *);

if (x == NULL)
{
printf("(nil)");
}
else

printf("%s", x);

if (separator != NULL && i != n - 1)
{
printf("%s", separator);
}
}
putchar(10);
va_end(ap);
}
