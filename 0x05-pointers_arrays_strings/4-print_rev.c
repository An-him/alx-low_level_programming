#include "main.h"
/**
*print_rev - function that returns the length of a string
*@s: string to swap
*Return: String in reverse
**/
void print_rev(char *s)
{
int length, i;
length  = 0;
while (s[length] != '\0')
{
length++;
}
for (i = length - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar(10);
}
