#include "main.h"
/**
*puts_half - prints half of string`
*@str: string to print
*Return: void
**/
void puts_half(char *str)
{
int  str1, i;
while (str[str1] != '\0')
{
str1++;
}
if (str1 % 2 == 1)
{
for (i = str1 / 2 + 1; i < str1; i++)
{
_putchar(str[i]);
}
_putchar(10);
return;
}
else
for (i = str1 / 2; i < str1; i++)
_putchar(str[i]);
_putchar(10);
}
