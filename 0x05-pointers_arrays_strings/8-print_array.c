#include "main.h"
/**
*print_array - prints contens from Array
*@a: array
*@n:number of elements
*Return: void
**/
void print_array(int *a, int n)
{
int i = 0;
while (i < n)
{
printf("%i", a[i]);
if (i < n - 1)
{
printf(", ");
}
i++;
}
printf("\n");
}
