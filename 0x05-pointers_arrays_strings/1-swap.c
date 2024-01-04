#include "main.h"
/**
*swap_int - Resets the address pointed to as zer
*@a: Number to swap
*@b: Number to swap
*Return:void
**/
void swap_int(int *a, int *b)
{
int i;
i = *a;
*a = *b;
*b = i;
}
