#include "main.h"
/**
*clear_bit - sets the value of a bit to 1 at a given index
*@n:  pointer to int
*@index: index of number to shift bit
*Return: 1
**/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
{
return (-1);
}
*n = (~(1UL << index) & *n);
return (1);
}
