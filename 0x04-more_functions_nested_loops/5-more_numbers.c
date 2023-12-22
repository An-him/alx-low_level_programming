#include "main.h"
/**
*more_numbers - unction that prints 10 times the numbers, from 0 to 14
*Return: 0
**/
void more_numbers(void)
{
int i, count;
for (count = 0; count < 10; count++)
{
for (i = 0; i <= 14; i++)
{
print_number(i);
}
_putchar(10);
}
