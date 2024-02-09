#include "main.h"
/**
*get_bit - gets bit at index
*@n: number to shift
*@index: index of number to shift
*Return: int
**/
int get_bit(unsigned long int n, unsigned int index)
{
if (index > 63)
return (-1);
return (n = (n & (1UL << index)) >> index);
}
