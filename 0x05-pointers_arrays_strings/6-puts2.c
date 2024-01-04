#include "main.h"
/**
*puts2 - print every other char of string, starting with first character
*@str: string in question
*Return: void
**/
void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i = i + 2)
{
putchar(str[i]);
}
putchar(10);
}
