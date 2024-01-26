#include "variadic_functions.h"
/**
*sum_them_all - returns the sum of all its parameters.
*@n: first argument for the function
*Return: sum of the parameters
**/
int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int i;
int x;

va_list num_args;
va_start(num_args, n);
if (n == 0)
{
return (0);
}
for (i = 0; i < n; i++)
{
x = va_arg(num_args, unsigned int);
sum += x;
}

va_end(num_args);
return (sum);
}
