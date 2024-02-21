#include "main.h"
/**
*times_table - times of 9table
*Return: void
**/
void times_table(void)
{
int i, j;
while (i < 10)
{
while (j < 10)
{
printf("%i\n", j);
j *= i;
}
++i;
}
}
